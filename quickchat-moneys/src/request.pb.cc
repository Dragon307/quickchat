// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#include "request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace msg {
class RequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Request> _instance;
} _Request_default_instance_;
}  // namespace msg
static void InitDefaultsscc_info_Request_request_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::_Request_default_instance_;
    new (ptr) ::msg::Request();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::Request::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Request_request_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Request_request_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_request_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_request_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_request_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_request_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::msg::Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::Request, id_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, user_id_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, type_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, amount_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, to_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, status_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, message_),
  PROTOBUF_FIELD_OFFSET(::msg::Request, create_at_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::msg::Request)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::_Request_default_instance_),
};

const char descriptor_table_protodef_request_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rrequest.proto\022\003msg\032\037google/protobuf/ti"
  "mestamp.proto\"\240\001\n\007Request\022\n\n\002id\030\001 \001(\t\022\017\n"
  "\007user_id\030\002 \001(\004\022\014\n\004type\030\003 \001(\t\022\016\n\006amount\030\004"
  " \001(\004\022\n\n\002to\030\005 \001(\004\022\016\n\006status\030\006 \001(\t\022\017\n\007mess"
  "age\030\007 \001(\t\022-\n\tcreate_at\030\010 \001(\0132\032.google.pr"
  "otobuf.Timestampb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_request_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_request_2eproto_sccs[1] = {
  &scc_info_Request_request_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_request_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_request_2eproto = {
  false, false, descriptor_table_protodef_request_2eproto, "request.proto", 224,
  &descriptor_table_request_2eproto_once, descriptor_table_request_2eproto_sccs, descriptor_table_request_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_request_2eproto::offsets,
  file_level_metadata_request_2eproto, 1, file_level_enum_descriptors_request_2eproto, file_level_service_descriptors_request_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_request_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_request_2eproto)), true);
namespace msg {

// ===================================================================

void Request::InitAsDefaultInstance() {
  ::msg::_Request_default_instance_._instance.get_mutable()->create_at_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class Request::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& create_at(const Request* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
Request::_Internal::create_at(const Request* msg) {
  return *msg->create_at_;
}
void Request::clear_create_at() {
  if (GetArena() == nullptr && create_at_ != nullptr) {
    delete create_at_;
  }
  create_at_ = nullptr;
}
Request::Request(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.Request)
}
Request::Request(const Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_id(),
      GetArena());
  }
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_type(),
      GetArena());
  }
  status_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_status().empty()) {
    status_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_status(),
      GetArena());
  }
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_message(),
      GetArena());
  }
  if (from._internal_has_create_at()) {
    create_at_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.create_at_);
  } else {
    create_at_ = nullptr;
  }
  ::memcpy(&user_id_, &from.user_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&to_) -
    reinterpret_cast<char*>(&user_id_)) + sizeof(to_));
  // @@protoc_insertion_point(copy_constructor:msg.Request)
}

void Request::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Request_request_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&create_at_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&to_) -
      reinterpret_cast<char*>(&create_at_)) + sizeof(to_));
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:msg.Request)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Request::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete create_at_;
}

void Request::ArenaDtor(void* object) {
  Request* _this = reinterpret_cast< Request* >(object);
  (void)_this;
}
void Request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Request& Request::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Request_request_2eproto.base);
  return *internal_default_instance();
}


void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  type_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  status_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && create_at_ != nullptr) {
    delete create_at_;
  }
  create_at_ = nullptr;
  ::memset(&user_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&to_) -
      reinterpret_cast<char*>(&user_id_)) + sizeof(to_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "msg.Request.id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 user_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          user_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "msg.Request.type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 amount = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          amount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 to = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          to_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string status = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_status();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "msg.Request.status"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string message = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "msg.Request.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp create_at = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_create_at(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Request::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "msg.Request.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // uint64 user_id = 2;
  if (this->user_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_user_id(), target);
  }

  // string type = 3;
  if (this->type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "msg.Request.type");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_type(), target);
  }

  // uint64 amount = 4;
  if (this->amount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_amount(), target);
  }

  // uint64 to = 5;
  if (this->to() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_to(), target);
  }

  // string status = 6;
  if (this->status().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_status().data(), static_cast<int>(this->_internal_status().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "msg.Request.status");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_status(), target);
  }

  // string message = 7;
  if (this->message().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "msg.Request.message");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_message(), target);
  }

  // .google.protobuf.Timestamp create_at = 8;
  if (this->has_create_at()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::create_at(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.Request)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string type = 3;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // string status = 6;
  if (this->status().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_status());
  }

  // string message = 7;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // .google.protobuf.Timestamp create_at = 8;
  if (this->has_create_at()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *create_at_);
  }

  // uint64 user_id = 2;
  if (this->user_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_user_id());
  }

  // uint64 amount = 4;
  if (this->amount() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_amount());
  }

  // uint64 to = 5;
  if (this->to() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_to());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Request::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.Request)
  GOOGLE_DCHECK_NE(&from, this);
  const Request* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Request>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.Request)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.Request)
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.status().size() > 0) {
    _internal_set_status(from._internal_status());
  }
  if (from.message().size() > 0) {
    _internal_set_message(from._internal_message());
  }
  if (from.has_create_at()) {
    _internal_mutable_create_at()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_create_at());
  }
  if (from.user_id() != 0) {
    _internal_set_user_id(from._internal_user_id());
  }
  if (from.amount() != 0) {
    _internal_set_amount(from._internal_amount());
  }
  if (from.to() != 0) {
    _internal_set_to(from._internal_to());
  }
}

void Request::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::InternalSwap(Request* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  status_.Swap(&other->status_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Request, to_)
      + sizeof(Request::to_)
      - PROTOBUF_FIELD_OFFSET(Request, create_at_)>(
          reinterpret_cast<char*>(&create_at_),
          reinterpret_cast<char*>(&other->create_at_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Request::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::Request* Arena::CreateMaybeMessage< ::msg::Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::Request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
