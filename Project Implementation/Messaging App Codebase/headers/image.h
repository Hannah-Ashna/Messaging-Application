#ifndef IMAGE_H
#define IMAGE_H

#include "media.h"

class Image: public Media //! Image class extends media includes functions for accessing image files in program.
{
public:
    Image();
    void view();
    void getImage();
};

#endif // IMAGE_H
