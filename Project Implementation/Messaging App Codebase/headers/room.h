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

    void addMembers(std::string member);
    std::vector<std::string> getMembers();
    void removeMember(std::string member);

    void addChannel(Channel channel);
    std::vector<Channel> getChannelList();

};

#endif // ROOM_H
