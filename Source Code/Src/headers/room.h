#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>

#include "channel.h"
#include "user.h"
#include "moderator.h"
#include "admin.h"

class Room
        //! room contains modeators channels and the memeberrs
{
public:
    std::string name;  //!< The room name
    std::vector<Channel> channels;  //!< A vector of the channels contained in the room
    std::vector<std::string> members;  //!< A vector of the memebers in the channel
    std::vector<Moderator> moderators;  //!< A vector of the the users with moderator permissions in the room

    Admin admin;  //!< A user which has admin permisssion in the room
    int roomID; //!< The room ID/

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
