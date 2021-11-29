//
// Created by fixu2 on 29.11.2021.
//

#include <Figure.h>


void Figure::display() {
    cout << "Name: " << this->name << "Color: " << this->color << endl;
}


double Triangle::obwod()
{
    float ab = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    float bc = sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2));
    float ca = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2));
    return ab + bc + ca;
}

Circle::Circle(double inr) : r(inr)
{}

double Circle::pole()
{
    return M_PI * r * r;
}

double Circle::getArea()
{
    return M_PI * r * r;
}


Rectangle::Rectangle(double ina, double inb) : a(ina), b(inb)
{}

double Rectangle::getArea()
{
    return a * b;
}