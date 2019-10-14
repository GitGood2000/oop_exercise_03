#ifndef D_FIGURE_H
#define D_FIGURE_H

#include <iostream>

#include "point.h"

struct figure{
    virtual point center() = 0;
    virtual double area() = 0;
    virtual void print(std::ostream& os) = 0;
    
    virtual ~figure() {};
  
//std::ostream& operator << (std::ostream& os, const figure& f);  
};

#endif //D_FIGURE_H
