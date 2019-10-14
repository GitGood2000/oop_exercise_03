#ifndef D_POINT_H
#define D_POINT_H

#include <iostream>

struct point{
    double x,y;
};

std::ostream& operator << (std::ostream& os, const point& p);

#endif //D_POINT_H
