#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

// Clase abstracta Shape
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display_parameters() const = 0;
    // Sobrecarga del operador + para sumar áreas
    double operator+(const Shape& other) const {
        return this->area() + other.area();
    }

    virtual ~Shape() {}
};

#endif // SHAPE_H
