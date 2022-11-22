#include <iostream>
#include <cmath>

// class Base
// {
//     public:
//         float S, P;
//         foo_rect

//         // void get_data()
//         // {
//         //     std::cin >> a >> b;
//         // }
//         // void display()
//         // {

//         // }
// };

// class Triangle: public Base
// {
//     float a, b, c;
//     P = a + b + c;
//     S = sqrt(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));
// };



double P, S;
void Triangle (double a, double b, double c)
{
    P = a + b + c;
    S = sqrt(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));
    std::cout << "P = " << P << "\nS = " << S << '\n';
}

void Rectangle (double a, double b)
{
    P = 2 * (a + b);
    S = a * b;
    std::cout << "P = " << P << "\nS = " << S << '\n';
}

void Square (double a)
{
    P = 4 * a;
    S = a * a;
    std::cout << "P = " << P << "\nS = " << S << '\n';
}

void Ellipse (double r1, double r2)
{
    P = M_PI * (r1 + r2);
    S = M_PI * r1 * r2;
    std::cout << "P = " << P << "\nS = " << S << '\n';
}

void Circle (double r)
{
    P = 2 * M_PI * r;
    S = M_PI * r * r;
    std::cout << "P = " << P << "\nS = " << S << '\n';
}

int main()
{
    std::cout << "\"Triangle\"\n";
    Triangle(3, 4, 5);
    std::cout << "\n\"Rectangle\"\n";
    Rectangle (3, 4);
    std::cout << "\n\"Square\"\n";
    Square(3);
    std::cout << "\n\"Ellipse\"\n";
    Ellipse(3, 4);
    std::cout << "\n\"Circle\"\n";
    Circle(3);
    return 0;
}