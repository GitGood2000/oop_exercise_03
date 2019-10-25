#include "trapeze.h"
#include <cmath>
#include <cassert>

trapeze::trapeze(const point& p1, const point& p2, const point& p3, const point& p4):
  p1_(p1), p2_(p2), p3_(p3), p4_(p4) {}

trapeze::trapeze(std::istream& is){
    is >> p1_.x >> p1_.y >> p2_.x >> p2_.y >> p3_.x >> p3_.y >> p4_.x >> p4_.y;
    assert();
    assert();
    assert();
}

point trapeze::center() {
  return {((p1_.x + p4_.x)* 0.5), ((p1_.y + p2_.y) * 0.5)};
}

double trapeze::area() {
  const double l1 = p1_.x - p4_.x;
  const double l2 = p2_.x - p3_.x;
  const double h = p1_.y - p2_.y;
  return std::abs(l1 * l2 * h * 0.5);
}

void trapeze::print(std::ostream& os) {
  os << "Trapeze [" << p1_ << "] [" << p2_ << "] [" << p3_ << "] [" << p4_ << "]";
}
