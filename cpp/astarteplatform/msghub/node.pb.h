// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: astarteplatform/msghub/node.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fnode_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fnode_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_astarteplatform_2fmsghub_2fnode_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_astarteplatform_2fmsghub_2fnode_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_astarteplatform_2fmsghub_2fnode_2eproto;
namespace astarteplatform {
namespace msghub {
class Node;
struct NodeDefaultTypeInternal;
extern NodeDefaultTypeInternal _Node_default_instance_;
}  // namespace msghub
}  // namespace astarteplatform
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace astarteplatform {
namespace msghub {

// ===================================================================


// -------------------------------------------------------------------

class Node final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:astarteplatform.msghub.Node) */ {
 public:
  inline Node() : Node(nullptr) {}
  ~Node() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Node(
      ::google::protobuf::internal::ConstantInitialized);

  inline Node(const Node& from) : Node(nullptr, from) {}
  inline Node(Node&& from) noexcept
      : Node(nullptr, std::move(from)) {}
  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }
  inline Node& operator=(Node&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Node& default_instance() {
    return *internal_default_instance();
  }
  static inline const Node* internal_default_instance() {
    return reinterpret_cast<const Node*>(
        &_Node_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Node& a, Node& b) { a.Swap(&b); }
  inline void Swap(Node* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Node* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Node* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Node>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Node& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Node& from) { Node::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Node* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "astarteplatform.msghub.Node"; }

 protected:
  explicit Node(::google::protobuf::Arena* arena);
  Node(::google::protobuf::Arena* arena, const Node& from);
  Node(::google::protobuf::Arena* arena, Node&& from) noexcept
      : Node(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kInterfacesJsonFieldNumber = 2,
  };
  // repeated string interfaces_json = 2;
  int interfaces_json_size() const;
  private:
  int _internal_interfaces_json_size() const;

  public:
  void clear_interfaces_json() ;
  const std::string& interfaces_json(int index) const;
  std::string* mutable_interfaces_json(int index);
  void set_interfaces_json(int index, const std::string& value);
  void set_interfaces_json(int index, std::string&& value);
  void set_interfaces_json(int index, const char* value);
  void set_interfaces_json(int index, const char* value, std::size_t size);
  void set_interfaces_json(int index, absl::string_view value);
  std::string* add_interfaces_json();
  void add_interfaces_json(const std::string& value);
  void add_interfaces_json(std::string&& value);
  void add_interfaces_json(const char* value);
  void add_interfaces_json(const char* value, std::size_t size);
  void add_interfaces_json(absl::string_view value);
  const ::google::protobuf::RepeatedPtrField<std::string>& interfaces_json() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_interfaces_json();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_interfaces_json() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_interfaces_json();

  public:
  // @@protoc_insertion_point(class_scope:astarteplatform.msghub.Node)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      51, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Node_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Node& from_msg);
    ::google::protobuf::RepeatedPtrField<std::string> interfaces_json_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_astarteplatform_2fmsghub_2fnode_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Node

// repeated string interfaces_json = 2;
inline int Node::_internal_interfaces_json_size() const {
  return _internal_interfaces_json().size();
}
inline int Node::interfaces_json_size() const {
  return _internal_interfaces_json_size();
}
inline void Node::clear_interfaces_json() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.interfaces_json_.Clear();
}
inline std::string* Node::add_interfaces_json()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  std::string* _s = _internal_mutable_interfaces_json()->Add();
  // @@protoc_insertion_point(field_add_mutable:astarteplatform.msghub.Node.interfaces_json)
  return _s;
}
inline const std::string& Node::interfaces_json(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.Node.interfaces_json)
  return _internal_interfaces_json().Get(index);
}
inline std::string* Node::mutable_interfaces_json(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.Node.interfaces_json)
  return _internal_mutable_interfaces_json()->Mutable(index);
}
inline void Node::set_interfaces_json(int index, const std::string& value) {
  _internal_mutable_interfaces_json()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::set_interfaces_json(int index, std::string&& value) {
  _internal_mutable_interfaces_json()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::set_interfaces_json(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_interfaces_json()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::set_interfaces_json(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_interfaces_json()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::set_interfaces_json(int index, absl::string_view value) {
  _internal_mutable_interfaces_json()->Mutable(index)->assign(
      value.data(), value.size());
  // @@protoc_insertion_point(field_set_string_piece:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::add_interfaces_json(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_interfaces_json()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::add_interfaces_json(std::string&& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_interfaces_json()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::add_interfaces_json(const char* value) {
  ABSL_DCHECK(value != nullptr);
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_interfaces_json()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::add_interfaces_json(const char* value, std::size_t size) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_interfaces_json()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:astarteplatform.msghub.Node.interfaces_json)
}
inline void Node::add_interfaces_json(absl::string_view value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_interfaces_json()->Add()->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_add_string_piece:astarteplatform.msghub.Node.interfaces_json)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Node::interfaces_json() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:astarteplatform.msghub.Node.interfaces_json)
  return _internal_interfaces_json();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Node::mutable_interfaces_json() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:astarteplatform.msghub.Node.interfaces_json)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_interfaces_json();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Node::_internal_interfaces_json() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.interfaces_json_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Node::_internal_mutable_interfaces_json() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.interfaces_json_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace msghub
}  // namespace astarteplatform


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fnode_2eproto_2epb_2eh