#ifndef MODERATOR_H
#define MODERATOR_H

#include "user.h"

#include <vector>

class Moderator: public User //! Moderator class handles moderation functions
{
public:
    std::vector<User> moderator;  //!< Vector of the moderators

    Moderator();
    User getUser();

protected:
    void addUser(User user);
    void removeUser(User user);
};

#endif // MODERATOR_H
