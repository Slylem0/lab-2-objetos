#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);  // Constructor

    double area() const override;
    double perimeter() const override;
    void display_parameters() const override;
};

#endif // CIRCLE_H

