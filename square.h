#ifndef D_SQUARE_H
#define D_SQUARE_H

#include "figure.h"

struct square : figure{
    square(const point& p, double length);
    square(std::istream& is);
    
    point center() override;
    double area() override;
    void print(std::ostream& os) override; 
    
private:
    point p_;
    double length_;
};


#endif //D_SQUARE_H
