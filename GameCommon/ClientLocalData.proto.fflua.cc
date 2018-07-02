// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientLocalData.proto
#include "ClientLocalData.pb.h"
#include "ClientLocalData.proto.fflua.h"
namespace Packet {
bool FriendMessages_fflua_reg(lua_State* state)
{
//for decltype
	FriendMessages* message(nullptr);
	message;
	ff::fflua_register_t<FriendMessages, ctor()>(state, "FriendMessages", "google::protobuf::Message")
		// required fixed64 guid = 1;
		.def(&FriendMessages::guid, "guid")
		.def(&FriendMessages::set_guid, "set_guid")
		// repeated .Packet.FriendMessageInfo messages = 2;
		.def(&FriendMessages::messages_size, "messages_size")
		.def<decltype(message->messages(0)) (FriendMessages::*)(int) const>(&FriendMessages::messages, "messages")
		.def<decltype(message->mutable_messages(0)) (FriendMessages::*)(int)>(&FriendMessages::mutable_messages, "mutable_messages")
		.def(&FriendMessages::add_messages, "add_messages")
		.def(&FriendMessages::ByteSize, "ByteSize")
		.def(&FriendMessages::SetInitialized, "SetInitialized")
		;
	return true;
}
bool FriendsMessages_fflua_reg(lua_State* state)
{
//for decltype
	FriendsMessages* message(nullptr);
	message;
	ff::fflua_register_t<FriendsMessages, ctor()>(state, "FriendsMessages", "google::protobuf::Message")
		// repeated .Packet.FriendMessages info = 1;
		.def(&FriendsMessages::info_size, "info_size")
		.def<decltype(message->info(0)) (FriendsMessages::*)(int) const>(&FriendsMessages::info, "info")
		.def<decltype(message->mutable_info(0)) (FriendsMessages::*)(int)>(&FriendsMessages::mutable_info, "mutable_info")
		.def(&FriendsMessages::add_info, "add_info")
		.def(&FriendsMessages::ByteSize, "ByteSize")
		.def(&FriendsMessages::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SystemMessages_fflua_reg(lua_State* state)
{
//for decltype
	SystemMessages* message(nullptr);
	message;
	ff::fflua_register_t<SystemMessages, ctor()>(state, "SystemMessages", "google::protobuf::Message")
		// repeated .Packet.FriendMessageInfo info = 1;
		.def(&SystemMessages::info_size, "info_size")
		.def<decltype(message->info(0)) (SystemMessages::*)(int) const>(&SystemMessages::info, "info")
		.def<decltype(message->mutable_info(0)) (SystemMessages::*)(int)>(&SystemMessages::mutable_info, "mutable_info")
		.def(&SystemMessages::add_info, "add_info")
		.def(&SystemMessages::ByteSize, "ByteSize")
		.def(&SystemMessages::SetInitialized, "SetInitialized")
		;
	return true;
}
bool MessageRecords_fflua_reg(lua_State* state)
{
//for decltype
	MessageRecords* message(nullptr);
	message;
	ff::fflua_register_t<MessageRecords, ctor()>(state, "MessageRecords", "google::protobuf::Message")
		// required .Packet.SystemMessages system = 1;
		.def(&MessageRecords::system, "system")
		.def(&MessageRecords::mutable_system, "mutable_system")
		// required .Packet.FriendsMessages friends = 2;
		.def(&MessageRecords::friends, "friends")
		.def(&MessageRecords::mutable_friends, "mutable_friends")
		.def(&MessageRecords::ByteSize, "ByteSize")
		.def(&MessageRecords::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ClientLocalData_fflua_regist_all(lua_State* state)
{
	FriendMessages_fflua_reg(state);
	FriendsMessages_fflua_reg(state);
	SystemMessages_fflua_reg(state);
	MessageRecords_fflua_reg(state);
	return true;
}
}