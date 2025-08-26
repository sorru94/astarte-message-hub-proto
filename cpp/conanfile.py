from conan import ConanFile

class Pkg(ConanFile):
    settings = "build_type"
    generators = "CMakeDeps", "CMakeToolchain",

    def requirements(self):
        self.requires("grpc/1.72.0")

    def build_requirements(self):
        self.tool_requires("grpc/1.72.0")
        self.tool_requires("protobuf/5.27.0")
