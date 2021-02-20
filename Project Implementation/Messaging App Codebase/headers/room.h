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
    std::string description;
    std::vector<Channel> channel;
    int roomID;

    Room();
    void changeName();
    void getName();
    void getDescription();
    void getRoomID();
    void getMembers();

protected:
    std::vector<User> members;
};

#endif // ROOM_H
