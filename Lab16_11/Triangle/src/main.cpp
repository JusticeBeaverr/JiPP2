
#include "../iclude/Node.h"
#include "../iclude/Triangle.h"

#include <iostream>

using namespace std;

int main() {
    Node a, b(5,8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    //cout << triangle << endl; ta linijka sprawia że wogóle mi wywala wszystko
    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;

   // showTriangleData(triangle);
    //showTriangleData(&triangle);
}
