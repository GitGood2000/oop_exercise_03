#include "rectangle.h"
#include <cmath>
//#include <algorythm>

rectangle::rectangle(const point& p1, const point& p2):
    p1_(p1), p2_(p2) {}

rectangle::rectangle(std::istream& is){
    is >> p1_.x >> p1_.y >> p2_.x >> p2_.y;
}

point rectangle::center() {
    return {(p1_.x + p2_.x) * 0.5, (p1_.y + p2_.y) * 0.5};
}

double rectangle::area() {
    const double dx = p1_.x - p2_.x;
    const double dy = p1_.y - p2_.y;
    return std::abs(dx * dy);
}

void rectangle::print(std::ostream& os) {
    os << "Rectangle [" << p1_ << "] [" << p2_ << "]";
}
