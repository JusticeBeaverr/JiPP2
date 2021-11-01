#include <iostream>
#include <math.h>

using namespace std;

class Punkt {
public:

    float x1, y1, x2, y2;

    Punkt();

    float odleglosc() {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

Punkt::Punkt()
        : x1(1),
          y1(2),
          x2(3),
          y2(4) {}

int main() {
    Punkt odleglosc;
    cout << odleglosc.odleglosc();
    return 0;
}
