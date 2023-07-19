#include "Line.hpp"
#include <cmath>
#include "Point.hpp"

Line::Line(Point p1, Point p2) {
    this->p1 = p1;
    this->p2 = p2;
}

double Line::length() {
    return p1.distance_to_point(p2);
  }