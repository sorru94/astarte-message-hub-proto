// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: astarteplatform/msghub/message_hub_error.proto
// Protobuf C++ Version: 5.29.0

#include "astarteplatform/msghub/message_hub_error.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace astarteplatform {
namespace msghub {

inline constexpr MessageHubError::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : source_{},
        description_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR MessageHubError::MessageHubError(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct MessageHubErrorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageHubErrorDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageHubErrorDefaultTypeInternal() {}
  union {
    MessageHubError _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageHubErrorDefaultTypeInternal _MessageHubError_default_instance_;
}  // namespace msghub
}  // namespace astarteplatform
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto = nullptr;
const ::uint32_t
    TableStruct_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::astarteplatform::msghub::MessageHubError, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::astarteplatform::msghub::MessageHubError, _impl_.description_),
        PROTOBUF_FIELD_OFFSET(::astarteplatform::msghub::MessageHubError, _impl_.source_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::astarteplatform::msghub::MessageHubError)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::astarteplatform::msghub::_MessageHubError_default_instance_._instance,
};
const char descriptor_table_protodef_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n.astarteplatform/msghub/message_hub_err"
    "or.proto\022\026astarteplatform.msghub\"6\n\017Mess"
    "ageHubError\022\023\n\013description\030\001 \001(\t\022\016\n\006sour"
    "ce\030\002 \003(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto = {
    false,
    false,
    136,
    descriptor_table_protodef_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto,
    "astarteplatform/msghub/message_hub_error.proto",
    &descriptor_table_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto::offsets,
    file_level_enum_descriptors_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto,
    file_level_service_descriptors_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto,
};
namespace astarteplatform {
namespace msghub {
// ===================================================================

class MessageHubError::_Internal {
 public:
};

MessageHubError::MessageHubError(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:astarteplatform.msghub.MessageHubError)
}
inline PROTOBUF_NDEBUG_INLINE MessageHubError::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::astarteplatform::msghub::MessageHubError& from_msg)
      : source_{visibility, arena, from.source_},
        description_(arena, from.description_),
        _cached_size_{0} {}

MessageHubError::MessageHubError(
    ::google::protobuf::Arena* arena,
    const MessageHubError& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  MessageHubError* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:astarteplatform.msghub.MessageHubError)
}
inline PROTOBUF_NDEBUG_INLINE MessageHubError::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : source_{visibility, arena},
        description_(arena),
        _cached_size_{0} {}

inline void MessageHubError::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
MessageHubError::~MessageHubError() {
  // @@protoc_insertion_point(destructor:astarteplatform.msghub.MessageHubError)
  SharedDtor(*this);
}
inline void MessageHubError::SharedDtor(MessageLite& self) {
  MessageHubError& this_ = static_cast<MessageHubError&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.description_.Destroy();
  this_._impl_.~Impl_();
}

inline void* MessageHubError::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) MessageHubError(arena);
}
constexpr auto MessageHubError::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_.source_) +
          decltype(MessageHubError::_impl_.source_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::CopyInit(
        sizeof(MessageHubError), alignof(MessageHubError), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&MessageHubError::PlacementNew_,
                                 sizeof(MessageHubError),
                                 alignof(MessageHubError));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull MessageHubError::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_MessageHubError_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &MessageHubError::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<MessageHubError>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &MessageHubError::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<MessageHubError>(), &MessageHubError::ByteSizeLong,
            &MessageHubError::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_._cached_size_),
        false,
    },
    &MessageHubError::kDescriptorMethods,
    &descriptor_table_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* MessageHubError::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 64, 2> MessageHubError::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::astarteplatform::msghub::MessageHubError>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated string source = 2;
    {::_pbi::TcParser::FastUR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_.source_)}},
    // string description = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_.description_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string description = 1;
    {PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_.description_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated string source = 2;
    {PROTOBUF_FIELD_OFFSET(MessageHubError, _impl_.source_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
  }},
  // no aux_entries
  {{
    "\46\13\6\0\0\0\0\0"
    "astarteplatform.msghub.MessageHubError"
    "description"
    "source"
  }},
};

PROTOBUF_NOINLINE void MessageHubError::Clear() {
// @@protoc_insertion_point(message_clear_start:astarteplatform.msghub.MessageHubError)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.source_.Clear();
  _impl_.description_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* MessageHubError::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const MessageHubError& this_ = static_cast<const MessageHubError&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* MessageHubError::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const MessageHubError& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:astarteplatform.msghub.MessageHubError)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string description = 1;
          if (!this_._internal_description().empty()) {
            const std::string& _s = this_._internal_description();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "astarteplatform.msghub.MessageHubError.description");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          // repeated string source = 2;
          for (int i = 0, n = this_._internal_source_size(); i < n; ++i) {
            const auto& s = this_._internal_source().Get(i);
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "astarteplatform.msghub.MessageHubError.source");
            target = stream->WriteString(2, s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:astarteplatform.msghub.MessageHubError)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t MessageHubError::ByteSizeLong(const MessageLite& base) {
          const MessageHubError& this_ = static_cast<const MessageHubError&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t MessageHubError::ByteSizeLong() const {
          const MessageHubError& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:astarteplatform.msghub.MessageHubError)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated string source = 2;
            {
              total_size +=
                  1 * ::google::protobuf::internal::FromIntSize(this_._internal_source().size());
              for (int i = 0, n = this_._internal_source().size(); i < n; ++i) {
                total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
                    this_._internal_source().Get(i));
              }
            }
          }
           {
            // string description = 1;
            if (!this_._internal_description().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_description());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void MessageHubError::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<MessageHubError*>(&to_msg);
  auto& from = static_cast<const MessageHubError&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:astarteplatform.msghub.MessageHubError)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_source()->MergeFrom(from._internal_source());
  if (!from._internal_description().empty()) {
    _this->_internal_set_description(from._internal_description());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void MessageHubError::CopyFrom(const MessageHubError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:astarteplatform.msghub.MessageHubError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void MessageHubError::InternalSwap(MessageHubError* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.source_.InternalSwap(&other->_impl_.source_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.description_, &other->_impl_.description_, arena);
}

::google::protobuf::Metadata MessageHubError::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace msghub
}  // namespace astarteplatform
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_astarteplatform_2fmsghub_2fmessage_5fhub_5ferror_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
