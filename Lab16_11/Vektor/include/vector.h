//
// Created by fixu2 on 16.11.2021.
//

#ifndef ZAD2_VECTOR_H
#define ZAD2_VECTOR_H


#include "iostream"
#include "math.h"

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    Vector operator+(const Vector &rhs) const;

    Vector operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;

    Vector operator*(const double &sk) const;

    double operator*(const Vector &rhs) const;

    void print(Vector a);
};



#endif //ZAD2_VECTOR_H
