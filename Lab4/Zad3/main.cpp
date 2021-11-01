#include<iostream>
#include "string.h"

using namespace std;


struct car {
    string marka;
    string model;
    int rok;
    string kolor;
    int przebieg;
};

struct count {
    int ls;
    string marka;
};


int liczenie(car *sam, count *liczba) {
    int ilosc = 0;
    bool bul = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (sam[i].marka == liczba[j].marka) {
                liczba[j].ls++;
                bul = 1;
            }
        }
        if (bul == 0) {
            liczba[ilosc].ls = 1;
            liczba[ilosc].marka = sam[i].marka;
            ilosc++;
        }
        bul = 0;
    }
    for (int i = 0; i < ilosc; i++) {
        cout << liczba[i].marka << " - " << liczba[i].ls << endl;
    }
    return 0;
}

int main() {


    car samochod[4] = {{"Opel",   "Astra",   1999, "Czerwony",     100000},
                       {"Porshe", "Carrera", 2015, "Czarny",       370000},
                       {"Peugot", "207",     2001, "Zielony",      0},
                       {"Opel",   "Octavia", 2009, "Pomaranczowy", 199000}};
    count *liczba = new count[4];
    liczenie(samochod, liczba);


    return 0;
}
