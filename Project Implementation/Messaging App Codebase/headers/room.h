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
    void setName(std::string theName);
    std::string getName();

    void setRoomID(int id);
    int getRoomID();

    void addMembers(User member);
    std::vector<User> getMembers();

protected:
    std::vector<User> members;
};

#endif // ROOM_H
