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
    char model[20];
};


int najs(car *sam) {

    int i = 0;
    int najstarszy = sam[i].rok;
    for (i; i < 4; i++) {
        if (najstarszy > sam[i].rok)
            najstarszy = sam[i].rok;
    }
    return najstarszy;
}

int main() {

    int liczba = 4;
    car samochod[] = {{"Opel",   "Astra",   1999, "Czerwony",     100000},
                      {"Porshe", "Carrera", 2015, "Czarny",       370000},
                      {"Peugot", "207",     2001, "Zielony",      0},
                      {"Opel",   "Octavia", 2009, "Pomaranczowy", 199000}};


    cout << "Najstarszy rok to" << najs(samochod);

    return 0;
}
