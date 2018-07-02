// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CreatePlayerPacket.proto

#ifndef PROTOBUF_CreatePlayerPacket_2eproto__INCLUDED
#define PROTOBUF_CreatePlayerPacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "AllPacketEnum.pb.h"
#include "PlayerBasicInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace Packet {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CreatePlayerPacket_2eproto();
void protobuf_AssignDesc_CreatePlayerPacket_2eproto();
void protobuf_ShutdownFile_CreatePlayerPacket_2eproto();

class CreatePlayer;
class CreatePlayerReply;
class ChangeHair;

enum CreatePlayerReply_Result {
  CreatePlayerReply_Result_SUCCESS = 0,
  CreatePlayerReply_Result_DUMPLICATE_NAME = 1,
  CreatePlayerReply_Result_MAX_PLAYER_COUNT = 2,
  CreatePlayerReply_Result_INVALID_RACE = 3,
  CreatePlayerReply_Result_INVALID_PROFESSION = 4,
  CreatePlayerReply_Result_INVALID_GENDER = 5,
  CreatePlayerReply_Result_INVALID_NAME = 6,
  CreatePlayerReply_Result_INVALID_CONFIG = 7,
  CreatePlayerReply_Result_UNKNOWN_ERROR = 100
};
bool CreatePlayerReply_Result_IsValid(int value);
const CreatePlayerReply_Result CreatePlayerReply_Result_Result_MIN = CreatePlayerReply_Result_SUCCESS;
const CreatePlayerReply_Result CreatePlayerReply_Result_Result_MAX = CreatePlayerReply_Result_UNKNOWN_ERROR;
const int CreatePlayerReply_Result_Result_ARRAYSIZE = CreatePlayerReply_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* CreatePlayerReply_Result_descriptor();
inline const ::std::string& CreatePlayerReply_Result_Name(CreatePlayerReply_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    CreatePlayerReply_Result_descriptor(), value);
}
inline bool CreatePlayerReply_Result_Parse(
    const ::std::string& name, CreatePlayerReply_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CreatePlayerReply_Result>(
    CreatePlayerReply_Result_descriptor(), name, value);
}
// ===================================================================

class CreatePlayer : public ::google::protobuf::Message {
 public:
  CreatePlayer();
  virtual ~CreatePlayer();

  CreatePlayer(const CreatePlayer& from);

  inline CreatePlayer& operator=(const CreatePlayer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CreatePlayer& default_instance();

  void Swap(CreatePlayer* other);

  // implements Message ----------------------------------------------

  CreatePlayer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CreatePlayer& from);
  void MergeFrom(const CreatePlayer& from);
  void Clear();
  bool IsInitialized() const;
  void SetInitialized();

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 player_actor_base_id = 1;
  inline bool has_player_actor_base_id() const;
  inline void clear_player_actor_base_id();
  static const int kPlayerActorBaseIdFieldNumber = 1;
  inline ::google::protobuf::int32 player_actor_base_id() const;
  inline void set_player_actor_base_id(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required .Packet.Camp camp = 3;
  inline bool has_camp() const;
  inline void clear_camp();
  static const int kCampFieldNumber = 3;
  inline ::Packet::Camp camp() const;
  inline void set_camp(::Packet::Camp value);

  // required int32 hair = 4;
  inline bool has_hair() const;
  inline void clear_hair();
  static const int kHairFieldNumber = 4;
  inline ::google::protobuf::int32 hair() const;
  inline void set_hair(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Packet.CreatePlayer)
 private:
  inline void set_has_player_actor_base_id();
  inline void clear_has_player_actor_base_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_camp();
  inline void clear_has_camp();
  inline void set_has_hair();
  inline void clear_has_hair();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 player_actor_base_id_;
  int camp_;
  ::google::protobuf::int32 hair_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_AssignDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_ShutdownFile_CreatePlayerPacket_2eproto();

  void InitAsDefaultInstance();
  static CreatePlayer* default_instance_;
};
// -------------------------------------------------------------------

class CreatePlayerReply : public ::google::protobuf::Message {
 public:
  CreatePlayerReply();
  virtual ~CreatePlayerReply();

  CreatePlayerReply(const CreatePlayerReply& from);

  inline CreatePlayerReply& operator=(const CreatePlayerReply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CreatePlayerReply& default_instance();

  void Swap(CreatePlayerReply* other);

  // implements Message ----------------------------------------------

  CreatePlayerReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CreatePlayerReply& from);
  void MergeFrom(const CreatePlayerReply& from);
  void Clear();
  bool IsInitialized() const;
  void SetInitialized();

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CreatePlayerReply_Result Result;
  static const Result SUCCESS = CreatePlayerReply_Result_SUCCESS;
  static const Result DUMPLICATE_NAME = CreatePlayerReply_Result_DUMPLICATE_NAME;
  static const Result MAX_PLAYER_COUNT = CreatePlayerReply_Result_MAX_PLAYER_COUNT;
  static const Result INVALID_RACE = CreatePlayerReply_Result_INVALID_RACE;
  static const Result INVALID_PROFESSION = CreatePlayerReply_Result_INVALID_PROFESSION;
  static const Result INVALID_GENDER = CreatePlayerReply_Result_INVALID_GENDER;
  static const Result INVALID_NAME = CreatePlayerReply_Result_INVALID_NAME;
  static const Result INVALID_CONFIG = CreatePlayerReply_Result_INVALID_CONFIG;
  static const Result UNKNOWN_ERROR = CreatePlayerReply_Result_UNKNOWN_ERROR;
  static inline bool Result_IsValid(int value) {
    return CreatePlayerReply_Result_IsValid(value);
  }
  static const Result Result_MIN =
    CreatePlayerReply_Result_Result_MIN;
  static const Result Result_MAX =
    CreatePlayerReply_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    CreatePlayerReply_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return CreatePlayerReply_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return CreatePlayerReply_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return CreatePlayerReply_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Packet.CreatePlayerReply.Result result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::Packet::CreatePlayerReply_Result result() const;
  inline void set_result(::Packet::CreatePlayerReply_Result value);

  // @@protoc_insertion_point(class_scope:Packet.CreatePlayerReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_AssignDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_ShutdownFile_CreatePlayerPacket_2eproto();

  void InitAsDefaultInstance();
  static CreatePlayerReply* default_instance_;
};
// -------------------------------------------------------------------

class ChangeHair : public ::google::protobuf::Message {
 public:
  ChangeHair();
  virtual ~ChangeHair();

  ChangeHair(const ChangeHair& from);

  inline ChangeHair& operator=(const ChangeHair& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChangeHair& default_instance();

  void Swap(ChangeHair* other);

  // implements Message ----------------------------------------------

  ChangeHair* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChangeHair& from);
  void MergeFrom(const ChangeHair& from);
  void Clear();
  bool IsInitialized() const;
  void SetInitialized();

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 new_hair = 1;
  inline bool has_new_hair() const;
  inline void clear_new_hair();
  static const int kNewHairFieldNumber = 1;
  inline ::google::protobuf::int32 new_hair() const;
  inline void set_new_hair(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Packet.ChangeHair)
 private:
  inline void set_has_new_hair();
  inline void clear_has_new_hair();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 new_hair_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_AssignDesc_CreatePlayerPacket_2eproto();
  friend void protobuf_ShutdownFile_CreatePlayerPacket_2eproto();

  void InitAsDefaultInstance();
  static ChangeHair* default_instance_;
};
// ===================================================================


// ===================================================================

// CreatePlayer

// required int32 player_actor_base_id = 1;
inline bool CreatePlayer::has_player_actor_base_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreatePlayer::set_has_player_actor_base_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreatePlayer::clear_has_player_actor_base_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreatePlayer::clear_player_actor_base_id() {
  player_actor_base_id_ = 0;
  clear_has_player_actor_base_id();
  SetDirty();
}
inline ::google::protobuf::int32 CreatePlayer::player_actor_base_id() const {
  return player_actor_base_id_;
}
inline void CreatePlayer::set_player_actor_base_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_player_actor_base_id();
  player_actor_base_id_ = value;
}

// required string name = 2;
inline bool CreatePlayer::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CreatePlayer::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CreatePlayer::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CreatePlayer::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
  SetDirty();
}
inline const ::std::string& CreatePlayer::name() const {
  return *name_;
}
inline void CreatePlayer::set_name(const ::std::string& value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void CreatePlayer::set_name(const char* value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void CreatePlayer::set_name(const char* value, size_t size) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CreatePlayer::mutable_name() {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* CreatePlayer::release_name() {
  SetDirty();
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CreatePlayer::set_allocated_name(::std::string* name) {
  SetDirty();
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .Packet.Camp camp = 3;
inline bool CreatePlayer::has_camp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CreatePlayer::set_has_camp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CreatePlayer::clear_has_camp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CreatePlayer::clear_camp() {
  camp_ = 0;
  clear_has_camp();
  SetDirty();
}
inline ::Packet::Camp CreatePlayer::camp() const {
  return static_cast< ::Packet::Camp >(camp_);
}
inline void CreatePlayer::set_camp(::Packet::Camp value) {
  assert(::Packet::Camp_IsValid(value));
  SetDirty();
  set_has_camp();
  camp_ = value;
}

// required int32 hair = 4;
inline bool CreatePlayer::has_hair() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CreatePlayer::set_has_hair() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CreatePlayer::clear_has_hair() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CreatePlayer::clear_hair() {
  hair_ = 0;
  clear_has_hair();
  SetDirty();
}
inline ::google::protobuf::int32 CreatePlayer::hair() const {
  return hair_;
}
inline void CreatePlayer::set_hair(::google::protobuf::int32 value) {
  SetDirty();
  set_has_hair();
  hair_ = value;
}

// -------------------------------------------------------------------

// CreatePlayerReply

// required .Packet.CreatePlayerReply.Result result = 1;
inline bool CreatePlayerReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreatePlayerReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreatePlayerReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreatePlayerReply::clear_result() {
  result_ = 0;
  clear_has_result();
  SetDirty();
}
inline ::Packet::CreatePlayerReply_Result CreatePlayerReply::result() const {
  return static_cast< ::Packet::CreatePlayerReply_Result >(result_);
}
inline void CreatePlayerReply::set_result(::Packet::CreatePlayerReply_Result value) {
  assert(::Packet::CreatePlayerReply_Result_IsValid(value));
  SetDirty();
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// ChangeHair

// required int32 new_hair = 1;
inline bool ChangeHair::has_new_hair() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChangeHair::set_has_new_hair() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChangeHair::clear_has_new_hair() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChangeHair::clear_new_hair() {
  new_hair_ = 0;
  clear_has_new_hair();
  SetDirty();
}
inline ::google::protobuf::int32 ChangeHair::new_hair() const {
  return new_hair_;
}
inline void ChangeHair::set_new_hair(::google::protobuf::int32 value) {
  SetDirty();
  set_has_new_hair();
  new_hair_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Packet::CreatePlayerReply_Result>() {
  return ::Packet::CreatePlayerReply_Result_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CreatePlayerPacket_2eproto__INCLUDED