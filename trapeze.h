#ifndef D_TRAPEZE_H
#define D_TRAPEZE_H

#include "figure.h"
#include <iostream>

struct trapeze : figure{
    trapeze(const point& p, double l1, double l2, double h);
    trapeze(std::istream& is);
    
    point center() override;
    double area() override;
    void print(std::ostream& os) override; 
    
private:
    point p_;
    double l1_, l2_, h_;
};


#endif //D_TRAPEZE_H
