#include <iostream>
#include "include/square.hpp"
#include "include/triangle.hpp"
#include "include/ellipse.hpp"
#include "include/circle.hpp"
#include "include/rectangle.hpp"

int main() 
{
    Square s(5);
    Triangle t(3, 4, 5);
    Ellipse e(3, 4);
    Circle c(3);
    Rectangle r(3, 4);
    
    std::cout << "Square area = " << s.calculate_area() << "\n";
    std::cout << "Square perimeter = " << s.calculate_perimeter() << "\n";
    
    std::cout << "Triangle area = " << t.calculate_area() << "\n";
    std::cout << "Triangle perimeter = " << t.calculate_perimeter() << "\n";
    
    std::cout << "Ellipse area = " << e.calculate_area() << "\n";
    std::cout << "Ellipse perimeter = " << e.calculate_perimeter() << "\n";
    
    std::cout << "Circle area = " << c.calculate_area() << "\n";
    std::cout << "Circle perimeter = " << c.calculate_perimeter() << "\n";
    
    std::cout << "Rectangle area = " << r.calculate_area() << "\n";
    std::cout << "Rectangle perimeter = " << r.calculate_perimeter() << "\n";
    
    return 0;
}
