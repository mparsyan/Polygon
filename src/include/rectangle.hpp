#ifndef rectangle_hpp
#define rectangle_hpp

#include "figure.hpp"

class Rectangle : public Figure 
{
    double side_0;
    double side_1; 
public:
    Rectangle(double, double);
    double calculate_area() override;
    double calculate_perimeter() override;
};

#endif /* rectangle_hpp */
