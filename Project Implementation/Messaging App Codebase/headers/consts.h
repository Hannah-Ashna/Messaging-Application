#ifndef CONSTS_H
#define CONSTS_H

#endif // CONSTS_H
#include <string>
#include <QtCore/QString>

namespace Consts {

    struct errors{
        const std::string error = "Error";
        const std::string noRoomSelected = "Error: No Room Selected";
        const std::string noChannelSelected = "Error: No Channel Selected";
        const std::string subscription = "Could not subscribe. Is there a valid connection?";
        const std::string sendMessage = "Error: Could not Send Message";
        const std::string emptyUser = "Error: Username Field Empty";
        const std::string userNotFound = "Error: Username Not Found";
        const std::string userSubscribed = "Error: User Already Subscribed";
        const std::string invalidCreds = "Login Credentials Invalid";
        const std::string emptyFields = "Error: Fields must not be empty";
    }errors;
    struct buttons{
        const std::string connect = "Connect";
        const std::string disconnect = "Disconnect";
        const std::string username = "Username:";
        const std::string roomname = "Room Name:";

    }buttons;
    struct dialogs{
        const std::string enterroomname =  "Enter Room Name";
        const std::string enterChannelName = "Enter Channel Name";
        const std::string channelName = "Channel Name:";
        const std::string noChannel = "no-channel-connected";
        const std::string enterUsername = "Enter Username";

    }dialogs;

}
