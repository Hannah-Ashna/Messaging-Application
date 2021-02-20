#ifndef MODERATOR_H
#define MODERATOR_H

#include <vector>

#include "admin.h"
#include "user.h"

class Moderator: public Admin
{
public:
    std::vector<User> moderator;

    Moderator();
    User getUser();

protected:
    void addUser(User user);
    void removeUser(User user);
};

#endif // MODERATOR_H
