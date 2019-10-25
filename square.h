#ifndef D_SQUARE_H
#define D_SQUARE_H

#include "figure.h"

struct square : figure{
  square(const point& p1, const point& p2, const point& p3, const point& p4);
    square(std::istream& is);
    
    point center() override;
    double area() override;
    void print(std::ostream& os) override; 
    
private:
    point p1_, p2_, p3_, p4_;
};

#endif //D_SQUARE_H
