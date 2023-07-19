#pragma once
#include <cmath>
#include "Point.hpp"

class Triangle {
private:
Point p1;
Point p2;
Point p3;

public:
Triangle(Point a, Point b, Point c);

double perimeter();

double area();

};