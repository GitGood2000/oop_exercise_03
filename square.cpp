#include "square.h"
#include <cmath>
//#include <algorythm>

square::square(const point& p, double length):
  p_(p), length_(length) {}

square::square(std::istream& is) {
    is >> p_.x >> p_.y >> length_;
}

point square::center() {
    return {(p_.x + (length_ * 0.5)), (p_.y + (length_ * 0.5))};
}

double square::area() {
    return length_ * length_;
}

void square::print(std::ostream& os){
    os << "Square [" << p_ << "] (" << length_ << ")";
}
