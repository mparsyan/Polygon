#include <cmath>

#include "include/triangle.hpp"

Triangle::Triangle (double side_0, double side_1, double side_2)
    : side_0(side_0),
      side_1(side_1),
      side_2(side_2)
{}

double Triangle::calculate_area()
{
    double p = side_0 + side_1 + side_2;
    return sqrt(p / 2 * (p / 2 - side_0) * (p / 2 - side_1) * (p / 2 - side_2));
}

double Triangle::calculate_perimeter()
{
    return side_0 + side_1 + side_2;
}
