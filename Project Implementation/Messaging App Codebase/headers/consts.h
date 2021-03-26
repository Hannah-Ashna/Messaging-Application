#ifndef CONSTS_H
#define CONSTS_H

#endif // CONSTS_H
#include <QtMqtt/QMqttClient>
#include <string>

namespace Consts {

    struct errors{
        const std::string
        error = "Error",
        noRoomSelected = "Error: No Room Selected",
        noChannelSelected = "Error: No Channel Selected",
        subscription = "Could not subscribe. Is there a valid connection?",
        sendMessage = "Error: Could not Send Message",
        emptyUser = "Error: Username Field Empty",
        userNotFound = "Error: Username Not Found",
        userSubscribed = "Error: User Already Subscribed",
        invalidCreds = "Login Credentials Invalid",
        emptyFields = "Error: Fields must not be empty",
        somethingWrong = "Something went wrong!",
        missingFile = "Error: Missing file";
    }errors;

    struct buttons{
        const std::string
        connect = "Connect",
        disconnect = "Disconnect",
        username = "Username:",
        roomname = "Room Name:";

    }buttons;

    struct dialogs{
        const std::string
        enterroomname =  "Enter Room Name",
        enterChannelName = "Enter Channel Name",
        channelName = "Channel Name:",
        noChannel = "no-channel-connected",
        noGroup = "no-group-selected",
        enterUsername = "Enter Username";
    }dialogs;

    struct topics{
        const QMqttTopicFilter statusFilter{"status"};
        const QMqttTopicName status{"status"};
    }topics;

    struct hashData{
        const std::string salt = "frog#!";
        const std::string pepper = "!#rats";
    }hashData;
    struct navigation{
        const int
        loginPage = 0,
        signupPage = 1,
        mainPage = 2,
        settingsPage = 3;
    }navigation;
}
