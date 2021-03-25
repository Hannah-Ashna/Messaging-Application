#ifndef CONSTS_H
#define CONSTS_H

#endif // CONSTS_H
#include <string>
#include <QtCore/QString>

namespace Consts {
    const std::string enterroomname =  "Enter Room Name";
    struct errors{
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

}
