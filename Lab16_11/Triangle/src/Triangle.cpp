//
// Created by fixu2 on 18.11.2021.
//

#include "../iclude/Triangle.h"
#include "../iclude/Node.h"


Triangle::Triangle(Node ina, Node inb, Node inc, string nazwa) :
a(ina),
b(inb),
c(inc),
name(nazwa)
{}

void Triangle::display()
{
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}

double Triangle::distance(int firstPointIndex, int secondPointIndex)
{
    Node tab[3] = {a, b, c};
    return pointsDistance(tab[firstPointIndex], tab[secondPointIndex]);
}


void showTriangleData(Triangle triangle) {
    triangle.display();
}
void showTriangleData(Triangle &triangle) {
    triangle.display();
}
void showTriangleData(Triangle *triangle) {
    (*triangle).display();
}