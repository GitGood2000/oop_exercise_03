#include "trapeze.h"
#include <cmath>
//#include <algorythm>

trapeze::trapeze(const point& p, double l1, double l2, double h):
    p_(p), l1_(l1), l2_(l2), h_(h) {}

trapeze::trapeze(std::istream& is){
    is >> p_.x >> p_.y >> l1_ >> l2_ >> h_;
}

point trapeze::center() {
    return {(p_.x + (l1_ * 0.5)), (p_.y + (h_ * 0.5))};
}

double trapeze::area() {
  return std::abs((l1_+l2_)*h_*0.5);
}

void trapeze::print(std::ostream& os) {
  os << "Trapeze [" << p_ << "] (" << l1_ << " " << l2_ << " " << h_ << ")";
}
