#include <iostream>
#include "math.h"

using namespace std;

class Student {
public:
    string imie;
    string nazwisko;
    int nralbumu;
    int lp;
    int po;

    void wczytanie() {
        cout << "Podaj dane dane studenta. Podaj imie:\n";
        cin >> imie;
        cout << "Podaj nazwisko:\n";
        cin >> nazwisko;
        cout << "Podaj nr. albumu:\n";
        cin >> nralbumu;
        cout << "Podaj liczbe pytan:\n";
        cin >> lp;
        cout << "Podaj ilosc poprawnych odpowiedzi:\n";
        cin >> po;
    }

    void wynik() {
        cout << imie << " " << nazwisko << " - " << (double) po / (double) lp * 100 << " procent";
    }

};

int main() {

    Student s1;
    s1.wczytanie();
    s1.wynik();
    return 0;
}
