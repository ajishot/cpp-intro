#include "Polygon.hpp"

Polygon::Polygon(std::vector<Point> a) v(a) {
}

double Polygon::area() {
    double retArea = 0;
    for (int i = 1; i < v.size()-1; i++){
      Triangle a = Triangle(v[0], v[i], v[i+1]);
      retArea += a.area();
    }
    return retArea;
  }

double Polygon::perimeter() {
    double retPerimeter = 0;
    for (int i = 0; i < v.size()-1; i++) {
      retPerimeter += v[i].distance_to_point(v[i+1]);
    }
    retPerimeter += v[0].distance_to_point(v[v.size()-1]);
    return retPerimeter;
}