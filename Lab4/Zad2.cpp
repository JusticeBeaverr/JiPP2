#include<iostream>
#include "string.h"

using namespace std;


struct car {
    char marka[20];
    char model[20];
    int rok;
    char kolor[20];
    int przebieg;
};

int main() {
    int ls = 4; //ls - liczba samochodów

    car samochod[] = {{"Opel",   "Astra",   1999, "Czerwony", 100000},
                      {"Porshe", "Carrera", 2015, "Czarny", 370000},
                      {"Peugot", "207",     2001, "Zielony", 0},
                      {"Skoda",  "Octavia", 2009, "Pomaranczowy", 199000}};


    cout << "Marka\tModel \tRok produkcji \tKolor \tPrzebieg" << endl;
    cout << "------------------------------------------------" << endl;

    for (int i = 0; i < ls; i++) {
        cout << samochod[i].marka << "\t" << samochod[i].model << "\t" << samochod[i].rok << "\t" << samochod[i].kolor << "\t" << samochod[i].przebieg
             << endl;
    }

    return 0;
}
