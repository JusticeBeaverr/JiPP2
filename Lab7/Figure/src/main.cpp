//
// Created by fixu2 on 29.11.2021.
//

#include "../include/Figure.h"

using namespace std;


int main() {
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
}