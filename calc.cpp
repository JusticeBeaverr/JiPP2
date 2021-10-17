//
// Created by fixu2 on 15.10.2021.
//

#include "../include/calc.h"
#include <iostream>
using namespace std;

void Calculate(int wybor, char* argv[])
{
    switch (wybor)
    {
        case 1:
            Add(argv);
            break;
        case 2:
            Distract(argv);
            break;

        case 3:
            Volume(argv);
            break;
    }
}

void Add(char* argv[])
{
    int wynik = (int)argv[2] + (int)argv[3];
    cout << "Wynik dodawania liczb " << argv[2] << " i "
         << argv[3] << " to: " << wynik;
}

void Distract(char* argv[])
{
    int wynik = (int)argv[2] - (int)argv[3];
    cout << "Wynik odejmowania liczb " << argv[2] << " i "
         << argv[3] << " to: " << wynik;
}

void Volume(char* argv[])
{
    int wynik = (((int)argv[2] + (int)argv[3])*(int)argv[4])/2*(int)argv[5];
    cout << "Objetosc graniastsłupa, który ma w podstawie trapez o podstawach" << argv[2] << " i "
         << argv[3] <<"i wysokosci" << argv[4] <<"i wysokosci graniastosłupa" << argv[5] << " to: " << wynik;
}


int sprawdzInput(int counter, char* argv[])
{
    if (counter < 2)
    {
        cout << "Za mala ilosc argumentów" << endl;
    }
    cout << argv[1];
    if (argv[1] == string("add"))
    {

        if (counter < 4)
        {
            cout << "Simple calculatur" << endl;
            cout << "simpleCalc [add]" << endl << endl;
            cout << "Dzialania" << endl;
            cout << "add [a] [b]";
            cout << "\t";
            cout << "Dodawanie dwoch liczb ..." << endl;
        }
        else
        {
            return 1;
        }
    }
    else if(argv[1]== "distract")
    {
        if (counter < 4)
        {
            cout << "Simple calculatur" << endl;
            cout << "simpleCalc [distract]" << endl << endl;
            cout << "Dzialania" << endl;
            cout << "distract [a] [b]";
            cout << "\t";
            cout << "Odejmowanie dwoch liczb ..." << endl;
        }
        else
        {
            return 2;
        }
    }
    else if(argv[1] == "volumne")
    {
        if (counter < 6)
        {
            cout << "Simple calculatur" << endl;
            cout << "simpleCalc [volume]" << endl << endl;
            cout << "Dzialania" << endl;
            cout << "volume [a] [b] [c] [d]";
            cout << "\t";
            cout << "Objetosc..." << endl;
        }
        return 3;
    }
    return 0;
}





