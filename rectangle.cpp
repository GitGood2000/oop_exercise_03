#include "rectangle.h"
#include <cmath>
#include <cassert>
//#include <algorythm>

rectangle::rectangle(const point& p1, const point& p2, const point& p3, const point& p4):
  p1_(p1), p2_(p2), p3_(p3), p4_(p4) {}

rectangle::rectangle(std::istream& is){
    is >> p1_.x >> p1_.y >> p2_.x >> p2_.y >> p3_.x >> p3_.y >> p4_.x >> p4_.y;
    assert(((p2_.x - p1_.x)*(p4_.x - p1_.x))+((p2_.y - p1_.y)*(p4_.y - p1_.y)) == 0);
    
}

point rectangle::center() {
  return {(p1_.x + p2_.x + p3_.x + p4_.x) * 0.25, (p1_.y + p2_.y + p3_.y + p4_.y) * 0.25};
}

double rectangle::area() {
  const double dx1 = p1_.x - p2_.x;
    const double dy1 = p1_.y - p4_.y;
    const double dx2 = p1_.
    return std::abs(dx * dy);
}

void rectangle::print(std::ostream& os) {
  os << "Rectangle [" << p1_ << "] [" << p2_ << "] [" << p3_ << "] [" << p4_ << "]";
}
