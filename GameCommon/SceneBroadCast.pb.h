// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneBroadCast.proto

#ifndef PROTOBUF_SceneBroadCast_2eproto__INCLUDED
#define PROTOBUF_SceneBroadCast_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "ItemAndEquip.pb.h"
// @@protoc_insertion_point(includes)

namespace Packet {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SceneBroadCast_2eproto();
void protobuf_AssignDesc_SceneBroadCast_2eproto();
void protobuf_ShutdownFile_SceneBroadCast_2eproto();

class PlayerLoadEquip;
class PlayerUnloadEquip;

// ===================================================================

class PlayerLoadEquip : public ::google::protobuf::Message {
 public:
  PlayerLoadEquip();
  virtual ~PlayerLoadEquip();

  PlayerLoadEquip(const PlayerLoadEquip& from);

  inline PlayerLoadEquip& operator=(const PlayerLoadEquip& from) {
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
  static const PlayerLoadEquip& default_instance();

  void Swap(PlayerLoadEquip* other);

  // implements Message ----------------------------------------------

  PlayerLoadEquip* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerLoadEquip& from);
  void MergeFrom(const PlayerLoadEquip& from);
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

  // required fixed64 guid = 1;
  inline bool has_guid() const;
  inline void clear_guid();
  static const int kGuidFieldNumber = 1;
  inline ::google::protobuf::uint64 guid() const;
  inline void set_guid(::google::protobuf::uint64 value);

  // required .Packet.EquipItem equip = 2;
  inline bool has_equip() const;
  inline void clear_equip();
  static const int kEquipFieldNumber = 2;
  inline const ::Packet::EquipItem& equip() const;
  inline ::Packet::EquipItem* mutable_equip();
  inline ::Packet::EquipItem* release_equip();
  inline void set_allocated_equip(::Packet::EquipItem* equip);

  // @@protoc_insertion_point(class_scope:Packet.PlayerLoadEquip)
 private:
  inline void set_has_guid();
  inline void clear_has_guid();
  inline void set_has_equip();
  inline void clear_has_equip();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 guid_;
  ::Packet::EquipItem* equip_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SceneBroadCast_2eproto();
  friend void protobuf_AssignDesc_SceneBroadCast_2eproto();
  friend void protobuf_ShutdownFile_SceneBroadCast_2eproto();

  void InitAsDefaultInstance();
  static PlayerLoadEquip* default_instance_;
};
// -------------------------------------------------------------------

class PlayerUnloadEquip : public ::google::protobuf::Message {
 public:
  PlayerUnloadEquip();
  virtual ~PlayerUnloadEquip();

  PlayerUnloadEquip(const PlayerUnloadEquip& from);

  inline PlayerUnloadEquip& operator=(const PlayerUnloadEquip& from) {
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
  static const PlayerUnloadEquip& default_instance();

  void Swap(PlayerUnloadEquip* other);

  // implements Message ----------------------------------------------

  PlayerUnloadEquip* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerUnloadEquip& from);
  void MergeFrom(const PlayerUnloadEquip& from);
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

  // required fixed64 guid = 1;
  inline bool has_guid() const;
  inline void clear_guid();
  static const int kGuidFieldNumber = 1;
  inline ::google::protobuf::uint64 guid() const;
  inline void set_guid(::google::protobuf::uint64 value);

  // required .Packet.EquipItem equip = 2;
  inline bool has_equip() const;
  inline void clear_equip();
  static const int kEquipFieldNumber = 2;
  inline const ::Packet::EquipItem& equip() const;
  inline ::Packet::EquipItem* mutable_equip();
  inline ::Packet::EquipItem* release_equip();
  inline void set_allocated_equip(::Packet::EquipItem* equip);

  // @@protoc_insertion_point(class_scope:Packet.PlayerUnloadEquip)
 private:
  inline void set_has_guid();
  inline void clear_has_guid();
  inline void set_has_equip();
  inline void clear_has_equip();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 guid_;
  ::Packet::EquipItem* equip_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SceneBroadCast_2eproto();
  friend void protobuf_AssignDesc_SceneBroadCast_2eproto();
  friend void protobuf_ShutdownFile_SceneBroadCast_2eproto();

  void InitAsDefaultInstance();
  static PlayerUnloadEquip* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerLoadEquip

// required fixed64 guid = 1;
inline bool PlayerLoadEquip::has_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerLoadEquip::set_has_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerLoadEquip::clear_has_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerLoadEquip::clear_guid() {
  guid_ = GOOGLE_ULONGLONG(0);
  clear_has_guid();
  SetDirty();
}
inline ::google::protobuf::uint64 PlayerLoadEquip::guid() const {
  return guid_;
}
inline void PlayerLoadEquip::set_guid(::google::protobuf::uint64 value) {
  SetDirty();
  set_has_guid();
  guid_ = value;
}

// required .Packet.EquipItem equip = 2;
inline bool PlayerLoadEquip::has_equip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerLoadEquip::set_has_equip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerLoadEquip::clear_has_equip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerLoadEquip::clear_equip() {
  if (equip_ != NULL) equip_->::Packet::EquipItem::Clear();
  clear_has_equip();
  SetDirty();
}
inline const ::Packet::EquipItem& PlayerLoadEquip::equip() const {
  return equip_ != NULL ? *equip_ : *default_instance_->equip_;
}
inline ::Packet::EquipItem* PlayerLoadEquip::mutable_equip() {
  SetDirty();
  set_has_equip();
  if (equip_ == NULL) equip_ = new ::Packet::EquipItem;
  return equip_;
}
inline ::Packet::EquipItem* PlayerLoadEquip::release_equip() {
  SetDirty();
  clear_has_equip();
  ::Packet::EquipItem* temp = equip_;
  equip_ = NULL;
  return temp;
}
inline void PlayerLoadEquip::set_allocated_equip(::Packet::EquipItem* equip) {
  SetDirty();
  delete equip_;
  equip_ = equip;
  if (equip) {
    set_has_equip();
  } else {
    clear_has_equip();
  }
}

// -------------------------------------------------------------------

// PlayerUnloadEquip

// required fixed64 guid = 1;
inline bool PlayerUnloadEquip::has_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerUnloadEquip::set_has_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerUnloadEquip::clear_has_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerUnloadEquip::clear_guid() {
  guid_ = GOOGLE_ULONGLONG(0);
  clear_has_guid();
  SetDirty();
}
inline ::google::protobuf::uint64 PlayerUnloadEquip::guid() const {
  return guid_;
}
inline void PlayerUnloadEquip::set_guid(::google::protobuf::uint64 value) {
  SetDirty();
  set_has_guid();
  guid_ = value;
}

// required .Packet.EquipItem equip = 2;
inline bool PlayerUnloadEquip::has_equip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerUnloadEquip::set_has_equip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerUnloadEquip::clear_has_equip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerUnloadEquip::clear_equip() {
  if (equip_ != NULL) equip_->::Packet::EquipItem::Clear();
  clear_has_equip();
  SetDirty();
}
inline const ::Packet::EquipItem& PlayerUnloadEquip::equip() const {
  return equip_ != NULL ? *equip_ : *default_instance_->equip_;
}
inline ::Packet::EquipItem* PlayerUnloadEquip::mutable_equip() {
  SetDirty();
  set_has_equip();
  if (equip_ == NULL) equip_ = new ::Packet::EquipItem;
  return equip_;
}
inline ::Packet::EquipItem* PlayerUnloadEquip::release_equip() {
  SetDirty();
  clear_has_equip();
  ::Packet::EquipItem* temp = equip_;
  equip_ = NULL;
  return temp;
}
inline void PlayerUnloadEquip::set_allocated_equip(::Packet::EquipItem* equip) {
  SetDirty();
  delete equip_;
  equip_ = equip;
  if (equip) {
    set_has_equip();
  } else {
    clear_has_equip();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SceneBroadCast_2eproto__INCLUDED
