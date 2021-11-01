#include <iostream>

using namespace std;

class Prostopadloscian {
public:
    int A, B, C;

    void pole() {
        cout << "Podaj dlugosci 3 krawedzi: \n";
        cin >> A >> B >> C;
        int wynik = 2 * (A * B + A * C + B * C);
        cout << "Pole powierzchni to: " << wynik;
    }

};

int main() {

    Prostopadloscian p;
    p.pole();
    return 0;
}
