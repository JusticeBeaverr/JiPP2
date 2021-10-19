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
            Substract(argv);
            break;

        case 3:
            Volume(argv);
            break;
    }
}

void Add(char* argv[])
{
    int x = stoi(argv[2]);
    int y = stoi(argv[3]);
    int wynik = x+y;
    cout << "\tWynik dodawania liczb " << argv[2] << " i "
         << argv[3] << " to: " << wynik;
}

void Substract(char* argv[])
{
    int x = stoi(argv[2]);
    int y = stoi(argv[3]);
    int wynik = x-y;
    cout << "\tWynik odejmowania liczb " << argv[2] << " i "
         << argv[3] << " to: " << wynik;
}

void Volume(char* argv[])
{
    int x = stoi(argv[2]);
    int y = stoi(argv[3]);
    int h = stoi(argv[4]);
    int H = stoi(argv[5]);
    double wynik = (double (x + y) / 2) * h * H;
    cout << "\tObjetosc graniastslupa, ktory ma w podstawie trapez o podstawach " << argv[2] << " i "
       << argv[3] <<" i wysokosci" << argv[4] <<" i wysokosci graniastoslupa " << argv[5] << " to: " << wynik;

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
    else if(argv[1]== string("substract"))
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
    else if(argv[1] == string("volume"))
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
        else
        {
            return 3;
        }
    }
    return 0;
}
