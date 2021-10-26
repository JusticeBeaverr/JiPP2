#include<iostream>
#include "string.h"

using namespace std;


struct car {
    char marka[20];
    char model[20];
    int rok;
    char kolor[20];
};

int main() {
    int ls = 4; //ls - liczba samochodów

    car samochod[] = {{"Opel",   "Astra",   1999, "Czerwony"},
                      {"Porshe", "Carrera", 2015, "Czarny"},
                      {"Peugot", "207",     2001, "Zielony"},
                      {"Skoda",  "Octavia", 2009, "Pomaranczowy"}};


    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < ls; i++) {
        cout << samochod[i].marka << "\t" << samochod[i].model << "\t" << samochod[i].rok << "\t" << samochod[i].kolor
             << endl;
    }

    return 0;
}
