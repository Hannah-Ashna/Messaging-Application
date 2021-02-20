#ifndef IMAGE_H
#define IMAGE_H

#include "media.h"

class Image: public Media
{
public:
    Image();
    void view();
    void getImage();
};

#endif // IMAGE_H
