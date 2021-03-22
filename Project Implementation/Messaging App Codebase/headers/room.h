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
    std::vector<Channel> channel;
    int roomID;

    Room();
    void setName();
    void getName();

    void setRoomID();
    void getRoomID();

    void addMembers();
    void getMembers();

protected:
    std::vector<User> members;
};

#endif // ROOM_H
