#include "headers/room.h"

Room::Room()
{

}

void Room::setName(std::string theName)
{
    name = theName;
}

std::string Room::getName()
{

}

void Room::setRoomID(int id)
{
    roomID = id;
}

int Room::getRoomID()
{

}

void Room::addMembers(User member)
{
    members.push_back(member);
}

std::vector<User> Room::getMembers()
{

}
