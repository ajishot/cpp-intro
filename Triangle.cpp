#include "Triangle.hpp"
#include <cmath>
#include "Point.hpp"

Triangle::Triangle(Point a, Point b, Point c) : p1(a), p2(b), p3(c) {
}

double Triangle::perimeter() {
    return (p1.distance_to_point(p2) + p2.distance_to_point(p3) + p3.distance_to_point(p1));
}

double Triangle::area() {
    double s = perimeter() / 2;
    return sqrt(s * (s - p1.distance_to_point(p2)) * (s - p2.distance_to_point(p3)) * (s - p3.distance_to_point(p1)));
}