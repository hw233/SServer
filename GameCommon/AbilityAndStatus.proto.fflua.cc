// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AbilityAndStatus.proto
#include "AbilityAndStatus.pb.h"
#include "AbilityAndStatus.proto.fflua.h"
namespace Config {
bool AbilityAndStatusConfig_fflua_reg(lua_State* state)
{
//for decltype
	AbilityAndStatusConfig* message(nullptr);
	message;
	ff::fflua_register_t<AbilityAndStatusConfig, ctor()>(state, "AbilityAndStatusConfig", "google::protobuf::Message")
		// required .Config.BattleObjectStatus status = 1;
		.def(&AbilityAndStatusConfig::status, "status")
		.def(&AbilityAndStatusConfig::set_status, "set_status")
		// repeated bool can_do = 2;
		.def(&AbilityAndStatusConfig::can_do_size, "can_do_size")
		.def<decltype(message->can_do(0)) (AbilityAndStatusConfig::*)(int) const>(&AbilityAndStatusConfig::can_do, "can_do")
		.def<void(AbilityAndStatusConfig::*)(int, const decltype(message->can_do(0)))>(&AbilityAndStatusConfig::set_can_do, "set_can_do")
		.def(&AbilityAndStatusConfig::add_can_do, "add_can_do")
		.def(&AbilityAndStatusConfig::ByteSize, "ByteSize")
		.def(&AbilityAndStatusConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool AbilityAndStatus_fflua_regist_all(lua_State* state)
{
	AbilityAndStatusConfig_fflua_reg(state);
	return true;
}
}