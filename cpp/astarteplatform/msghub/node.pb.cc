// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: astarteplatform/msghub/node.proto
// Protobuf C++ Version: 5.27.2

#include "astarteplatform/msghub/node.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
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

inline constexpr Node::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : interfaces_json_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Node::Node(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct NodeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NodeDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~NodeDefaultTypeInternal() {}
  union {
    Node _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NodeDefaultTypeInternal _Node_default_instance_;
}  // namespace msghub
}  // namespace astarteplatform
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_astarteplatform_2fmsghub_2fnode_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_astarteplatform_2fmsghub_2fnode_2eproto = nullptr;
const ::uint32_t
    TableStruct_astarteplatform_2fmsghub_2fnode_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::astarteplatform::msghub::Node, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::astarteplatform::msghub::Node, _impl_.interfaces_json_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::astarteplatform::msghub::Node)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::astarteplatform::msghub::_Node_default_instance_._instance,
};
const char descriptor_table_protodef_astarteplatform_2fmsghub_2fnode_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n!astarteplatform/msghub/node.proto\022\026ast"
    "arteplatform.msghub\"\037\n\004Node\022\027\n\017interface"
    "s_json\030\002 \003(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto = {
    false,
    false,
    100,
    descriptor_table_protodef_astarteplatform_2fmsghub_2fnode_2eproto,
    "astarteplatform/msghub/node.proto",
    &descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_astarteplatform_2fmsghub_2fnode_2eproto::offsets,
    file_level_enum_descriptors_astarteplatform_2fmsghub_2fnode_2eproto,
    file_level_service_descriptors_astarteplatform_2fmsghub_2fnode_2eproto,
};
namespace astarteplatform {
namespace msghub {
// ===================================================================

class Node::_Internal {
 public:
};

Node::Node(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:astarteplatform.msghub.Node)
}
inline PROTOBUF_NDEBUG_INLINE Node::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::astarteplatform::msghub::Node& from_msg)
      : interfaces_json_{visibility, arena, from.interfaces_json_},
        _cached_size_{0} {}

Node::Node(
    ::google::protobuf::Arena* arena,
    const Node& from)
    : ::google::protobuf::Message(arena) {
  Node* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:astarteplatform.msghub.Node)
}
inline PROTOBUF_NDEBUG_INLINE Node::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : interfaces_json_{visibility, arena},
        _cached_size_{0} {}

inline void Node::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Node::~Node() {
  // @@protoc_insertion_point(destructor:astarteplatform.msghub.Node)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Node::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Node::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Node, _impl_._cached_size_),
              false,
          },
          &Node::MergeImpl,
          &Node::kDescriptorMethods,
          &descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 51, 2> Node::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967293,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Node_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::astarteplatform::msghub::Node>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated string interfaces_json = 2;
    {::_pbi::TcParser::FastUR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Node, _impl_.interfaces_json_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated string interfaces_json = 2;
    {PROTOBUF_FIELD_OFFSET(Node, _impl_.interfaces_json_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
  }},
  // no aux_entries
  {{
    "\33\17\0\0\0\0\0\0"
    "astarteplatform.msghub.Node"
    "interfaces_json"
  }},
};

PROTOBUF_NOINLINE void Node::Clear() {
// @@protoc_insertion_point(message_clear_start:astarteplatform.msghub.Node)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.interfaces_json_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Node::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:astarteplatform.msghub.Node)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated string interfaces_json = 2;
  for (int i = 0, n = this->_internal_interfaces_json_size(); i < n; ++i) {
    const auto& s = this->_internal_interfaces_json().Get(i);
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "astarteplatform.msghub.Node.interfaces_json");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:astarteplatform.msghub.Node)
  return target;
}

::size_t Node::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:astarteplatform.msghub.Node)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated string interfaces_json = 2;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_interfaces_json().size());
  for (int i = 0, n = _internal_interfaces_json().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_interfaces_json().Get(i));
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Node::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Node*>(&to_msg);
  auto& from = static_cast<const Node&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:astarteplatform.msghub.Node)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_interfaces_json()->MergeFrom(from._internal_interfaces_json());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Node::CopyFrom(const Node& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:astarteplatform.msghub.Node)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Node::InternalSwap(Node* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.interfaces_json_.InternalSwap(&other->_impl_.interfaces_json_);
}

::google::protobuf::Metadata Node::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
