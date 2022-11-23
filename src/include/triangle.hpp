#ifndef triangle_hpp
#define triangle_hpp

#include "figure.hpp"

class Triangle : public Figure 
{
    double side_0;
    double side_1;
    double side_2;
public:
    Triangle(double, double, double);
    double calculate_area() override;
    double calculate_perimeter() override;
};

#endif /* triangle_hpp */
