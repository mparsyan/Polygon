#include <cmath>

#include "include/ellipse.hpp"

Ellipse::Ellipse(double r1, double r2)
    : r1(r1),
      r2(r2)
{}

double Ellipse::calculate_area()
{
    return M_PI * r1 * r2;
}

double Ellipse::calculate_perimeter()
{
   return M_PI * (r1 + r2);
}
