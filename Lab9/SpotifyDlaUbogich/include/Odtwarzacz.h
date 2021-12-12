//
// Created by fixu2 on 09.12.2021.
//

#ifndef LAB9_ODTWARZACZ_H
#define LAB9_ODTWARZACZ_H

#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

class Odtwarzacz {
    int wsk = 0;
    list<string> ListaOdtwarzania;
    list<string>::iterator x;

public:
    void addSong(string tytul);

    void deleteSong();

    void nextSong();

    void previousSong();

    void showSongs();

};


#endif //LAB9_ODTWARZACZ_H
