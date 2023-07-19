#include "Line.hpp"
#include <cmath>
#include "Point.hpp"

Line::Line(Point a, Point b) : p1(a), p2(b) {
}

double Line::length() {
    return p1.distance_to_point(p2);
  }