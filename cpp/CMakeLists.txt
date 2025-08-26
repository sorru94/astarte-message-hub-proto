# Copyright 2025 SECO Mind Srl
# SPDX-License-Identifier: Apache-2.0

# Minimum CMake required
cmake_minimum_required(VERSION 3.15)

# Project definition
project(astarte-msg-hub-proto VERSION 0.8.4 LANGUAGES CXX)

# Setup libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Required settings for windows
if(MSVC)
    add_definitions(-D_WIN32_WINNT=0x600)
endif()

# gRPC needs Threads
find_package(Threads REQUIRED)
find_package(gRPC CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)

# set(_GRPC_CPP gRPC::grpc++)
# set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
# set(_REFLECTION gRPC::grpc++_reflection)

# if(CMAKE_CROSSCOMPILING)
#     find_program(_PROTOBUF_PROTOC protoc)
# else()
#     set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
# endif()

if(CMAKE_CROSSCOMPILING)
    find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
    set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)
endif()

# Define where generated files will go relative to the binary directory
set(_PROTO_GENERATED_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated")
file(MAKE_DIRECTORY "${_PROTO_GENERATED_OUTPUT_DIR}")
message(STATUS "Generated files output directory: ${_PROTO_GENERATED_OUTPUT_DIR}")

# Directory containing proto files (default to ../proto relative to this file)
if(NOT DEFINED PROTO_FOLDER)
    set(PROTO_FOLDER "${CMAKE_CURRENT_LIST_DIR}/../proto")
endif()
message(STATUS "Proto files source directory: ${PROTO_FOLDER}")

# Collect all .proto files
file(GLOB_RECURSE proto_files "${PROTO_FOLDER}/astarteplatform/msghub/*.proto")
if(NOT proto_files)
    message(FATAL_ERROR "No .proto files found in ${PROTO_FOLDER}/astarteplatform/msghub/")
endif()

set(_proto_generated_sources)
set(_proto_generated_headers)

# Compile all .proto files
foreach(proto_file ${proto_files})
    get_filename_component(proto_dir ${proto_file} DIRECTORY)
    get_filename_component(proto_name ${proto_file} NAME_WE)
    file(RELATIVE_PATH proto_rel_dir "${PROTO_FOLDER}" "${proto_dir}")

    set(out_proto_src "${_PROTO_GENERATED_OUTPUT_DIR}/${proto_rel_dir}/${proto_name}.pb.cc")
    set(out_proto_hdr "${_PROTO_GENERATED_OUTPUT_DIR}/${proto_rel_dir}/${proto_name}.pb.h")
    set(out_grpc_src "${_PROTO_GENERATED_OUTPUT_DIR}/${proto_rel_dir}/${proto_name}.grpc.pb.cc")
    set(out_grpc_hdr "${_PROTO_GENERATED_OUTPUT_DIR}/${proto_rel_dir}/${proto_name}.grpc.pb.h")

    list(APPEND _proto_generated_sources ${out_proto_src} ${out_grpc_src})
    list(APPEND _proto_generated_headers ${out_proto_hdr} ${out_grpc_hdr})

    # set(PROTOC_CMD_ARGS "")
    # list(APPEND PROTOC_CMD_ARGS --grpc_out "${_PROTO_GENERATED_OUTPUT_DIR}")
    # list(APPEND PROTOC_CMD_ARGS --cpp_out "${_PROTO_GENERATED_OUTPUT_DIR}")
    # list(APPEND PROTOC_CMD_ARGS -I "${PROTO_FOLDER}")

    # list(APPEND PROTOC_CMD_ARGS --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}")
    # list(APPEND PROTOC_CMD_ARGS "${proto_file}")

    # add_custom_command(
    #     OUTPUT "${out_proto_src}" "${out_proto_hdr}" "${out_grpc_src}" "${out_grpc_hdr}"
    #     COMMAND ${_PROTOBUF_PROTOC}
    #     ARGS ${PROTOC_CMD_ARGS}
    #     DEPENDS "${proto_file}"
    #             "${_PROTOBUF_PROTOC}"
    #             "${_GRPC_CPP_PLUGIN_EXECUTABLE}"
    #     COMMENT "Generating C++ and gRPC files from ${proto_name}.proto"
    # )

    # message(FATAL_ERROR "Content: ${Protobuf_INCLUDE_DIRS}")

    add_custom_command(
        OUTPUT "${out_proto_src}" "${out_proto_hdr}" "${out_grpc_src}" "${out_grpc_hdr}"
        COMMAND
            ${Protobuf_PROTOC_EXECUTABLE}
            --grpc_out "${_PROTO_GENERATED_OUTPUT_DIR}"
            --cpp_out "${_PROTO_GENERATED_OUTPUT_DIR}"
            -I "${PROTO_FOLDER}"
            --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
            "${proto_file}"
        DEPENDS "${proto_file}"
        COMMENT "Generating C++ and gRPC files from ${proto_name}.proto"
    )
endforeach()

add_library(astarte_msghub_proto ${_proto_generated_sources})
target_compile_features(astarte_msghub_proto PUBLIC cxx_std_17)

# Link the library against required dependencies (gRPC, Protobuf, Threads).
target_link_libraries(astarte_msghub_proto
    PUBLIC
        gRPC::grpc++
        gRPC::grpc++_reflection
        protobuf::libprotobuf
)

# Add include directories for the generated headers and the protobuf library headers
target_include_directories(astarte_msghub_proto
    PRIVATE
        "${_PROTO_GENERATED_OUTPUT_DIR}"
    PUBLIC
        "$<BUILD_INTERFACE:${_PROTO_GENERATED_OUTPUT_DIR}>"
)

# target_link_libraries(astarte_msghub_proto
#     PUBLIC
#         ${_GRPC_CPP}
#         ${_REFLECTION}
#         ${_PROTOBUF_LIBPROTOBUF}
# )

# # Add include directories for the generated headers and the original proto source directory
# target_include_directories(astarte_msghub_proto
#     PRIVATE
#         "${_PROTO_GENERATED_OUTPUT_DIR}"
#     PUBLIC
#         # For consumers building alongside this project (e.g., via FetchContent)
#         "$<BUILD_INTERFACE:${_PROTO_GENERATED_OUTPUT_DIR}>"
# )

set_target_properties(astarte_msghub_proto
    PROPERTIES
        PUBLIC_HEADER "$<BUILD_INTERFACE:${_PROTO_GENERATED_OUTPUT_DIR}>"
        POSITION_INDEPENDENT_CODE ${BUILD_SHARED_LIBS}
)


include(GNUInstallDirs)

install(
    TARGETS astarte_msghub_proto
    EXPORT astarte_msghub_proto
    LIBRARY
        DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE
        DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME
        DESTINATION ${CMAKE_INSTALL_BINDIR}
    PUBLIC_HEADER
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/astarte_msghub_proto
)

# create pkg-conf .pc for astarte_device_sdk
set(PC_NAME "astarte_msghub_proto")
set(PC_DESCRIPTION "Astarte MessageHub Proto")
set(PC_VERSION ${PROJECT_VERSION})
set(PC_REQUIRES "grpc++ protobuf")
set(PC_REQUIRES_PRIVATE "")
set(PC_LIB "-lastarte_msghub_proto")
set(PC_LIBS_PRIVATE "")
configure_file(
    pkg-config-template.pc.in
    astarte_msghub_proto.pc
    @ONLY
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/astarte_msghub_proto.pc  DESTINATION lib/pkgconfig)
