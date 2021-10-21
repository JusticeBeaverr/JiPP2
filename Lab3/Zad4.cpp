#include<iostream>
#include <cstdlib>

using namespace std;

void fill(int tablica[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Podaj " << i << " wyraz w tablicy: ";
        cin >> tablica[i];

    }

}

void show(int tablica[], int n) {
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << "  ";
    }
}

void reverse(int tablica[], int n){
    for(int i=0;i<n;i++)
    {
        int pomocnicza=tablica[i];
        tablica[i]=tablica[n-1];
        tablica[n-1]=pomocnicza;
        n--;
    }
}


int main() {
    int n;
    cout << "Prosze podaj rozmiar tablicy: ";
    cin >> n;
    int *tab = new int[n];
    fill(tab, n);
    cout << "tablica przed zamiana: ";
    show(tab,n);
    cout << endl;
    reverse(tab,n);
    cout << "tablica po zamiana: ";
    show(tab,n);
    delete[] tab;
    return 0;
}
