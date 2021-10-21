#include<iostream>
#include <cstdlib>

using namespace std;

void fill(int tablica[], int n) {
    for (int i = 0; i < n; i++) {
        tablica[i] = (rand() % 100);
        cout<<tablica[i]<<endl;

    }
}

int biggestone(int tablica[], int n) {
    int i, naj; //naj-najwieksza liczba z tablicy
    naj = tablica[0];
    for (i = 0; i < n; i++) {
        if (tablica[i] > naj) {
            naj=tablica[i];
        }
    }
return naj;
}

int main() {
    int n;
    cout << "Prosze podaj rozmiar tablicy: ";
    cin >> n;
    int *tab = new int[n];
    fill(tab, n);
    cout << "Najwieksza wartosc to: " << biggestone(tab, n);
    delete [] tab;
    return 0;
}
