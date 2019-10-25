#ifndef D_TRAPEZE_H
#define D_TRAPEZE_H

#include "figure.h"
#include <iostream>

struct trapeze : figure{
  trapeze(const point& p1, const point& p2, const point& p3, const point& p4);
    trapeze(std::istream& is);
    
    point center() override;
    double area() override;
    void print(std::ostream& os) override; 
    
private:
    point p1_, p2_, p3_, p4_;
};

#endif //D_TRAPEZE_H
