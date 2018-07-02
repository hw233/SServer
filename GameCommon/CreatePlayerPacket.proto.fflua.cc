// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CreatePlayerPacket.proto
#include "CreatePlayerPacket.pb.h"
#include "CreatePlayerPacket.proto.fflua.h"
namespace Packet {
bool CreatePlayer_fflua_reg(lua_State* state)
{
//for decltype
	CreatePlayer* message(nullptr);
	message;
	ff::fflua_register_t<CreatePlayer, ctor()>(state, "CreatePlayer", "google::protobuf::Message")
		// required int32 player_actor_base_id = 1;
		.def(&CreatePlayer::player_actor_base_id, "player_actor_base_id")
		.def(&CreatePlayer::set_player_actor_base_id, "set_player_actor_base_id")
		// required string name = 2;
		.def(&CreatePlayer::name, "name")
		.def<void (CreatePlayer::*)(const std::string&)>(&CreatePlayer::set_name, "set_name")
		// required .Packet.Camp camp = 3;
		.def(&CreatePlayer::camp, "camp")
		.def(&CreatePlayer::set_camp, "set_camp")
		// required int32 hair = 4;
		.def(&CreatePlayer::hair, "hair")
		.def(&CreatePlayer::set_hair, "set_hair")
		.def(&CreatePlayer::ByteSize, "ByteSize")
		.def(&CreatePlayer::SetInitialized, "SetInitialized")
		;
	return true;
}
bool CreatePlayerReply_fflua_reg(lua_State* state)
{
//for decltype
	CreatePlayerReply* message(nullptr);
	message;
	ff::fflua_register_t<CreatePlayerReply, ctor()>(state, "CreatePlayerReply", "google::protobuf::Message")
		// required .Packet.CreatePlayerReply.Result result = 1;
		.def(&CreatePlayerReply::result, "result")
		.def(&CreatePlayerReply::set_result, "set_result")
		.def(&CreatePlayerReply::ByteSize, "ByteSize")
		.def(&CreatePlayerReply::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ChangeHair_fflua_reg(lua_State* state)
{
//for decltype
	ChangeHair* message(nullptr);
	message;
	ff::fflua_register_t<ChangeHair, ctor()>(state, "ChangeHair", "google::protobuf::Message")
		// required int32 new_hair = 1;
		.def(&ChangeHair::new_hair, "new_hair")
		.def(&ChangeHair::set_new_hair, "set_new_hair")
		.def(&ChangeHair::ByteSize, "ByteSize")
		.def(&ChangeHair::SetInitialized, "SetInitialized")
		;
	return true;
}
bool CreatePlayerPacket_fflua_regist_all(lua_State* state)
{
	CreatePlayer_fflua_reg(state);
	CreatePlayerReply_fflua_reg(state);
	ChangeHair_fflua_reg(state);
	return true;
}
}