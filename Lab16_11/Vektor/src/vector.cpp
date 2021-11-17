//
// Created by fixu2 on 16.11.2021.
//

#include "../include/vector.h"

Vector::Vector() {};

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator*(const double &sk) const {
    return {x * sk, y * sk};
}

double Vector::operator*(const Vector &rhs) const {
    return (x * rhs.x) + (y * rhs.y);
}

void Vector::print(Vector a) {
    cout << "x = " << a.x << "y = " << a.y << endl;
}