#ifndef MEDIA_H
#define MEDIA_H

#include "message.h"

class Media: public Message
{
public:
    Media();
    void Download();
};

#endif // MEDIA_H
