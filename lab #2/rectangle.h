#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h);  // Constructor

    double area() const override;
    double perimeter() const override;
    void display_parameters() const override;
};

#endif // RECTANGLE_H
