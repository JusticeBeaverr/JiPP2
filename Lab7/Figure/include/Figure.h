//
// Created by fixu2 on 29.11.2021.
//

#ifndef FIGURE_FIGURE_H
#define FIGURE_FIGURE_H

#include "iostream"
#include "math.h"

using namespace std;

struct point {
    double x, y;
};


class Figure {
protected:
    string name, color;
public:
    void display();
    virtual double getArea() = 0;
};


class Triangle: public Figure{
    point a, b, c;
public:
    double obwod();
};

class Circle: public Figure{
    double r;
public:
    Circle(double inr);
    double pole();
    double getArea();
};

class Rectangle : public Figure
{
    double a, b;
public:
    Rectangle(double ina, double inb);

    double getArea();
};

#endif //FIGURE_FIGURE_H
