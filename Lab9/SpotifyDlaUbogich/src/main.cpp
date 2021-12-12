//
// Created by fixu2 on 09.12.2021.
//

#include "../include/Odtwarzacz.h"

using namespace std;

int main() {
    Odtwarzacz Spotify;
    Spotify.addSong("Young Leosia - Szkalnki");
    Spotify.addSong("White 2115 - Califrona");
    Spotify.addSong("Diho - Ruchy");
    Spotify.showSongs();
}