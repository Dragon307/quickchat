// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: channel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_channel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_channel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_channel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_channel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_channel_2eproto;
namespace msg {
class Channel;
class ChannelDefaultTypeInternal;
extern ChannelDefaultTypeInternal _Channel_default_instance_;
class Channel_Member;
class Channel_MemberDefaultTypeInternal;
extern Channel_MemberDefaultTypeInternal _Channel_Member_default_instance_;
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::Channel* Arena::CreateMaybeMessage<::msg::Channel>(Arena*);
template<> ::msg::Channel_Member* Arena::CreateMaybeMessage<::msg::Channel_Member>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {

// ===================================================================

class Channel_Member PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.Channel.Member) */ {
 public:
  inline Channel_Member() : Channel_Member(nullptr) {};
  virtual ~Channel_Member();

  Channel_Member(const Channel_Member& from);
  Channel_Member(Channel_Member&& from) noexcept
    : Channel_Member() {
    *this = ::std::move(from);
  }

  inline Channel_Member& operator=(const Channel_Member& from) {
    CopyFrom(from);
    return *this;
  }
  inline Channel_Member& operator=(Channel_Member&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Channel_Member& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Channel_Member* internal_default_instance() {
    return reinterpret_cast<const Channel_Member*>(
               &_Channel_Member_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Channel_Member& a, Channel_Member& b) {
    a.Swap(&b);
  }
  inline void Swap(Channel_Member* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Channel_Member* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Channel_Member* New() const final {
    return CreateMaybeMessage<Channel_Member>(nullptr);
  }

  Channel_Member* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Channel_Member>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Channel_Member& from);
  void MergeFrom(const Channel_Member& from);
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
  void InternalSwap(Channel_Member* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.Channel.Member";
  }
  protected:
  explicit Channel_Member(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_channel_2eproto);
    return ::descriptor_table_channel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoleFieldNumber = 2,
    kJoinAtFieldNumber = 3,
    kUserIdFieldNumber = 1,
  };
  // string role = 2;
  void clear_role();
  const std::string& role() const;
  void set_role(const std::string& value);
  void set_role(std::string&& value);
  void set_role(const char* value);
  void set_role(const char* value, size_t size);
  std::string* mutable_role();
  std::string* release_role();
  void set_allocated_role(std::string* role);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_role();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_role(
      std::string* role);
  private:
  const std::string& _internal_role() const;
  void _internal_set_role(const std::string& value);
  std::string* _internal_mutable_role();
  public:

  // .google.protobuf.Timestamp join_at = 3;
  bool has_join_at() const;
  private:
  bool _internal_has_join_at() const;
  public:
  void clear_join_at();
  const PROTOBUF_NAMESPACE_ID::Timestamp& join_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_join_at();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_join_at();
  void set_allocated_join_at(PROTOBUF_NAMESPACE_ID::Timestamp* join_at);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_join_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_join_at();
  public:
  void unsafe_arena_set_allocated_join_at(
      PROTOBUF_NAMESPACE_ID::Timestamp* join_at);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_join_at();

  // uint64 user_id = 1;
  void clear_user_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 user_id() const;
  void set_user_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_user_id() const;
  void _internal_set_user_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:msg.Channel.Member)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr role_;
  PROTOBUF_NAMESPACE_ID::Timestamp* join_at_;
  ::PROTOBUF_NAMESPACE_ID::uint64 user_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_channel_2eproto;
};
// -------------------------------------------------------------------

class Channel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.Channel) */ {
 public:
  inline Channel() : Channel(nullptr) {};
  virtual ~Channel();

  Channel(const Channel& from);
  Channel(Channel&& from) noexcept
    : Channel() {
    *this = ::std::move(from);
  }

  inline Channel& operator=(const Channel& from) {
    CopyFrom(from);
    return *this;
  }
  inline Channel& operator=(Channel&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Channel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Channel* internal_default_instance() {
    return reinterpret_cast<const Channel*>(
               &_Channel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Channel& a, Channel& b) {
    a.Swap(&b);
  }
  inline void Swap(Channel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Channel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Channel* New() const final {
    return CreateMaybeMessage<Channel>(nullptr);
  }

  Channel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Channel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Channel& from);
  void MergeFrom(const Channel& from);
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
  void InternalSwap(Channel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.Channel";
  }
  protected:
  explicit Channel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_channel_2eproto);
    return ::descriptor_table_channel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Channel_Member Member;

  // accessors -------------------------------------------------------

  enum : int {
    kMembersFieldNumber = 5,
    kNameFieldNumber = 2,
    kTypeFieldNumber = 3,
    kCreateAtFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // repeated .msg.Channel.Member members = 5;
  int members_size() const;
  private:
  int _internal_members_size() const;
  public:
  void clear_members();
  ::msg::Channel_Member* mutable_members(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::msg::Channel_Member >*
      mutable_members();
  private:
  const ::msg::Channel_Member& _internal_members(int index) const;
  ::msg::Channel_Member* _internal_add_members();
  public:
  const ::msg::Channel_Member& members(int index) const;
  ::msg::Channel_Member* add_members();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::msg::Channel_Member >&
      members() const;

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string type = 3;
  void clear_type();
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_type();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_type(
      std::string* type);
  private:
  const std::string& _internal_type() const;
  void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // .google.protobuf.Timestamp create_at = 4;
  bool has_create_at() const;
  private:
  bool _internal_has_create_at() const;
  public:
  void clear_create_at();
  const PROTOBUF_NAMESPACE_ID::Timestamp& create_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_create_at();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_create_at();
  void set_allocated_create_at(PROTOBUF_NAMESPACE_ID::Timestamp* create_at);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_create_at() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_create_at();
  public:
  void unsafe_arena_set_allocated_create_at(
      PROTOBUF_NAMESPACE_ID::Timestamp* create_at);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_create_at();

  // uint64 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:msg.Channel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::msg::Channel_Member > members_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  PROTOBUF_NAMESPACE_ID::Timestamp* create_at_;
  ::PROTOBUF_NAMESPACE_ID::uint64 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_channel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Channel_Member

// uint64 user_id = 1;
inline void Channel_Member::clear_user_id() {
  user_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Channel_Member::_internal_user_id() const {
  return user_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Channel_Member::user_id() const {
  // @@protoc_insertion_point(field_get:msg.Channel.Member.user_id)
  return _internal_user_id();
}
inline void Channel_Member::_internal_set_user_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  user_id_ = value;
}
inline void Channel_Member::set_user_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:msg.Channel.Member.user_id)
}

// string role = 2;
inline void Channel_Member::clear_role() {
  role_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Channel_Member::role() const {
  // @@protoc_insertion_point(field_get:msg.Channel.Member.role)
  return _internal_role();
}
inline void Channel_Member::set_role(const std::string& value) {
  _internal_set_role(value);
  // @@protoc_insertion_point(field_set:msg.Channel.Member.role)
}
inline std::string* Channel_Member::mutable_role() {
  // @@protoc_insertion_point(field_mutable:msg.Channel.Member.role)
  return _internal_mutable_role();
}
inline const std::string& Channel_Member::_internal_role() const {
  return role_.Get();
}
inline void Channel_Member::_internal_set_role(const std::string& value) {
  
  role_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Channel_Member::set_role(std::string&& value) {
  
  role_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:msg.Channel.Member.role)
}
inline void Channel_Member::set_role(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  role_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:msg.Channel.Member.role)
}
inline void Channel_Member::set_role(const char* value,
    size_t size) {
  
  role_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:msg.Channel.Member.role)
}
inline std::string* Channel_Member::_internal_mutable_role() {
  
  return role_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Channel_Member::release_role() {
  // @@protoc_insertion_point(field_release:msg.Channel.Member.role)
  return role_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Channel_Member::set_allocated_role(std::string* role) {
  if (role != nullptr) {
    
  } else {
    
  }
  role_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), role,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:msg.Channel.Member.role)
}
inline std::string* Channel_Member::unsafe_arena_release_role() {
  // @@protoc_insertion_point(field_unsafe_arena_release:msg.Channel.Member.role)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return role_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Channel_Member::unsafe_arena_set_allocated_role(
    std::string* role) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (role != nullptr) {
    
  } else {
    
  }
  role_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      role, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.Channel.Member.role)
}

// .google.protobuf.Timestamp join_at = 3;
inline bool Channel_Member::_internal_has_join_at() const {
  return this != internal_default_instance() && join_at_ != nullptr;
}
inline bool Channel_Member::has_join_at() const {
  return _internal_has_join_at();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Channel_Member::_internal_join_at() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = join_at_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Channel_Member::join_at() const {
  // @@protoc_insertion_point(field_get:msg.Channel.Member.join_at)
  return _internal_join_at();
}
inline void Channel_Member::unsafe_arena_set_allocated_join_at(
    PROTOBUF_NAMESPACE_ID::Timestamp* join_at) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(join_at_);
  }
  join_at_ = join_at;
  if (join_at) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.Channel.Member.join_at)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel_Member::release_join_at() {
  auto temp = unsafe_arena_release_join_at();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel_Member::unsafe_arena_release_join_at() {
  // @@protoc_insertion_point(field_release:msg.Channel.Member.join_at)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = join_at_;
  join_at_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel_Member::_internal_mutable_join_at() {
  
  if (join_at_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    join_at_ = p;
  }
  return join_at_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel_Member::mutable_join_at() {
  // @@protoc_insertion_point(field_mutable:msg.Channel.Member.join_at)
  return _internal_mutable_join_at();
}
inline void Channel_Member::set_allocated_join_at(PROTOBUF_NAMESPACE_ID::Timestamp* join_at) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(join_at_);
  }
  if (join_at) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(join_at)->GetArena();
    if (message_arena != submessage_arena) {
      join_at = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, join_at, submessage_arena);
    }
    
  } else {
    
  }
  join_at_ = join_at;
  // @@protoc_insertion_point(field_set_allocated:msg.Channel.Member.join_at)
}

// -------------------------------------------------------------------

// Channel

// uint64 id = 1;
inline void Channel::clear_id() {
  id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Channel::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Channel::id() const {
  // @@protoc_insertion_point(field_get:msg.Channel.id)
  return _internal_id();
}
inline void Channel::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  id_ = value;
}
inline void Channel::set_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:msg.Channel.id)
}

// string name = 2;
inline void Channel::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Channel::name() const {
  // @@protoc_insertion_point(field_get:msg.Channel.name)
  return _internal_name();
}
inline void Channel::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:msg.Channel.name)
}
inline std::string* Channel::mutable_name() {
  // @@protoc_insertion_point(field_mutable:msg.Channel.name)
  return _internal_mutable_name();
}
inline const std::string& Channel::_internal_name() const {
  return name_.Get();
}
inline void Channel::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Channel::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:msg.Channel.name)
}
inline void Channel::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:msg.Channel.name)
}
inline void Channel::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:msg.Channel.name)
}
inline std::string* Channel::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Channel::release_name() {
  // @@protoc_insertion_point(field_release:msg.Channel.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Channel::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:msg.Channel.name)
}
inline std::string* Channel::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:msg.Channel.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Channel::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.Channel.name)
}

// string type = 3;
inline void Channel::clear_type() {
  type_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Channel::type() const {
  // @@protoc_insertion_point(field_get:msg.Channel.type)
  return _internal_type();
}
inline void Channel::set_type(const std::string& value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:msg.Channel.type)
}
inline std::string* Channel::mutable_type() {
  // @@protoc_insertion_point(field_mutable:msg.Channel.type)
  return _internal_mutable_type();
}
inline const std::string& Channel::_internal_type() const {
  return type_.Get();
}
inline void Channel::_internal_set_type(const std::string& value) {
  
  type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Channel::set_type(std::string&& value) {
  
  type_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:msg.Channel.type)
}
inline void Channel::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:msg.Channel.type)
}
inline void Channel::set_type(const char* value,
    size_t size) {
  
  type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:msg.Channel.type)
}
inline std::string* Channel::_internal_mutable_type() {
  
  return type_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Channel::release_type() {
  // @@protoc_insertion_point(field_release:msg.Channel.type)
  return type_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Channel::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:msg.Channel.type)
}
inline std::string* Channel::unsafe_arena_release_type() {
  // @@protoc_insertion_point(field_unsafe_arena_release:msg.Channel.type)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return type_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Channel::unsafe_arena_set_allocated_type(
    std::string* type) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (type != nullptr) {
    
  } else {
    
  }
  type_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      type, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.Channel.type)
}

// .google.protobuf.Timestamp create_at = 4;
inline bool Channel::_internal_has_create_at() const {
  return this != internal_default_instance() && create_at_ != nullptr;
}
inline bool Channel::has_create_at() const {
  return _internal_has_create_at();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Channel::_internal_create_at() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = create_at_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Channel::create_at() const {
  // @@protoc_insertion_point(field_get:msg.Channel.create_at)
  return _internal_create_at();
}
inline void Channel::unsafe_arena_set_allocated_create_at(
    PROTOBUF_NAMESPACE_ID::Timestamp* create_at) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(create_at_);
  }
  create_at_ = create_at;
  if (create_at) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.Channel.create_at)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel::release_create_at() {
  auto temp = unsafe_arena_release_create_at();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel::unsafe_arena_release_create_at() {
  // @@protoc_insertion_point(field_release:msg.Channel.create_at)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = create_at_;
  create_at_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel::_internal_mutable_create_at() {
  
  if (create_at_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    create_at_ = p;
  }
  return create_at_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Channel::mutable_create_at() {
  // @@protoc_insertion_point(field_mutable:msg.Channel.create_at)
  return _internal_mutable_create_at();
}
inline void Channel::set_allocated_create_at(PROTOBUF_NAMESPACE_ID::Timestamp* create_at) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(create_at_);
  }
  if (create_at) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(create_at)->GetArena();
    if (message_arena != submessage_arena) {
      create_at = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, create_at, submessage_arena);
    }
    
  } else {
    
  }
  create_at_ = create_at;
  // @@protoc_insertion_point(field_set_allocated:msg.Channel.create_at)
}

// repeated .msg.Channel.Member members = 5;
inline int Channel::_internal_members_size() const {
  return members_.size();
}
inline int Channel::members_size() const {
  return _internal_members_size();
}
inline void Channel::clear_members() {
  members_.Clear();
}
inline ::msg::Channel_Member* Channel::mutable_members(int index) {
  // @@protoc_insertion_point(field_mutable:msg.Channel.members)
  return members_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::msg::Channel_Member >*
Channel::mutable_members() {
  // @@protoc_insertion_point(field_mutable_list:msg.Channel.members)
  return &members_;
}
inline const ::msg::Channel_Member& Channel::_internal_members(int index) const {
  return members_.Get(index);
}
inline const ::msg::Channel_Member& Channel::members(int index) const {
  // @@protoc_insertion_point(field_get:msg.Channel.members)
  return _internal_members(index);
}
inline ::msg::Channel_Member* Channel::_internal_add_members() {
  return members_.Add();
}
inline ::msg::Channel_Member* Channel::add_members() {
  // @@protoc_insertion_point(field_add:msg.Channel.members)
  return _internal_add_members();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::msg::Channel_Member >&
Channel::members() const {
  // @@protoc_insertion_point(field_list:msg.Channel.members)
  return members_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_channel_2eproto
