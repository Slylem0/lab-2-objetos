#include "Circle.h"
#include <cmath>
#define PI 3.14159

Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * PI * radius;
}

void Circle::display_parameters() const {
    cout << "Circle - Radius: " << radius
         << ", Area: " << area()
         << ", Perimeter: " << perimeter() << endl;
}


