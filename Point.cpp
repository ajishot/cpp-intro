#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y) m_d_x(x), m_d_y(y) {
}

double Point::distance_to_origin()
{
  return std::sqrt(std::pow(m_d_x, 2)  + std::pow(m_d_y, 2));
}

double Point::distance_to_point(Point p)
{
  return std::sqrt(std::pow(m_d_x - p.x(), 2)  + std::pow(m_d_y - p.y(), 2));
}