x#include "square.h"
#include <cmath>
//#include <algorythm>

square::square(const point& p1, const point& p2, const point& p3, const point& p4):
  p1_(p1), p2_(p2), p3_(p3), p4_(p4) {}

square::square(std::istream& is) {
  if (abs(p1_.x - p2_.x) == abs(p2_.y - p3_.y) == abs(p3_.x - p4_.x) == abs(p4_.x - p1_.x))
    is >> p1_.x >> p1_.y >> p2_.x >> p2_.y >> p3_.x >> p3_.y >> p4_.x >> p4_.y;
}

point square::center() {
  return {(p1_.x + p2_.x) * 0.5, (p1_.y + p2_.y) * 0.5};
}

double square::area() {
  const double ds = p1_.x - p2_.x;
  return std::abs(ds * ds);
}

void square::print(std::ostream& os){
  os << "Square [" << p1_ << "] [" << p2_ << "] [" << p3_ << "] [" << p4_ << "]";
}
