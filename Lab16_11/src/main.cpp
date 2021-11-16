#include <iostream>
#include "../include/Node.h"

using namespace std;

int main() {

    Node a, b;
    a.updateValue(5, 2);
    b.updateValue(10, 3);
    a.display();
    b.display();
    cout << "wynik to : " << pointsDistance(a, b);
    return 0;
}
