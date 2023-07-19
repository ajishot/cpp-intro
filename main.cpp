#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"

using namespace std;

int add(int x, int y) {
  return x + y;
}

int subtract(int x, int y) {
  return x - y;
}

int multiply(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  return x / y;
}



class Circle {
  public:
  int radius;
  Circle(int r) {
    radius = r;
  }

  int area() {
    return pow(radius, 2) * M_PI;
  }
};



class AUV {
  public:
  std::string name;
  Point position;
  double depth;
  double heading;
  array<double, 3> speed;
  double angular_speed;


  AUV(std::string n, Point p, double d, double h, array<double, 3> s, double a_s) : name(n), position(p), depth(d), heading(h), speed(s), angular_speed(a_s) {
  }

  void step(const double &dt) {
    position.add_x(speed[0] * dt);
    position.add_y(speed[1] * dt);
    depth += speed[2] * dt;
    heading += angular_speed * dt;
      }

  void apply_acceleration(array<double, 3> a, const double &dt) {
    speed[0] += a[0] * dt;
    speed[1] += a[1] * dt;
    speed[2] += a[2] * dt;
  }

  void apply_angular_acceleration(double angular_acceleration, const double &dt) {
    angular_speed += angular_acceleration * dt;
  }

};


int main()
{
  std::cout << "My name is AJ and this class is AUV." << std::endl;

  int x = 5;
  int y = 7;
  int z = 10;

  std::cout << x+y+z << std::endl;

  int w = 3;

  std::cout << x*y*z << std::endl;

  int v = 2;

  std::cout << x/y/v << std::endl;

  std::cout << "The sum of " << x << ", " << y << ", and " << z << " is " << x + y + z << std::endl;

  std::cout << "The product of " << x << ", " << y << ", and " << z << " is " << x * y * z << std::endl;

  std::cout << "The division of " << x << ", " << y << " is " << x / y << ". v is " << v << std::endl;



  int a = 5;
  int &b = a;

  return 0;
}