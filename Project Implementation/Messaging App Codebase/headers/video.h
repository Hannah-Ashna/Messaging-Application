#ifndef VIDEO_H
#define VIDEO_H

#include "media.h"

class Video: public Media
{
public:
    Video();
    void play();
    void stop();
    void load();
};

#endif // VIDEO_H
