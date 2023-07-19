#pragma once
#include <cmath>
#include <vector>
#include "Triangle.hpp"

class Polygon {
    private:
    std::vector<Point> v;

    public:
    Polygon(std::vector<Point> a);
    double area();
    double perimeter();

};