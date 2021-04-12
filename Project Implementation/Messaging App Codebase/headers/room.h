#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>

#include "channel.h"
#include "user.h"
#include "moderator.h"
#include "admin.h"

class Room
{
public:
    std::string name;
    std::vector<Channel> channels;
    std::vector<std::string> members;
    std::vector<Moderator> moderators;

    Admin admin;
    int roomID;

    Room();
    void setName(std::string theName);
    std::string getName();

    void setRoomID(int id);
    int getRoomID();

    std::vector<std::string> getMembers();

    void addMembers(std::string member);
    void removeMember(std::string member);

    void addMod(Moderator mod);
    void removeMod(std::string modName);

    void addChannel(Channel channel);
    std::vector<Channel> getChannelList();

};

#endif // ROOM_H
