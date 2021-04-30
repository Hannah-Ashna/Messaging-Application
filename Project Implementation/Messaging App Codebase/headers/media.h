#ifndef MEDIA_H
#define MEDIA_H

#include "message.h"

class Media: public Message //! Media class extends Message contains functions for downloading files.
{
public:
    Media();
    void Download();
};

#endif // MEDIA_H
