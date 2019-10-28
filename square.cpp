#include "square.h"
#include <cmath>
#include <cassert>

square::square(const point& p1, const point& p2, const point& p3, const point& p4):
  p1_(p1), p2_(p2), p3_(p3), p4_(p4) {}

square::square(std::istream& is) {
  is >> p1_.x >> p1_.y >> p2_.x >> p2_.y >> p3_.x >> p3_.y >> p4_.x >> p4_.y;
    assert(((p2_.x - p1_.x)*(p4_.x - p1_.x))+((p2_.y - p1_.y)*(p4_.y - p1_.y)) == 0);
    assert(((p3_.x - p2_.x)*(p1_.x - p2_.x))+((p3_.y - p2_.y)*(p1_.y - p2_.y)) == 0);
    assert(((p4_.x - p3_.x)*(p2_.x - p3_.x))+((p4_.y - p3_.y)*(p2_.y - p3_.y)) == 0);
    assert((p2_.x - p1_.x) == (p1_.y - p4_.y));
    assert((p3_.x - p2_.x) == (p2_.y - p1_.y));
    assert((p4_.x - p3_.x) == (p3_.y - p2_.y));
}

point square::center() {
  return {(p1_.x + p2_.x + p3_.x + p4_.x) * 0.25, (p1_.y + p2_.y + p3_.y + p4_.y) * 0.25};
}

double square::area() {
  const double ds1 = p1_.x - p2_.x;
  const double ds2 = p4_.x - p1_.x;
  return std::abs(ds1 * ds1 + ds2 * ds2);
}

void square::print(std::ostream& os){
  os << "Square [" << p1_ << "] [" << p2_ << "] [" << p3_ << "] [" << p4_ << "]";
}
