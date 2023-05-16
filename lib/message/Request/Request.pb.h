// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Request_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Request_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Request_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Request_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Request_2eproto;
namespace request {
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Request_InitMultiplayerState;
class Request_InitMultiplayerStateDefaultTypeInternal;
extern Request_InitMultiplayerStateDefaultTypeInternal _Request_InitMultiplayerState_default_instance_;
class Request_JoinState;
class Request_JoinStateDefaultTypeInternal;
extern Request_JoinStateDefaultTypeInternal _Request_JoinState_default_instance_;
}  // namespace request
PROTOBUF_NAMESPACE_OPEN
template<> ::request::Request* Arena::CreateMaybeMessage<::request::Request>(Arena*);
template<> ::request::Request_InitMultiplayerState* Arena::CreateMaybeMessage<::request::Request_InitMultiplayerState>(Arena*);
template<> ::request::Request_JoinState* Arena::CreateMaybeMessage<::request::Request_JoinState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace request {

// ===================================================================

class Request_InitMultiplayerState :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:request.Request.InitMultiplayerState) */ {
 public:
  Request_InitMultiplayerState();
  virtual ~Request_InitMultiplayerState();

  Request_InitMultiplayerState(const Request_InitMultiplayerState& from);
  Request_InitMultiplayerState(Request_InitMultiplayerState&& from) noexcept
    : Request_InitMultiplayerState() {
    *this = ::std::move(from);
  }

  inline Request_InitMultiplayerState& operator=(const Request_InitMultiplayerState& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request_InitMultiplayerState& operator=(Request_InitMultiplayerState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request_InitMultiplayerState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request_InitMultiplayerState* internal_default_instance() {
    return reinterpret_cast<const Request_InitMultiplayerState*>(
               &_Request_InitMultiplayerState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request_InitMultiplayerState& a, Request_InitMultiplayerState& b) {
    a.Swap(&b);
  }
  inline void Swap(Request_InitMultiplayerState* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request_InitMultiplayerState* New() const final {
    return CreateMaybeMessage<Request_InitMultiplayerState>(nullptr);
  }

  Request_InitMultiplayerState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request_InitMultiplayerState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request_InitMultiplayerState& from);
  void MergeFrom(const Request_InitMultiplayerState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request_InitMultiplayerState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "request.Request.InitMultiplayerState";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Request_2eproto);
    return ::descriptor_table_Request_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:request.Request.InitMultiplayerState)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Request_2eproto;
};
// -------------------------------------------------------------------

class Request_JoinState :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:request.Request.JoinState) */ {
 public:
  Request_JoinState();
  virtual ~Request_JoinState();

  Request_JoinState(const Request_JoinState& from);
  Request_JoinState(Request_JoinState&& from) noexcept
    : Request_JoinState() {
    *this = ::std::move(from);
  }

  inline Request_JoinState& operator=(const Request_JoinState& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request_JoinState& operator=(Request_JoinState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request_JoinState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request_JoinState* internal_default_instance() {
    return reinterpret_cast<const Request_JoinState*>(
               &_Request_JoinState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Request_JoinState& a, Request_JoinState& b) {
    a.Swap(&b);
  }
  inline void Swap(Request_JoinState* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request_JoinState* New() const final {
    return CreateMaybeMessage<Request_JoinState>(nullptr);
  }

  Request_JoinState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request_JoinState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request_JoinState& from);
  void MergeFrom(const Request_JoinState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request_JoinState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "request.Request.JoinState";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Request_2eproto);
    return ::descriptor_table_Request_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 1,
  };
  // optional string code = 1;
  bool has_code() const;
  private:
  bool _internal_has_code() const;
  public:
  void clear_code();
  const std::string& code() const;
  void set_code(const std::string& value);
  void set_code(std::string&& value);
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  std::string* mutable_code();
  std::string* release_code();
  void set_allocated_code(std::string* code);
  private:
  const std::string& _internal_code() const;
  void _internal_set_code(const std::string& value);
  std::string* _internal_mutable_code();
  public:

  // @@protoc_insertion_point(class_scope:request.Request.JoinState)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
  friend struct ::TableStruct_Request_2eproto;
};
// -------------------------------------------------------------------

class Request :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:request.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "request.Request";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Request_2eproto);
    return ::descriptor_table_Request_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Request_InitMultiplayerState InitMultiplayerState;
  typedef Request_JoinState JoinState;

  // accessors -------------------------------------------------------

  enum : int {
    kInitMultiplayerStateFieldNumber = 1,
    kJoinStateFieldNumber = 2,
  };
  // optional .request.Request.InitMultiplayerState init_multiplayer_state = 1;
  bool has_init_multiplayer_state() const;
  private:
  bool _internal_has_init_multiplayer_state() const;
  public:
  void clear_init_multiplayer_state();
  const ::request::Request_InitMultiplayerState& init_multiplayer_state() const;
  ::request::Request_InitMultiplayerState* release_init_multiplayer_state();
  ::request::Request_InitMultiplayerState* mutable_init_multiplayer_state();
  void set_allocated_init_multiplayer_state(::request::Request_InitMultiplayerState* init_multiplayer_state);
  private:
  const ::request::Request_InitMultiplayerState& _internal_init_multiplayer_state() const;
  ::request::Request_InitMultiplayerState* _internal_mutable_init_multiplayer_state();
  public:

  // optional .request.Request.JoinState join_state = 2;
  bool has_join_state() const;
  private:
  bool _internal_has_join_state() const;
  public:
  void clear_join_state();
  const ::request::Request_JoinState& join_state() const;
  ::request::Request_JoinState* release_join_state();
  ::request::Request_JoinState* mutable_join_state();
  void set_allocated_join_state(::request::Request_JoinState* join_state);
  private:
  const ::request::Request_JoinState& _internal_join_state() const;
  ::request::Request_JoinState* _internal_mutable_join_state();
  public:

  // @@protoc_insertion_point(class_scope:request.Request)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::request::Request_InitMultiplayerState* init_multiplayer_state_;
  ::request::Request_JoinState* join_state_;
  friend struct ::TableStruct_Request_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request_InitMultiplayerState

// -------------------------------------------------------------------

// Request_JoinState

// optional string code = 1;
inline bool Request_JoinState::_internal_has_code() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Request_JoinState::has_code() const {
  return _internal_has_code();
}
inline void Request_JoinState::clear_code() {
  code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Request_JoinState::code() const {
  // @@protoc_insertion_point(field_get:request.Request.JoinState.code)
  return _internal_code();
}
inline void Request_JoinState::set_code(const std::string& value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:request.Request.JoinState.code)
}
inline std::string* Request_JoinState::mutable_code() {
  // @@protoc_insertion_point(field_mutable:request.Request.JoinState.code)
  return _internal_mutable_code();
}
inline const std::string& Request_JoinState::_internal_code() const {
  return code_.GetNoArena();
}
inline void Request_JoinState::_internal_set_code(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Request_JoinState::set_code(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  code_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:request.Request.JoinState.code)
}
inline void Request_JoinState::set_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:request.Request.JoinState.code)
}
inline void Request_JoinState::set_code(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:request.Request.JoinState.code)
}
inline std::string* Request_JoinState::_internal_mutable_code() {
  _has_bits_[0] |= 0x00000001u;
  return code_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Request_JoinState::release_code() {
  // @@protoc_insertion_point(field_release:request.Request.JoinState.code)
  if (!_internal_has_code()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return code_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Request_JoinState::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  code_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:request.Request.JoinState.code)
}

// -------------------------------------------------------------------

// Request

// optional .request.Request.InitMultiplayerState init_multiplayer_state = 1;
inline bool Request::_internal_has_init_multiplayer_state() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || init_multiplayer_state_ != nullptr);
  return value;
}
inline bool Request::has_init_multiplayer_state() const {
  return _internal_has_init_multiplayer_state();
}
inline void Request::clear_init_multiplayer_state() {
  if (init_multiplayer_state_ != nullptr) init_multiplayer_state_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::request::Request_InitMultiplayerState& Request::_internal_init_multiplayer_state() const {
  const ::request::Request_InitMultiplayerState* p = init_multiplayer_state_;
  return p != nullptr ? *p : *reinterpret_cast<const ::request::Request_InitMultiplayerState*>(
      &::request::_Request_InitMultiplayerState_default_instance_);
}
inline const ::request::Request_InitMultiplayerState& Request::init_multiplayer_state() const {
  // @@protoc_insertion_point(field_get:request.Request.init_multiplayer_state)
  return _internal_init_multiplayer_state();
}
inline ::request::Request_InitMultiplayerState* Request::release_init_multiplayer_state() {
  // @@protoc_insertion_point(field_release:request.Request.init_multiplayer_state)
  _has_bits_[0] &= ~0x00000001u;
  ::request::Request_InitMultiplayerState* temp = init_multiplayer_state_;
  init_multiplayer_state_ = nullptr;
  return temp;
}
inline ::request::Request_InitMultiplayerState* Request::_internal_mutable_init_multiplayer_state() {
  _has_bits_[0] |= 0x00000001u;
  if (init_multiplayer_state_ == nullptr) {
    auto* p = CreateMaybeMessage<::request::Request_InitMultiplayerState>(GetArenaNoVirtual());
    init_multiplayer_state_ = p;
  }
  return init_multiplayer_state_;
}
inline ::request::Request_InitMultiplayerState* Request::mutable_init_multiplayer_state() {
  // @@protoc_insertion_point(field_mutable:request.Request.init_multiplayer_state)
  return _internal_mutable_init_multiplayer_state();
}
inline void Request::set_allocated_init_multiplayer_state(::request::Request_InitMultiplayerState* init_multiplayer_state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete init_multiplayer_state_;
  }
  if (init_multiplayer_state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      init_multiplayer_state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, init_multiplayer_state, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  init_multiplayer_state_ = init_multiplayer_state;
  // @@protoc_insertion_point(field_set_allocated:request.Request.init_multiplayer_state)
}

// optional .request.Request.JoinState join_state = 2;
inline bool Request::_internal_has_join_state() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || join_state_ != nullptr);
  return value;
}
inline bool Request::has_join_state() const {
  return _internal_has_join_state();
}
inline void Request::clear_join_state() {
  if (join_state_ != nullptr) join_state_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::request::Request_JoinState& Request::_internal_join_state() const {
  const ::request::Request_JoinState* p = join_state_;
  return p != nullptr ? *p : *reinterpret_cast<const ::request::Request_JoinState*>(
      &::request::_Request_JoinState_default_instance_);
}
inline const ::request::Request_JoinState& Request::join_state() const {
  // @@protoc_insertion_point(field_get:request.Request.join_state)
  return _internal_join_state();
}
inline ::request::Request_JoinState* Request::release_join_state() {
  // @@protoc_insertion_point(field_release:request.Request.join_state)
  _has_bits_[0] &= ~0x00000002u;
  ::request::Request_JoinState* temp = join_state_;
  join_state_ = nullptr;
  return temp;
}
inline ::request::Request_JoinState* Request::_internal_mutable_join_state() {
  _has_bits_[0] |= 0x00000002u;
  if (join_state_ == nullptr) {
    auto* p = CreateMaybeMessage<::request::Request_JoinState>(GetArenaNoVirtual());
    join_state_ = p;
  }
  return join_state_;
}
inline ::request::Request_JoinState* Request::mutable_join_state() {
  // @@protoc_insertion_point(field_mutable:request.Request.join_state)
  return _internal_mutable_join_state();
}
inline void Request::set_allocated_join_state(::request::Request_JoinState* join_state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete join_state_;
  }
  if (join_state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      join_state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, join_state, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  join_state_ = join_state;
  // @@protoc_insertion_point(field_set_allocated:request.Request.join_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace request

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Request_2eproto
