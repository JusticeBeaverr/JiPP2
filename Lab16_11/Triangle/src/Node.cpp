//
// Created by fixu2 on 21.11.2021.
//



#include <iostream>
#include "../iclude/Node.h"

using namespace std;


Node::Node() : x(0), y(0) {}

Node::Node(double x, double y) : x(x), y(y) {}

void Node::display() {
    cout << "Wspolrzedne x = " << this->x << "Wspolrzedne y = " << this->y << endl;
}

void Node::set_point(double a, double b) {
    this->x = a;
    this->y = b;
}

double pointsDistance(Node a, Node b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}





