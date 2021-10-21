#include<iostream>

using namespace std;

void fill(int tablica[], int *n) {
    for (int i = 0; i < *n; i++) {
        cout << "Podaj " << i << " wyraz w tablicy: ";
        cin >> tablica[i];
    }
}

void positive(int tablica[], int *n) {
    for (int i = 0; i < *n; i++) {
        if (tablica[i] > 0) {
            cout << tablica[i] << " ";
        }
    }
}


int main() {
    int n;
    cout << "Prosze podaj rozmiar tablicy: ";
    cin >> n;
    int *tab = new int[n];
    fill(tab, &n);
    cout << "Dodatnie elementy tablicy : ";
    positive(tab, &n);
    delete[] tab;

    return 0;
}
