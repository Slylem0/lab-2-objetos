#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

void Rectangle::display_parameters() const {
    cout << "Rectangle - Width: " << width
         << ", Height: " << height
         << ", Area: " << area()
         << ", Perimeter: " << perimeter() << endl;
}
