#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>

#include "channel.h"
#include "user.h"

class Room
{
public:
    std::string name;
    std::vector<Channel> channels;
    int roomID;

    Room();
    void setName(std::string theName);
    std::string getName();

    void setRoomID(int id);
    int getRoomID();

    void addMembers(std::string member);
    std::vector<std::string> getMembers();

    void addChannel(Channel channel);
    std::vector<Channel> getChannelList();

protected:
    std::vector<std::string> members;
};

#endif // ROOM_H
