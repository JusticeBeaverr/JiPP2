//
// Created by fixu2 on 18.11.2021.
//

#ifndef TRIANGLE_NODE_H
#define TRIANGLE_NODE_H

#include "iostream"
#include "math.h"

class Node {

private:
    double x, y;

    friend double pointsDistance(Node a, Node b);

public:

    Node();
    Node(double x,double y);
    void display();
    void set_point(double a, double b);


};

#endif //TRIANGLE_NODE_H
