// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: astarteplatform/msghub/config.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fconfig_2eproto_2epb_2eh

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
#include "google/protobuf/empty.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_astarteplatform_2fmsghub_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_astarteplatform_2fmsghub_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_astarteplatform_2fmsghub_2fconfig_2eproto;
namespace astarteplatform {
namespace msghub {
class ConfigMessage;
struct ConfigMessageDefaultTypeInternal;
extern ConfigMessageDefaultTypeInternal _ConfigMessage_default_instance_;
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

class ConfigMessage final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:astarteplatform.msghub.ConfigMessage) */ {
 public:
  inline ConfigMessage() : ConfigMessage(nullptr) {}
  ~ConfigMessage() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR ConfigMessage(
      ::google::protobuf::internal::ConstantInitialized);

  inline ConfigMessage(const ConfigMessage& from) : ConfigMessage(nullptr, from) {}
  inline ConfigMessage(ConfigMessage&& from) noexcept
      : ConfigMessage(nullptr, std::move(from)) {}
  inline ConfigMessage& operator=(const ConfigMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConfigMessage& operator=(ConfigMessage&& from) noexcept {
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
  static const ConfigMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConfigMessage* internal_default_instance() {
    return reinterpret_cast<const ConfigMessage*>(
        &_ConfigMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(ConfigMessage& a, ConfigMessage& b) { a.Swap(&b); }
  inline void Swap(ConfigMessage* other) {
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
  void UnsafeArenaSwap(ConfigMessage* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ConfigMessage* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<ConfigMessage>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ConfigMessage& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const ConfigMessage& from) { ConfigMessage::MergeImpl(*this, from); }

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
  void InternalSwap(ConfigMessage* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "astarteplatform.msghub.ConfigMessage"; }

 protected:
  explicit ConfigMessage(::google::protobuf::Arena* arena);
  ConfigMessage(::google::protobuf::Arena* arena, const ConfigMessage& from);
  ConfigMessage(::google::protobuf::Arena* arena, ConfigMessage&& from) noexcept
      : ConfigMessage(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kRealmFieldNumber = 1,
    kDeviceIdFieldNumber = 2,
    kCredentialsSecretFieldNumber = 3,
    kPairingUrlFieldNumber = 4,
    kPairingTokenFieldNumber = 5,
    kGrpcSocketHostFieldNumber = 7,
    kGrpcSocketPortFieldNumber = 6,
  };
  // string realm = 1;
  void clear_realm() ;
  const std::string& realm() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_realm(Arg_&& arg, Args_... args);
  std::string* mutable_realm();
  PROTOBUF_NODISCARD std::string* release_realm();
  void set_allocated_realm(std::string* value);

  private:
  const std::string& _internal_realm() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_realm(
      const std::string& value);
  std::string* _internal_mutable_realm();

  public:
  // optional string device_id = 2;
  bool has_device_id() const;
  void clear_device_id() ;
  const std::string& device_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_device_id(Arg_&& arg, Args_... args);
  std::string* mutable_device_id();
  PROTOBUF_NODISCARD std::string* release_device_id();
  void set_allocated_device_id(std::string* value);

  private:
  const std::string& _internal_device_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_device_id(
      const std::string& value);
  std::string* _internal_mutable_device_id();

  public:
  // optional string credentials_secret = 3;
  bool has_credentials_secret() const;
  void clear_credentials_secret() ;
  const std::string& credentials_secret() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_credentials_secret(Arg_&& arg, Args_... args);
  std::string* mutable_credentials_secret();
  PROTOBUF_NODISCARD std::string* release_credentials_secret();
  void set_allocated_credentials_secret(std::string* value);

  private:
  const std::string& _internal_credentials_secret() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_credentials_secret(
      const std::string& value);
  std::string* _internal_mutable_credentials_secret();

  public:
  // string pairing_url = 4;
  void clear_pairing_url() ;
  const std::string& pairing_url() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_pairing_url(Arg_&& arg, Args_... args);
  std::string* mutable_pairing_url();
  PROTOBUF_NODISCARD std::string* release_pairing_url();
  void set_allocated_pairing_url(std::string* value);

  private:
  const std::string& _internal_pairing_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pairing_url(
      const std::string& value);
  std::string* _internal_mutable_pairing_url();

  public:
  // optional string pairing_token = 5;
  bool has_pairing_token() const;
  void clear_pairing_token() ;
  const std::string& pairing_token() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_pairing_token(Arg_&& arg, Args_... args);
  std::string* mutable_pairing_token();
  PROTOBUF_NODISCARD std::string* release_pairing_token();
  void set_allocated_pairing_token(std::string* value);

  private:
  const std::string& _internal_pairing_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pairing_token(
      const std::string& value);
  std::string* _internal_mutable_pairing_token();

  public:
  // optional string grpc_socket_host = 7;
  bool has_grpc_socket_host() const;
  void clear_grpc_socket_host() ;
  const std::string& grpc_socket_host() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_grpc_socket_host(Arg_&& arg, Args_... args);
  std::string* mutable_grpc_socket_host();
  PROTOBUF_NODISCARD std::string* release_grpc_socket_host();
  void set_allocated_grpc_socket_host(std::string* value);

  private:
  const std::string& _internal_grpc_socket_host() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_grpc_socket_host(
      const std::string& value);
  std::string* _internal_mutable_grpc_socket_host();

  public:
  // optional uint32 grpc_socket_port = 6;
  bool has_grpc_socket_port() const;
  void clear_grpc_socket_port() ;
  ::uint32_t grpc_socket_port() const;
  void set_grpc_socket_port(::uint32_t value);

  private:
  ::uint32_t _internal_grpc_socket_port() const;
  void _internal_set_grpc_socket_port(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:astarteplatform.msghub.ConfigMessage)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 7, 0,
      117, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_ConfigMessage_default_instance_;

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
                          const ConfigMessage& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr realm_;
    ::google::protobuf::internal::ArenaStringPtr device_id_;
    ::google::protobuf::internal::ArenaStringPtr credentials_secret_;
    ::google::protobuf::internal::ArenaStringPtr pairing_url_;
    ::google::protobuf::internal::ArenaStringPtr pairing_token_;
    ::google::protobuf::internal::ArenaStringPtr grpc_socket_host_;
    ::uint32_t grpc_socket_port_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_astarteplatform_2fmsghub_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ConfigMessage

// string realm = 1;
inline void ConfigMessage::clear_realm() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.realm_.ClearToEmpty();
}
inline const std::string& ConfigMessage::realm() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.realm)
  return _internal_realm();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_realm(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.realm_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.realm)
}
inline std::string* ConfigMessage::mutable_realm() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_realm();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.realm)
  return _s;
}
inline const std::string& ConfigMessage::_internal_realm() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.realm_.Get();
}
inline void ConfigMessage::_internal_set_realm(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.realm_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_realm() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.realm_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_realm() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.realm)
  return _impl_.realm_.Release();
}
inline void ConfigMessage::set_allocated_realm(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.realm_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.realm_.IsDefault()) {
          _impl_.realm_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.realm)
}

// optional string device_id = 2;
inline bool ConfigMessage::has_device_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ConfigMessage::clear_device_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.device_id_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ConfigMessage::device_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.device_id)
  return _internal_device_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_device_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.device_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.device_id)
}
inline std::string* ConfigMessage::mutable_device_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_device_id();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.device_id)
  return _s;
}
inline const std::string& ConfigMessage::_internal_device_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.device_id_.Get();
}
inline void ConfigMessage::_internal_set_device_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.device_id_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_device_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.device_id_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_device_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.device_id)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.device_id_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.device_id_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ConfigMessage::set_allocated_device_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.device_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.device_id_.IsDefault()) {
          _impl_.device_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.device_id)
}

// optional string credentials_secret = 3;
inline bool ConfigMessage::has_credentials_secret() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ConfigMessage::clear_credentials_secret() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.credentials_secret_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ConfigMessage::credentials_secret() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.credentials_secret)
  return _internal_credentials_secret();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_credentials_secret(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.credentials_secret_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.credentials_secret)
}
inline std::string* ConfigMessage::mutable_credentials_secret() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_credentials_secret();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.credentials_secret)
  return _s;
}
inline const std::string& ConfigMessage::_internal_credentials_secret() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.credentials_secret_.Get();
}
inline void ConfigMessage::_internal_set_credentials_secret(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.credentials_secret_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_credentials_secret() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.credentials_secret_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_credentials_secret() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.credentials_secret)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.credentials_secret_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.credentials_secret_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ConfigMessage::set_allocated_credentials_secret(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.credentials_secret_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.credentials_secret_.IsDefault()) {
          _impl_.credentials_secret_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.credentials_secret)
}

// string pairing_url = 4;
inline void ConfigMessage::clear_pairing_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.pairing_url_.ClearToEmpty();
}
inline const std::string& ConfigMessage::pairing_url() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.pairing_url)
  return _internal_pairing_url();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_pairing_url(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.pairing_url_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.pairing_url)
}
inline std::string* ConfigMessage::mutable_pairing_url() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_pairing_url();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.pairing_url)
  return _s;
}
inline const std::string& ConfigMessage::_internal_pairing_url() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.pairing_url_.Get();
}
inline void ConfigMessage::_internal_set_pairing_url(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.pairing_url_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_pairing_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.pairing_url_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_pairing_url() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.pairing_url)
  return _impl_.pairing_url_.Release();
}
inline void ConfigMessage::set_allocated_pairing_url(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.pairing_url_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.pairing_url_.IsDefault()) {
          _impl_.pairing_url_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.pairing_url)
}

// optional string pairing_token = 5;
inline bool ConfigMessage::has_pairing_token() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ConfigMessage::clear_pairing_token() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.pairing_token_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ConfigMessage::pairing_token() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.pairing_token)
  return _internal_pairing_token();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_pairing_token(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.pairing_token_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.pairing_token)
}
inline std::string* ConfigMessage::mutable_pairing_token() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_pairing_token();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.pairing_token)
  return _s;
}
inline const std::string& ConfigMessage::_internal_pairing_token() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.pairing_token_.Get();
}
inline void ConfigMessage::_internal_set_pairing_token(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.pairing_token_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_pairing_token() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.pairing_token_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_pairing_token() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.pairing_token)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.pairing_token_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.pairing_token_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ConfigMessage::set_allocated_pairing_token(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.pairing_token_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.pairing_token_.IsDefault()) {
          _impl_.pairing_token_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.pairing_token)
}

// optional uint32 grpc_socket_port = 6;
inline bool ConfigMessage::has_grpc_socket_port() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void ConfigMessage::clear_grpc_socket_port() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.grpc_socket_port_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint32_t ConfigMessage::grpc_socket_port() const {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.grpc_socket_port)
  return _internal_grpc_socket_port();
}
inline void ConfigMessage::set_grpc_socket_port(::uint32_t value) {
  _internal_set_grpc_socket_port(value);
  _impl_._has_bits_[0] |= 0x00000010u;
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.grpc_socket_port)
}
inline ::uint32_t ConfigMessage::_internal_grpc_socket_port() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.grpc_socket_port_;
}
inline void ConfigMessage::_internal_set_grpc_socket_port(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.grpc_socket_port_ = value;
}

// optional string grpc_socket_host = 7;
inline bool ConfigMessage::has_grpc_socket_host() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void ConfigMessage::clear_grpc_socket_host() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.grpc_socket_host_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline const std::string& ConfigMessage::grpc_socket_host() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:astarteplatform.msghub.ConfigMessage.grpc_socket_host)
  return _internal_grpc_socket_host();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ConfigMessage::set_grpc_socket_host(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.grpc_socket_host_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:astarteplatform.msghub.ConfigMessage.grpc_socket_host)
}
inline std::string* ConfigMessage::mutable_grpc_socket_host() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_grpc_socket_host();
  // @@protoc_insertion_point(field_mutable:astarteplatform.msghub.ConfigMessage.grpc_socket_host)
  return _s;
}
inline const std::string& ConfigMessage::_internal_grpc_socket_host() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.grpc_socket_host_.Get();
}
inline void ConfigMessage::_internal_set_grpc_socket_host(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.grpc_socket_host_.Set(value, GetArena());
}
inline std::string* ConfigMessage::_internal_mutable_grpc_socket_host() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  return _impl_.grpc_socket_host_.Mutable( GetArena());
}
inline std::string* ConfigMessage::release_grpc_socket_host() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:astarteplatform.msghub.ConfigMessage.grpc_socket_host)
  if ((_impl_._has_bits_[0] & 0x00000008u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000008u;
  auto* released = _impl_.grpc_socket_host_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.grpc_socket_host_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ConfigMessage::set_allocated_grpc_socket_host(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  _impl_.grpc_socket_host_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.grpc_socket_host_.IsDefault()) {
          _impl_.grpc_socket_host_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:astarteplatform.msghub.ConfigMessage.grpc_socket_host)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace msghub
}  // namespace astarteplatform


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_astarteplatform_2fmsghub_2fconfig_2eproto_2epb_2eh
