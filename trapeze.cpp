#include "trapeze.h"
#include <cmath>
#include <cassert>

trapeze::trapeze(const point& p1, const point& p2, const point& p3, const point& p4):
  p1_(p1), p2_(p2), p3_(p3), p4_(p4) {}

trapeze::trapeze(std::istream& is){
    is >> p1_.x >> p1_.y >> p2_.x >> p2_.y >> p3_.x >> p3_.y >> p4_.x >> p4_.y;
    assert(((p2_.x - p1_.x)*(p4_.y - p3_.y)) == ((p4_.x - p3_.x)*(p2_.y - p1_.y)));
}

point trapeze::center() {
    return {(p1_.x + p2_.x + p3_.x + p4_.x) * 0.25, (p1_.y + p2_.y + p3_.y + p4_.y) * 0.25};
    //return {((p1_.x + p4_.x)* 0.5), ((p1_.y + p2_.y) * 0.5)};
}

double trapeze::area() {
  const double l1 = p2_.x - p1_.x;
  const double l2 = p4_.x - p3_.x;
  const double lh = ((p4_.x - p1_.x)*(p4_.x - p3_.x)+(p4_.y - p1_.y)*(p4_.y - p3_.y))/sqrt((p4_.x - p3_.x)*(p4_.x - p3_.x)+(p4_.y - p3_.y)*(p4_.y - p3_.y));
  const double h = sqrt((p4_.x - p1_.x)*(p4_.x - p1_.x)+(p4_.y - p1_.y)*(p4_.y - p1_.y)-lh*lh);
  //std::cout << (p4_.x - p1_.x)*(p4_.x - p3_.x) << " "  << (p4_.y - p1_.y)*(p4_.y - p3_.y) << " " << lh << " " << h << std::endl;
  return std::abs(l1 * l2 * h * 0.5);
}

void trapeze::print(std::ostream& os) {
  os << "Trapeze [" << p1_ << "] [" << p2_ << "] [" << p3_ << "] [" << p4_ << "]";
}
