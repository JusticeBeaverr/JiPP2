#include<iostream>
#include <string>

using namespace std;

divide(int a, int b) {
    int wynik;
    if (b == 0) {
        throw "Pamietaj cholero, nie dzieli sie przez zero";
    }
    wynik = a / b;
    if (a % b != 0) {
        throw "Ulamek byc nie moze";
    }
    cout << "Wynik dzielenia to: " << wynik;

}


int main() {
    int a, b;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;

    try {
        divide(a, b);
    }
    catch (const char *msg) {
        cout << msg;
    }

    return 0;
}
