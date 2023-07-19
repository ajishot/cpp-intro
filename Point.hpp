#pragma once

class Point
{
private:
  double m_d_x;
  double m_d_y;

public:
  Point(double x, double y);

  double x(){ return m_d_x; }
  double y(){ return m_d_y; }
  void add_x(double x){ m_d_x += x; }
  void add_y(double y){ m_d_y += y; }
  double distance_to_origin();
  double distance_to_point(Point p);
};