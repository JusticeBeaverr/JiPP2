#include <iostream>
#include "math.h"

using namespace std;

class Fkwadratowa {
public:
    int a, b, c;

    void ogolna() {
        cout << "Podaj wspolczynniki a, b i c: \n";
        cin >> a >> b >> c;
        cout << "f(x) = "<< a << "x^2 + " << b << "x + " << c;
    }

};

int main() {

    Fkwadratowa k;
    k.ogolna();
    return 0;
}
