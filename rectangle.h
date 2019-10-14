#ifndef D_RECTANGLE_H
#define D_RECTANGLE_H

#include "figure.h"

struct rectangle : figure{
    rectangle(const point& p1, const point& p2);
    rectangle(std::istream& is);
    
    point center() override;
    double area() override;
    void print(std::ostream& os) override; 
    
private:
    point p1_, p2_;
};


#endif //D_RECTANGLE_H