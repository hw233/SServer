// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneStageConfig.proto

#ifndef PROTOBUF_SceneStageConfig_2eproto__INCLUDED
#define PROTOBUF_SceneStageConfig_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace Config {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SceneStageConfig_2eproto();
void protobuf_AssignDesc_SceneStageConfig_2eproto();
void protobuf_ShutdownFile_SceneStageConfig_2eproto();

class SceneStageConfig;

// ===================================================================

class SceneStageConfig : public ::google::protobuf::Message {
 public:
  SceneStageConfig();
  virtual ~SceneStageConfig();

  SceneStageConfig(const SceneStageConfig& from);

  inline SceneStageConfig& operator=(const SceneStageConfig& from) {
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
  static const SceneStageConfig& default_instance();

  void Swap(SceneStageConfig* other);

  // implements Message ----------------------------------------------

  SceneStageConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SceneStageConfig& from);
  void MergeFrom(const SceneStageConfig& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

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

  // required int32 min_level = 3;
  inline bool has_min_level() const;
  inline void clear_min_level();
  static const int kMinLevelFieldNumber = 3;
  inline ::google::protobuf::int32 min_level() const;
  inline void set_min_level(::google::protobuf::int32 value);

  // repeated int32 pre_stages = 4;
  inline int pre_stages_size() const;
  inline void clear_pre_stages();
  static const int kPreStagesFieldNumber = 4;
  inline ::google::protobuf::int32 pre_stages(int index) const;
  inline void set_pre_stages(int index, ::google::protobuf::int32 value);
  inline void add_pre_stages(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      pre_stages() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_pre_stages();

  // required int32 scene_id = 5;
  inline bool has_scene_id() const;
  inline void clear_scene_id();
  static const int kSceneIdFieldNumber = 5;
  inline ::google::protobuf::int32 scene_id() const;
  inline void set_scene_id(::google::protobuf::int32 value);

  // required string rewards = 6;
  inline bool has_rewards() const;
  inline void clear_rewards();
  static const int kRewardsFieldNumber = 6;
  inline const ::std::string& rewards() const;
  inline void set_rewards(const ::std::string& value);
  inline void set_rewards(const char* value);
  inline void set_rewards(const char* value, size_t size);
  inline ::std::string* mutable_rewards();
  inline ::std::string* release_rewards();
  inline void set_allocated_rewards(::std::string* rewards);

  // required int32 refresh_time = 7;
  inline bool has_refresh_time() const;
  inline void clear_refresh_time();
  static const int kRefreshTimeFieldNumber = 7;
  inline ::google::protobuf::int32 refresh_time() const;
  inline void set_refresh_time(::google::protobuf::int32 value);

  // required int32 raid_count = 8;
  inline bool has_raid_count() const;
  inline void clear_raid_count();
  static const int kRaidCountFieldNumber = 8;
  inline ::google::protobuf::int32 raid_count() const;
  inline void set_raid_count(::google::protobuf::int32 value);

  // required int32 rush_count = 9;
  inline bool has_rush_count() const;
  inline void clear_rush_count();
  static const int kRushCountFieldNumber = 9;
  inline ::google::protobuf::int32 rush_count() const;
  inline void set_rush_count(::google::protobuf::int32 value);

  // repeated int32 normal_monsters = 10;
  inline int normal_monsters_size() const;
  inline void clear_normal_monsters();
  static const int kNormalMonstersFieldNumber = 10;
  inline ::google::protobuf::int32 normal_monsters(int index) const;
  inline void set_normal_monsters(int index, ::google::protobuf::int32 value);
  inline void add_normal_monsters(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      normal_monsters() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_normal_monsters();

  // repeated int32 bosses = 11;
  inline int bosses_size() const;
  inline void clear_bosses();
  static const int kBossesFieldNumber = 11;
  inline ::google::protobuf::int32 bosses(int index) const;
  inline void set_bosses(int index, ::google::protobuf::int32 value);
  inline void add_bosses(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      bosses() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_bosses();

  // required int32 guard_id = 12;
  inline bool has_guard_id() const;
  inline void clear_guard_id();
  static const int kGuardIdFieldNumber = 12;
  inline ::google::protobuf::int32 guard_id() const;
  inline void set_guard_id(::google::protobuf::int32 value);

  // required int32 first_drop = 13;
  inline bool has_first_drop() const;
  inline void clear_first_drop();
  static const int kFirstDropFieldNumber = 13;
  inline ::google::protobuf::int32 first_drop() const;
  inline void set_first_drop(::google::protobuf::int32 value);

  // required int32 camp = 14;
  inline bool has_camp() const;
  inline void clear_camp();
  static const int kCampFieldNumber = 14;
  inline ::google::protobuf::int32 camp() const;
  inline void set_camp(::google::protobuf::int32 value);

  // required int32 can_captrue = 15;
  inline bool has_can_captrue() const;
  inline void clear_can_captrue();
  static const int kCanCaptrueFieldNumber = 15;
  inline ::google::protobuf::int32 can_captrue() const;
  inline void set_can_captrue(::google::protobuf::int32 value);

  // required int32 group = 16;
  inline bool has_group() const;
  inline void clear_group();
  static const int kGroupFieldNumber = 16;
  inline ::google::protobuf::int32 group() const;
  inline void set_group(::google::protobuf::int32 value);

  // required int32 can_guild_capture = 17;
  inline bool has_can_guild_capture() const;
  inline void clear_can_guild_capture();
  static const int kCanGuildCaptureFieldNumber = 17;
  inline ::google::protobuf::int32 can_guild_capture() const;
  inline void set_can_guild_capture(::google::protobuf::int32 value);

  // required int32 guild_capture_boss = 18;
  inline bool has_guild_capture_boss() const;
  inline void clear_guild_capture_boss();
  static const int kGuildCaptureBossFieldNumber = 18;
  inline ::google::protobuf::int32 guild_capture_boss() const;
  inline void set_guild_capture_boss(::google::protobuf::int32 value);

  // required int32 monster_id = 19;
  inline bool has_monster_id() const;
  inline void clear_monster_id();
  static const int kMonsterIdFieldNumber = 19;
  inline ::google::protobuf::int32 monster_id() const;
  inline void set_monster_id(::google::protobuf::int32 value);

  // required int32 max_exp_pre_min = 20;
  inline bool has_max_exp_pre_min() const;
  inline void clear_max_exp_pre_min();
  static const int kMaxExpPreMinFieldNumber = 20;
  inline ::google::protobuf::int32 max_exp_pre_min() const;
  inline void set_max_exp_pre_min(::google::protobuf::int32 value);

  // required int32 max_gold_pre_min = 21;
  inline bool has_max_gold_pre_min() const;
  inline void clear_max_gold_pre_min();
  static const int kMaxGoldPreMinFieldNumber = 21;
  inline ::google::protobuf::int32 max_gold_pre_min() const;
  inline void set_max_gold_pre_min(::google::protobuf::int32 value);

  // required int32 avg_run_time = 22;
  inline bool has_avg_run_time() const;
  inline void clear_avg_run_time();
  static const int kAvgRunTimeFieldNumber = 22;
  inline ::google::protobuf::int32 avg_run_time() const;
  inline void set_avg_run_time(::google::protobuf::int32 value);

  // required int32 avg_fight_time = 23;
  inline bool has_avg_fight_time() const;
  inline void clear_avg_fight_time();
  static const int kAvgFightTimeFieldNumber = 23;
  inline ::google::protobuf::int32 avg_fight_time() const;
  inline void set_avg_fight_time(::google::protobuf::int32 value);

  // required int32 tax_broadcast_mark = 24;
  inline bool has_tax_broadcast_mark() const;
  inline void clear_tax_broadcast_mark();
  static const int kTaxBroadcastMarkFieldNumber = 24;
  inline ::google::protobuf::int32 tax_broadcast_mark() const;
  inline void set_tax_broadcast_mark(::google::protobuf::int32 value);

  // required int32 guild_tax_broadcat_mark = 25;
  inline bool has_guild_tax_broadcat_mark() const;
  inline void clear_guild_tax_broadcat_mark();
  static const int kGuildTaxBroadcatMarkFieldNumber = 25;
  inline ::google::protobuf::int32 guild_tax_broadcat_mark() const;
  inline void set_guild_tax_broadcat_mark(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Config.SceneStageConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_min_level();
  inline void clear_has_min_level();
  inline void set_has_scene_id();
  inline void clear_has_scene_id();
  inline void set_has_rewards();
  inline void clear_has_rewards();
  inline void set_has_refresh_time();
  inline void clear_has_refresh_time();
  inline void set_has_raid_count();
  inline void clear_has_raid_count();
  inline void set_has_rush_count();
  inline void clear_has_rush_count();
  inline void set_has_guard_id();
  inline void clear_has_guard_id();
  inline void set_has_first_drop();
  inline void clear_has_first_drop();
  inline void set_has_camp();
  inline void clear_has_camp();
  inline void set_has_can_captrue();
  inline void clear_has_can_captrue();
  inline void set_has_group();
  inline void clear_has_group();
  inline void set_has_can_guild_capture();
  inline void clear_has_can_guild_capture();
  inline void set_has_guild_capture_boss();
  inline void clear_has_guild_capture_boss();
  inline void set_has_monster_id();
  inline void clear_has_monster_id();
  inline void set_has_max_exp_pre_min();
  inline void clear_has_max_exp_pre_min();
  inline void set_has_max_gold_pre_min();
  inline void clear_has_max_gold_pre_min();
  inline void set_has_avg_run_time();
  inline void clear_has_avg_run_time();
  inline void set_has_avg_fight_time();
  inline void clear_has_avg_fight_time();
  inline void set_has_tax_broadcast_mark();
  inline void clear_has_tax_broadcast_mark();
  inline void set_has_guild_tax_broadcat_mark();
  inline void clear_has_guild_tax_broadcat_mark();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 min_level_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > pre_stages_;
  ::std::string* rewards_;
  ::google::protobuf::int32 scene_id_;
  ::google::protobuf::int32 refresh_time_;
  ::google::protobuf::int32 raid_count_;
  ::google::protobuf::int32 rush_count_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > normal_monsters_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > bosses_;
  ::google::protobuf::int32 guard_id_;
  ::google::protobuf::int32 first_drop_;
  ::google::protobuf::int32 camp_;
  ::google::protobuf::int32 can_captrue_;
  ::google::protobuf::int32 group_;
  ::google::protobuf::int32 can_guild_capture_;
  ::google::protobuf::int32 guild_capture_boss_;
  ::google::protobuf::int32 monster_id_;
  ::google::protobuf::int32 max_exp_pre_min_;
  ::google::protobuf::int32 max_gold_pre_min_;
  ::google::protobuf::int32 avg_run_time_;
  ::google::protobuf::int32 avg_fight_time_;
  ::google::protobuf::int32 tax_broadcast_mark_;
  ::google::protobuf::int32 guild_tax_broadcat_mark_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(25 + 31) / 32];

  friend void  protobuf_AddDesc_SceneStageConfig_2eproto();
  friend void protobuf_AssignDesc_SceneStageConfig_2eproto();
  friend void protobuf_ShutdownFile_SceneStageConfig_2eproto();

  void InitAsDefaultInstance();
  static SceneStageConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// SceneStageConfig

// required int32 id = 1;
inline bool SceneStageConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SceneStageConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SceneStageConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SceneStageConfig::clear_id() {
  id_ = 0;
  clear_has_id();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::id() const {
  return id_;
}
inline void SceneStageConfig::set_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_id();
  id_ = value;
}

// required string name = 2;
inline bool SceneStageConfig::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SceneStageConfig::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SceneStageConfig::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SceneStageConfig::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
  SetDirty();
}
inline const ::std::string& SceneStageConfig::name() const {
  return *name_;
}
inline void SceneStageConfig::set_name(const ::std::string& value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SceneStageConfig::set_name(const char* value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SceneStageConfig::set_name(const char* value, size_t size) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SceneStageConfig::mutable_name() {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* SceneStageConfig::release_name() {
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
inline void SceneStageConfig::set_allocated_name(::std::string* name) {
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

// required int32 min_level = 3;
inline bool SceneStageConfig::has_min_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SceneStageConfig::set_has_min_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SceneStageConfig::clear_has_min_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SceneStageConfig::clear_min_level() {
  min_level_ = 0;
  clear_has_min_level();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::min_level() const {
  return min_level_;
}
inline void SceneStageConfig::set_min_level(::google::protobuf::int32 value) {
  SetDirty();
  set_has_min_level();
  min_level_ = value;
}

// repeated int32 pre_stages = 4;
inline int SceneStageConfig::pre_stages_size() const {
  return pre_stages_.size();
}
inline void SceneStageConfig::clear_pre_stages() {
  pre_stages_.Clear();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::pre_stages(int index) const {
  return pre_stages_.Get(index);
}
inline void SceneStageConfig::set_pre_stages(int index, ::google::protobuf::int32 value) {
  SetDirty();
  pre_stages_.Set(index, value);
}
inline void SceneStageConfig::add_pre_stages(::google::protobuf::int32 value) {
  SetDirty();
  pre_stages_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SceneStageConfig::pre_stages() const {
  return pre_stages_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SceneStageConfig::mutable_pre_stages() {
  SetDirty();
  return &pre_stages_;
}

// required int32 scene_id = 5;
inline bool SceneStageConfig::has_scene_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SceneStageConfig::set_has_scene_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SceneStageConfig::clear_has_scene_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SceneStageConfig::clear_scene_id() {
  scene_id_ = 0;
  clear_has_scene_id();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::scene_id() const {
  return scene_id_;
}
inline void SceneStageConfig::set_scene_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_scene_id();
  scene_id_ = value;
}

// required string rewards = 6;
inline bool SceneStageConfig::has_rewards() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SceneStageConfig::set_has_rewards() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SceneStageConfig::clear_has_rewards() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SceneStageConfig::clear_rewards() {
  if (rewards_ != &::google::protobuf::internal::kEmptyString) {
    rewards_->clear();
  }
  clear_has_rewards();
  SetDirty();
}
inline const ::std::string& SceneStageConfig::rewards() const {
  return *rewards_;
}
inline void SceneStageConfig::set_rewards(const ::std::string& value) {
  SetDirty();
  set_has_rewards();
  if (rewards_ == &::google::protobuf::internal::kEmptyString) {
    rewards_ = new ::std::string;
  }
  rewards_->assign(value);
}
inline void SceneStageConfig::set_rewards(const char* value) {
  SetDirty();
  set_has_rewards();
  if (rewards_ == &::google::protobuf::internal::kEmptyString) {
    rewards_ = new ::std::string;
  }
  rewards_->assign(value);
}
inline void SceneStageConfig::set_rewards(const char* value, size_t size) {
  SetDirty();
  set_has_rewards();
  if (rewards_ == &::google::protobuf::internal::kEmptyString) {
    rewards_ = new ::std::string;
  }
  rewards_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SceneStageConfig::mutable_rewards() {
  SetDirty();
  set_has_rewards();
  if (rewards_ == &::google::protobuf::internal::kEmptyString) {
    rewards_ = new ::std::string;
  }
  return rewards_;
}
inline ::std::string* SceneStageConfig::release_rewards() {
  SetDirty();
  clear_has_rewards();
  if (rewards_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = rewards_;
    rewards_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SceneStageConfig::set_allocated_rewards(::std::string* rewards) {
  SetDirty();
  if (rewards_ != &::google::protobuf::internal::kEmptyString) {
    delete rewards_;
  }
  if (rewards) {
    set_has_rewards();
    rewards_ = rewards;
  } else {
    clear_has_rewards();
    rewards_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 refresh_time = 7;
inline bool SceneStageConfig::has_refresh_time() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SceneStageConfig::set_has_refresh_time() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SceneStageConfig::clear_has_refresh_time() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SceneStageConfig::clear_refresh_time() {
  refresh_time_ = 0;
  clear_has_refresh_time();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::refresh_time() const {
  return refresh_time_;
}
inline void SceneStageConfig::set_refresh_time(::google::protobuf::int32 value) {
  SetDirty();
  set_has_refresh_time();
  refresh_time_ = value;
}

// required int32 raid_count = 8;
inline bool SceneStageConfig::has_raid_count() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SceneStageConfig::set_has_raid_count() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SceneStageConfig::clear_has_raid_count() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SceneStageConfig::clear_raid_count() {
  raid_count_ = 0;
  clear_has_raid_count();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::raid_count() const {
  return raid_count_;
}
inline void SceneStageConfig::set_raid_count(::google::protobuf::int32 value) {
  SetDirty();
  set_has_raid_count();
  raid_count_ = value;
}

// required int32 rush_count = 9;
inline bool SceneStageConfig::has_rush_count() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SceneStageConfig::set_has_rush_count() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SceneStageConfig::clear_has_rush_count() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SceneStageConfig::clear_rush_count() {
  rush_count_ = 0;
  clear_has_rush_count();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::rush_count() const {
  return rush_count_;
}
inline void SceneStageConfig::set_rush_count(::google::protobuf::int32 value) {
  SetDirty();
  set_has_rush_count();
  rush_count_ = value;
}

// repeated int32 normal_monsters = 10;
inline int SceneStageConfig::normal_monsters_size() const {
  return normal_monsters_.size();
}
inline void SceneStageConfig::clear_normal_monsters() {
  normal_monsters_.Clear();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::normal_monsters(int index) const {
  return normal_monsters_.Get(index);
}
inline void SceneStageConfig::set_normal_monsters(int index, ::google::protobuf::int32 value) {
  SetDirty();
  normal_monsters_.Set(index, value);
}
inline void SceneStageConfig::add_normal_monsters(::google::protobuf::int32 value) {
  SetDirty();
  normal_monsters_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SceneStageConfig::normal_monsters() const {
  return normal_monsters_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SceneStageConfig::mutable_normal_monsters() {
  SetDirty();
  return &normal_monsters_;
}

// repeated int32 bosses = 11;
inline int SceneStageConfig::bosses_size() const {
  return bosses_.size();
}
inline void SceneStageConfig::clear_bosses() {
  bosses_.Clear();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::bosses(int index) const {
  return bosses_.Get(index);
}
inline void SceneStageConfig::set_bosses(int index, ::google::protobuf::int32 value) {
  SetDirty();
  bosses_.Set(index, value);
}
inline void SceneStageConfig::add_bosses(::google::protobuf::int32 value) {
  SetDirty();
  bosses_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SceneStageConfig::bosses() const {
  return bosses_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SceneStageConfig::mutable_bosses() {
  SetDirty();
  return &bosses_;
}

// required int32 guard_id = 12;
inline bool SceneStageConfig::has_guard_id() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void SceneStageConfig::set_has_guard_id() {
  _has_bits_[0] |= 0x00000800u;
}
inline void SceneStageConfig::clear_has_guard_id() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void SceneStageConfig::clear_guard_id() {
  guard_id_ = 0;
  clear_has_guard_id();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::guard_id() const {
  return guard_id_;
}
inline void SceneStageConfig::set_guard_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_guard_id();
  guard_id_ = value;
}

// required int32 first_drop = 13;
inline bool SceneStageConfig::has_first_drop() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void SceneStageConfig::set_has_first_drop() {
  _has_bits_[0] |= 0x00001000u;
}
inline void SceneStageConfig::clear_has_first_drop() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void SceneStageConfig::clear_first_drop() {
  first_drop_ = 0;
  clear_has_first_drop();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::first_drop() const {
  return first_drop_;
}
inline void SceneStageConfig::set_first_drop(::google::protobuf::int32 value) {
  SetDirty();
  set_has_first_drop();
  first_drop_ = value;
}

// required int32 camp = 14;
inline bool SceneStageConfig::has_camp() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void SceneStageConfig::set_has_camp() {
  _has_bits_[0] |= 0x00002000u;
}
inline void SceneStageConfig::clear_has_camp() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void SceneStageConfig::clear_camp() {
  camp_ = 0;
  clear_has_camp();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::camp() const {
  return camp_;
}
inline void SceneStageConfig::set_camp(::google::protobuf::int32 value) {
  SetDirty();
  set_has_camp();
  camp_ = value;
}

// required int32 can_captrue = 15;
inline bool SceneStageConfig::has_can_captrue() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void SceneStageConfig::set_has_can_captrue() {
  _has_bits_[0] |= 0x00004000u;
}
inline void SceneStageConfig::clear_has_can_captrue() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void SceneStageConfig::clear_can_captrue() {
  can_captrue_ = 0;
  clear_has_can_captrue();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::can_captrue() const {
  return can_captrue_;
}
inline void SceneStageConfig::set_can_captrue(::google::protobuf::int32 value) {
  SetDirty();
  set_has_can_captrue();
  can_captrue_ = value;
}

// required int32 group = 16;
inline bool SceneStageConfig::has_group() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void SceneStageConfig::set_has_group() {
  _has_bits_[0] |= 0x00008000u;
}
inline void SceneStageConfig::clear_has_group() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void SceneStageConfig::clear_group() {
  group_ = 0;
  clear_has_group();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::group() const {
  return group_;
}
inline void SceneStageConfig::set_group(::google::protobuf::int32 value) {
  SetDirty();
  set_has_group();
  group_ = value;
}

// required int32 can_guild_capture = 17;
inline bool SceneStageConfig::has_can_guild_capture() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void SceneStageConfig::set_has_can_guild_capture() {
  _has_bits_[0] |= 0x00010000u;
}
inline void SceneStageConfig::clear_has_can_guild_capture() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void SceneStageConfig::clear_can_guild_capture() {
  can_guild_capture_ = 0;
  clear_has_can_guild_capture();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::can_guild_capture() const {
  return can_guild_capture_;
}
inline void SceneStageConfig::set_can_guild_capture(::google::protobuf::int32 value) {
  SetDirty();
  set_has_can_guild_capture();
  can_guild_capture_ = value;
}

// required int32 guild_capture_boss = 18;
inline bool SceneStageConfig::has_guild_capture_boss() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void SceneStageConfig::set_has_guild_capture_boss() {
  _has_bits_[0] |= 0x00020000u;
}
inline void SceneStageConfig::clear_has_guild_capture_boss() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void SceneStageConfig::clear_guild_capture_boss() {
  guild_capture_boss_ = 0;
  clear_has_guild_capture_boss();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::guild_capture_boss() const {
  return guild_capture_boss_;
}
inline void SceneStageConfig::set_guild_capture_boss(::google::protobuf::int32 value) {
  SetDirty();
  set_has_guild_capture_boss();
  guild_capture_boss_ = value;
}

// required int32 monster_id = 19;
inline bool SceneStageConfig::has_monster_id() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void SceneStageConfig::set_has_monster_id() {
  _has_bits_[0] |= 0x00040000u;
}
inline void SceneStageConfig::clear_has_monster_id() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void SceneStageConfig::clear_monster_id() {
  monster_id_ = 0;
  clear_has_monster_id();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::monster_id() const {
  return monster_id_;
}
inline void SceneStageConfig::set_monster_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_monster_id();
  monster_id_ = value;
}

// required int32 max_exp_pre_min = 20;
inline bool SceneStageConfig::has_max_exp_pre_min() const {
  return (_has_bits_[0] & 0x00080000u) != 0;
}
inline void SceneStageConfig::set_has_max_exp_pre_min() {
  _has_bits_[0] |= 0x00080000u;
}
inline void SceneStageConfig::clear_has_max_exp_pre_min() {
  _has_bits_[0] &= ~0x00080000u;
}
inline void SceneStageConfig::clear_max_exp_pre_min() {
  max_exp_pre_min_ = 0;
  clear_has_max_exp_pre_min();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::max_exp_pre_min() const {
  return max_exp_pre_min_;
}
inline void SceneStageConfig::set_max_exp_pre_min(::google::protobuf::int32 value) {
  SetDirty();
  set_has_max_exp_pre_min();
  max_exp_pre_min_ = value;
}

// required int32 max_gold_pre_min = 21;
inline bool SceneStageConfig::has_max_gold_pre_min() const {
  return (_has_bits_[0] & 0x00100000u) != 0;
}
inline void SceneStageConfig::set_has_max_gold_pre_min() {
  _has_bits_[0] |= 0x00100000u;
}
inline void SceneStageConfig::clear_has_max_gold_pre_min() {
  _has_bits_[0] &= ~0x00100000u;
}
inline void SceneStageConfig::clear_max_gold_pre_min() {
  max_gold_pre_min_ = 0;
  clear_has_max_gold_pre_min();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::max_gold_pre_min() const {
  return max_gold_pre_min_;
}
inline void SceneStageConfig::set_max_gold_pre_min(::google::protobuf::int32 value) {
  SetDirty();
  set_has_max_gold_pre_min();
  max_gold_pre_min_ = value;
}

// required int32 avg_run_time = 22;
inline bool SceneStageConfig::has_avg_run_time() const {
  return (_has_bits_[0] & 0x00200000u) != 0;
}
inline void SceneStageConfig::set_has_avg_run_time() {
  _has_bits_[0] |= 0x00200000u;
}
inline void SceneStageConfig::clear_has_avg_run_time() {
  _has_bits_[0] &= ~0x00200000u;
}
inline void SceneStageConfig::clear_avg_run_time() {
  avg_run_time_ = 0;
  clear_has_avg_run_time();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::avg_run_time() const {
  return avg_run_time_;
}
inline void SceneStageConfig::set_avg_run_time(::google::protobuf::int32 value) {
  SetDirty();
  set_has_avg_run_time();
  avg_run_time_ = value;
}

// required int32 avg_fight_time = 23;
inline bool SceneStageConfig::has_avg_fight_time() const {
  return (_has_bits_[0] & 0x00400000u) != 0;
}
inline void SceneStageConfig::set_has_avg_fight_time() {
  _has_bits_[0] |= 0x00400000u;
}
inline void SceneStageConfig::clear_has_avg_fight_time() {
  _has_bits_[0] &= ~0x00400000u;
}
inline void SceneStageConfig::clear_avg_fight_time() {
  avg_fight_time_ = 0;
  clear_has_avg_fight_time();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::avg_fight_time() const {
  return avg_fight_time_;
}
inline void SceneStageConfig::set_avg_fight_time(::google::protobuf::int32 value) {
  SetDirty();
  set_has_avg_fight_time();
  avg_fight_time_ = value;
}

// required int32 tax_broadcast_mark = 24;
inline bool SceneStageConfig::has_tax_broadcast_mark() const {
  return (_has_bits_[0] & 0x00800000u) != 0;
}
inline void SceneStageConfig::set_has_tax_broadcast_mark() {
  _has_bits_[0] |= 0x00800000u;
}
inline void SceneStageConfig::clear_has_tax_broadcast_mark() {
  _has_bits_[0] &= ~0x00800000u;
}
inline void SceneStageConfig::clear_tax_broadcast_mark() {
  tax_broadcast_mark_ = 0;
  clear_has_tax_broadcast_mark();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::tax_broadcast_mark() const {
  return tax_broadcast_mark_;
}
inline void SceneStageConfig::set_tax_broadcast_mark(::google::protobuf::int32 value) {
  SetDirty();
  set_has_tax_broadcast_mark();
  tax_broadcast_mark_ = value;
}

// required int32 guild_tax_broadcat_mark = 25;
inline bool SceneStageConfig::has_guild_tax_broadcat_mark() const {
  return (_has_bits_[0] & 0x01000000u) != 0;
}
inline void SceneStageConfig::set_has_guild_tax_broadcat_mark() {
  _has_bits_[0] |= 0x01000000u;
}
inline void SceneStageConfig::clear_has_guild_tax_broadcat_mark() {
  _has_bits_[0] &= ~0x01000000u;
}
inline void SceneStageConfig::clear_guild_tax_broadcat_mark() {
  guild_tax_broadcat_mark_ = 0;
  clear_has_guild_tax_broadcat_mark();
  SetDirty();
}
inline ::google::protobuf::int32 SceneStageConfig::guild_tax_broadcat_mark() const {
  return guild_tax_broadcat_mark_;
}
inline void SceneStageConfig::set_guild_tax_broadcat_mark(::google::protobuf::int32 value) {
  SetDirty();
  set_has_guild_tax_broadcat_mark();
  guild_tax_broadcat_mark_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SceneStageConfig_2eproto__INCLUDED