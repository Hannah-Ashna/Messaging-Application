#include "headers/room.h"

Room::Room()
{

}

void Room::setName(std::string name)
{
    this->name = name;
}

std::string Room::getName()
{
    return name;
}

void Room::setRoomID(int roomID)
{
    this->roomID = roomID;
}

int Room::getRoomID()
{
    return roomID;
}

void Room::addMembers(std::string member)
{

    members.push_back(member);
}

std::vector<std::string> Room::getMembers()
{
    return members;
}

void Room::removeMember(std::string member)
{
    for(int i = 0; i < (int)members.size(); i++){
        if(members.at(i) == member){
            members.erase(members.begin() + i);
        }
    }
}

void Room::addChannel(Channel channel) {
    channels.push_back(channel);
}

std::vector<Channel> Room::getChannelList() {
    return channels;
}
