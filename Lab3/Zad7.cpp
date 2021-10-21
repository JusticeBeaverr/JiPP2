#include<iostream>


using namespace std;

void fill(int tablica[], int *n) {
    for (int i = 0; i < *n; i++) {
        cout << "Podaj " << i << " liczbe: ";
        cin >> tablica[i];
    }
}

void sort(int tablica[], int *n) {
    for (int i = 0; i < *n; i++)
        for (int j = 1; j < *n - i; j++)
            if (tablica[j - 1] > tablica[j])
                swap(tablica[j - 1], tablica[j]);
}

void show(int tablica[], int *n) {
    for (int i = 0; i < *n; i++) {
        cout << tablica[i] << "  ";
    }
}


int main() {
    int n;
    cout << "Ile liczb chcesz posortowac? ";
    cin >> n;
    int *tab = new int[n];
    fill(tab, &n);
    cout << "Tablica przed sortowaniem : ";
    show(tab, &n);
    sort(tab, &n);
    cout << "Tablica po sortowaniu : ";
    show(tab, &n);
    delete[] tab;
    return 0;
}
