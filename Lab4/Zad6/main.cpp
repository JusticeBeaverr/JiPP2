#include <iostream>
#include "math.h"

using namespace std;

class Kula {
public:
    int R;

    void objetosc() {
        cout << "Podaj dlugosci promienia: \n";
        cin >> R;
        float wynik = (M_PI * pow(R, 3)) * 4 / 3;
        cout << "Objetosc to: " << wynik;
    }

};

int main() {

    Kula k;
    k.objetosc();
    return 0;
}
