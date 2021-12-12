//
// Created by fixu2 on 09.12.2021.
//
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> tekst= {"siema siema", "ebeebe", "pomieszalem harnolda"};
    list<string>::iterator x;

    for (x = tekst.begin(); x != tekst.end(); x++) {

        cout << (*x) << " "; //używanie iteratora wejściowego do przechodzenia przez listę
    }
    cout<<endl;

    for (x = tekst.begin(); x != tekst.end(); x++)
    {
        for(auto &znak:(*x))
        {
            znak-=32;
        }
    }
    cout<<endl;

    for (x = tekst.begin(); x != tekst.end(); x++) {

        cout << (*x) << " "; //używanie iteratora wejściowego do przechodzenia przez listę
    }
    cout<<endl;
}

