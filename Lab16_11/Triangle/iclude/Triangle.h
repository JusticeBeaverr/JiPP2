//
// Created by fixu2 on 18.11.2021.
//

#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H


#include "iostream"
#include "Node.h"

using namespace std;

class Triangle{

    Node a, b, c;
    string name;

public:
    Triangle(Node ina, Node inb, Node inc, string nazwa);
    void display();
    double distance(int firstPointIndex, int secondPointIndex);

};

void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);



#endif //TRIANGLE_TRIANGLE_H
