// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo.proto

#include "demo.pb.h"

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
namespace ZYF {
constexpr Num::Num(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : x_(0){}
struct NumDefaultTypeInternal {
  constexpr NumDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NumDefaultTypeInternal() {}
  union {
    Num _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NumDefaultTypeInternal _Num_default_instance_;
constexpr Res::Res(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : y_(0){}
struct ResDefaultTypeInternal {
  constexpr ResDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ResDefaultTypeInternal() {}
  union {
    Res _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ResDefaultTypeInternal _Res_default_instance_;
}  // namespace ZYF
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_demo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_demo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_demo_2eproto = nullptr;

const uint32_t TableStruct_demo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ZYF::Num, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ZYF::Num, x_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ZYF::Res, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ZYF::Res, y_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::ZYF::Num)},
  { 7, -1, -1, sizeof(::ZYF::Res)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ZYF::_Num_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ZYF::_Res_default_instance_),
};

const char descriptor_table_protodef_demo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ndemo.proto\022\003ZYF\"\020\n\003Num\022\t\n\001x\030\001 \001(\005\"\020\n\003R"
  "es\022\t\n\001y\030\001 \001(\0052)\n\007YServer\022\036\n\006GetNum\022\010.ZYF"
  ".Num\032\010.ZYF.Res\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_demo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_demo_2eproto = {
  false, false, 104, descriptor_table_protodef_demo_2eproto, "demo.proto", 
  &descriptor_table_demo_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_demo_2eproto::offsets,
  file_level_metadata_demo_2eproto, file_level_enum_descriptors_demo_2eproto, file_level_service_descriptors_demo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_demo_2eproto_getter() {
  return &descriptor_table_demo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_demo_2eproto(&descriptor_table_demo_2eproto);
namespace ZYF {

// ===================================================================

class Num::_Internal {
 public:
};

Num::Num(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ZYF.Num)
}
Num::Num(const Num& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  x_ = from.x_;
  // @@protoc_insertion_point(copy_constructor:ZYF.Num)
}

inline void Num::SharedCtor() {
x_ = 0;
}

Num::~Num() {
  // @@protoc_insertion_point(destructor:ZYF.Num)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Num::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Num::ArenaDtor(void* object) {
  Num* _this = reinterpret_cast< Num* >(object);
  (void)_this;
}
void Num::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Num::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Num::Clear() {
// @@protoc_insertion_point(message_clear_start:ZYF.Num)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  x_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Num::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Num::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ZYF.Num)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_x(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ZYF.Num)
  return target;
}

size_t Num::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ZYF.Num)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_x());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Num::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Num::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Num::GetClassData() const { return &_class_data_; }

void Num::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Num *>(to)->MergeFrom(
      static_cast<const Num &>(from));
}


void Num::MergeFrom(const Num& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ZYF.Num)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_x() != 0) {
    _internal_set_x(from._internal_x());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Num::CopyFrom(const Num& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ZYF.Num)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Num::IsInitialized() const {
  return true;
}

void Num::InternalSwap(Num* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(x_, other->x_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Num::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_demo_2eproto_getter, &descriptor_table_demo_2eproto_once,
      file_level_metadata_demo_2eproto[0]);
}

// ===================================================================

class Res::_Internal {
 public:
};

Res::Res(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ZYF.Res)
}
Res::Res(const Res& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  y_ = from.y_;
  // @@protoc_insertion_point(copy_constructor:ZYF.Res)
}

inline void Res::SharedCtor() {
y_ = 0;
}

Res::~Res() {
  // @@protoc_insertion_point(destructor:ZYF.Res)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Res::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Res::ArenaDtor(void* object) {
  Res* _this = reinterpret_cast< Res* >(object);
  (void)_this;
}
void Res::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Res::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Res::Clear() {
// @@protoc_insertion_point(message_clear_start:ZYF.Res)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  y_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Res::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 y = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Res::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ZYF.Res)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 y = 1;
  if (this->_internal_y() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ZYF.Res)
  return target;
}

size_t Res::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ZYF.Res)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 y = 1;
  if (this->_internal_y() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_y());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Res::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Res::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Res::GetClassData() const { return &_class_data_; }

void Res::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Res *>(to)->MergeFrom(
      static_cast<const Res &>(from));
}


void Res::MergeFrom(const Res& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ZYF.Res)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_y() != 0) {
    _internal_set_y(from._internal_y());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Res::CopyFrom(const Res& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ZYF.Res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Res::IsInitialized() const {
  return true;
}

void Res::InternalSwap(Res* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Res::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_demo_2eproto_getter, &descriptor_table_demo_2eproto_once,
      file_level_metadata_demo_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace ZYF
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ZYF::Num* Arena::CreateMaybeMessage< ::ZYF::Num >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ZYF::Num >(arena);
}
template<> PROTOBUF_NOINLINE ::ZYF::Res* Arena::CreateMaybeMessage< ::ZYF::Res >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ZYF::Res >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>