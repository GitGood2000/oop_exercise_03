#include "point.h"

std::ostream& operator << (std::ostream& os, const point& p){
    return os << p.x << " " << p.y; 
}
