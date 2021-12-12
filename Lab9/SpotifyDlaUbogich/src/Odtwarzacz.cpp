//
// Created by fixu2 on 09.12.2021.
//

#include "../include/Odtwarzacz.h"

void Odtwarzacz::addSong(string tytul) {
    ListaOdtwarzania.push_back(tytul);
}

void Odtwarzacz::deleteSong() {
    ListaOdtwarzania.pop_front();
}

void Odtwarzacz::nextSong() {
    x = ListaOdtwarzania.begin();
    cout << "Nastepna piosenka:" << (*x) << endl;
    ListaOdtwarzania.push_back((*x));
    ListaOdtwarzania.pop_front();
}

void Odtwarzacz::previousSong() {
    x = ListaOdtwarzania.end();
    x--;
    cout << "Poprzednia piosenka:" << (*x) << endl;
}

void Odtwarzacz::showSongs() {
    for (x = ListaOdtwarzania.begin(); x != ListaOdtwarzania.end(); ++x, ++wsk) {
        cout << "[" << wsk << "]=" << (*x) << endl;
    }
    wsk = 0;
}