// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace message {
PROTOBUF_CONSTEXPR LoginReq::LoginReq(
    ::_pbi::ConstantInitialized)
  : id_(0u)
  , id2_(0u)
  , id3_(0u){}
struct LoginReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginReqDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginReqDefaultTypeInternal() {}
  union {
    LoginReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginReqDefaultTypeInternal _LoginReq_default_instance_;
PROTOBUF_CONSTEXPR LoginRes::LoginRes(
    ::_pbi::ConstantInitialized)
  : result_(false){}
struct LoginResDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginResDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginResDefaultTypeInternal() {}
  union {
    LoginRes _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginResDefaultTypeInternal _LoginRes_default_instance_;
}  // namespace message
static ::_pb::Metadata file_level_metadata_Message_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_Message_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const uint32_t TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::message::LoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::message::LoginReq, id_),
  PROTOBUF_FIELD_OFFSET(::message::LoginReq, id2_),
  PROTOBUF_FIELD_OFFSET(::message::LoginReq, id3_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::message::LoginRes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::message::LoginRes, result_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::message::LoginReq)},
  { 9, -1, -1, sizeof(::message::LoginRes)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::message::_LoginReq_default_instance_._instance,
  &::message::_LoginRes_default_instance_._instance,
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\022\007message\"0\n\010LoginReq\022\n\n\002"
  "id\030\001 \001(\r\022\013\n\003id2\030\002 \001(\r\022\013\n\003id3\030\003 \001(\r\"\032\n\010Lo"
  "ginRes\022\016\n\006result\030\001 \001(\010*5\n\013MessageCode\022\010\n"
  "\004NONE\020\000\022\r\n\tLOGIN_REQ\020\001\022\r\n\tLOGIN_RES\020\002b\006p"
  "roto3"
  ;
static ::_pbi::once_flag descriptor_table_Message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Message_2eproto = {
    false, false, 165, descriptor_table_protodef_Message_2eproto,
    "Message.proto",
    &descriptor_table_Message_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
    file_level_metadata_Message_2eproto, file_level_enum_descriptors_Message_2eproto,
    file_level_service_descriptors_Message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Message_2eproto_getter() {
  return &descriptor_table_Message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Message_2eproto(&descriptor_table_Message_2eproto);
namespace message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MessageCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Message_2eproto);
  return file_level_enum_descriptors_Message_2eproto[0];
}
bool MessageCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class LoginReq::_Internal {
 public:
};

LoginReq::LoginReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:message.LoginReq)
}
LoginReq::LoginReq(const LoginReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&id3_) -
    reinterpret_cast<char*>(&id_)) + sizeof(id3_));
  // @@protoc_insertion_point(copy_constructor:message.LoginReq)
}

inline void LoginReq::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id3_) -
    reinterpret_cast<char*>(&id_)) + sizeof(id3_));
}

LoginReq::~LoginReq() {
  // @@protoc_insertion_point(destructor:message.LoginReq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LoginReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LoginReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:message.LoginReq)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id3_) -
      reinterpret_cast<char*>(&id_)) + sizeof(id3_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginReq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 id2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          id2_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 id3 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          id3_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LoginReq::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.LoginReq)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // uint32 id2 = 2;
  if (this->_internal_id2() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_id2(), target);
  }

  // uint32 id3 = 3;
  if (this->_internal_id3() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_id3(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.LoginReq)
  return target;
}

size_t LoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:message.LoginReq)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  // uint32 id2 = 2;
  if (this->_internal_id2() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id2());
  }

  // uint32 id3 = 3;
  if (this->_internal_id3() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id3());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LoginReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginReq::GetClassData() const { return &_class_data_; }

void LoginReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LoginReq *>(to)->MergeFrom(
      static_cast<const LoginReq &>(from));
}


void LoginReq::MergeFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:message.LoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_id2() != 0) {
    _internal_set_id2(from._internal_id2());
  }
  if (from._internal_id3() != 0) {
    _internal_set_id3(from._internal_id3());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginReq::CopyFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:message.LoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginReq::IsInitialized() const {
  return true;
}

void LoginReq::InternalSwap(LoginReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LoginReq, id3_)
      + sizeof(LoginReq::id3_)
      - PROTOBUF_FIELD_OFFSET(LoginReq, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[0]);
}

// ===================================================================

class LoginRes::_Internal {
 public:
};

LoginRes::LoginRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:message.LoginRes)
}
LoginRes::LoginRes(const LoginRes& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:message.LoginRes)
}

inline void LoginRes::SharedCtor() {
result_ = false;
}

LoginRes::~LoginRes() {
  // @@protoc_insertion_point(destructor:message.LoginRes)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LoginRes::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LoginRes::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LoginRes::Clear() {
// @@protoc_insertion_point(message_clear_start:message.LoginRes)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginRes::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          result_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr) == 1 ? true : false;
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LoginRes::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.LoginRes)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool result = 1;
  if (this->_internal_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.LoginRes)
  return target;
}

size_t LoginRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:message.LoginRes)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool result = 1;
  if (this->_internal_result() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginRes::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LoginRes::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginRes::GetClassData() const { return &_class_data_; }

void LoginRes::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LoginRes *>(to)->MergeFrom(
      static_cast<const LoginRes &>(from));
}


void LoginRes::MergeFrom(const LoginRes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:message.LoginRes)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_result() != 0) {
    _internal_set_result(from._internal_result());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginRes::CopyFrom(const LoginRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:message.LoginRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRes::IsInitialized() const {
  return true;
}

void LoginRes::InternalSwap(LoginRes* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginRes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace message
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::message::LoginReq*
Arena::CreateMaybeMessage< ::message::LoginReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::message::LoginReq >(arena);
}
template<> PROTOBUF_NOINLINE ::message::LoginRes*
Arena::CreateMaybeMessage< ::message::LoginRes >(Arena* arena) {
  return Arena::CreateMessageInternal< ::message::LoginRes >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
