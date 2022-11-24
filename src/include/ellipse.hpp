#ifndef ellipse_hpp
#define ellipse_hpp

#include "figure.hpp"

class Ellipse : public Figure 
{
    double r1;
    double r2;
public:
    Ellipse(double, double);
    double calculate_area() override;
    double calculate_perimeter() override;
};

#endif /* ellipse_hpp */