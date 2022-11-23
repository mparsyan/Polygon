#include "include/rectangle.hpp"

Rectangle::Rectangle(double side_0, double side_1)
    : side_0(side_0),
      side_1(side_1)
{}

double Rectangle::calculate_area()
{
    return (side_0 * side_1);
}

double Rectangle::calculate_perimeter()
{
    return 2 * (side_0 + side_1);
}
