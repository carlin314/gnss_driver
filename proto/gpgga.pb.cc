// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gpgga.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gpgga.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gnss_driver {
namespace pb {

namespace {

const ::google::protobuf::Descriptor* GPGGA_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GPGGA_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_gpgga_2eproto() {
  protobuf_AddDesc_gpgga_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gpgga.proto");
  GOOGLE_CHECK(file != NULL);
  GPGGA_descriptor_ = file->message_type(0);
  static const int GPGGA_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPGGA, gpgga_),
  };
  GPGGA_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GPGGA_descriptor_,
      GPGGA::default_instance_,
      GPGGA_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPGGA, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GPGGA, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GPGGA));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gpgga_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GPGGA_descriptor_, &GPGGA::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gpgga_2eproto() {
  delete GPGGA::default_instance_;
  delete GPGGA_reflection_;
}

void protobuf_AddDesc_gpgga_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013gpgga.proto\022\016gnss_driver.pb\"\026\n\005GPGGA\022\r"
    "\n\005gpgga\030\001 \002(\t", 53);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gpgga.proto", &protobuf_RegisterTypes);
  GPGGA::default_instance_ = new GPGGA();
  GPGGA::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gpgga_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gpgga_2eproto {
  StaticDescriptorInitializer_gpgga_2eproto() {
    protobuf_AddDesc_gpgga_2eproto();
  }
} static_descriptor_initializer_gpgga_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GPGGA::kGpggaFieldNumber;
#endif  // !_MSC_VER

GPGGA::GPGGA()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gnss_driver.pb.GPGGA)
}

void GPGGA::InitAsDefaultInstance() {
}

GPGGA::GPGGA(const GPGGA& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gnss_driver.pb.GPGGA)
}

void GPGGA::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  gpgga_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GPGGA::~GPGGA() {
  // @@protoc_insertion_point(destructor:gnss_driver.pb.GPGGA)
  SharedDtor();
}

void GPGGA::SharedDtor() {
  if (gpgga_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete gpgga_;
  }
  if (this != default_instance_) {
  }
}

void GPGGA::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GPGGA::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GPGGA_descriptor_;
}

const GPGGA& GPGGA::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gpgga_2eproto();
  return *default_instance_;
}

GPGGA* GPGGA::default_instance_ = NULL;

GPGGA* GPGGA::New() const {
  return new GPGGA;
}

void GPGGA::Clear() {
  if (has_gpgga()) {
    if (gpgga_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      gpgga_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GPGGA::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gnss_driver.pb.GPGGA)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string gpgga = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gpgga()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->gpgga().data(), this->gpgga().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gpgga");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gnss_driver.pb.GPGGA)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gnss_driver.pb.GPGGA)
  return false;
#undef DO_
}

void GPGGA::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gnss_driver.pb.GPGGA)
  // required string gpgga = 1;
  if (has_gpgga()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->gpgga().data(), this->gpgga().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gpgga");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->gpgga(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gnss_driver.pb.GPGGA)
}

::google::protobuf::uint8* GPGGA::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gnss_driver.pb.GPGGA)
  // required string gpgga = 1;
  if (has_gpgga()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->gpgga().data(), this->gpgga().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gpgga");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->gpgga(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gnss_driver.pb.GPGGA)
  return target;
}

int GPGGA::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string gpgga = 1;
    if (has_gpgga()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->gpgga());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GPGGA::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GPGGA* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GPGGA*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GPGGA::MergeFrom(const GPGGA& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gpgga()) {
      set_gpgga(from.gpgga());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GPGGA::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GPGGA::CopyFrom(const GPGGA& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GPGGA::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GPGGA::Swap(GPGGA* other) {
  if (other != this) {
    std::swap(gpgga_, other->gpgga_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GPGGA::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GPGGA_descriptor_;
  metadata.reflection = GPGGA_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace gnss_driver

// @@protoc_insertion_point(global_scope)
