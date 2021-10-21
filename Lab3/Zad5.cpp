include<iostream>
using namespace std;

double srednia(int *a, int *b) {
    double wynik;
    wynik = (double)(*a + *b) / 2;
    return wynik;
}

int main() {
    int a, b;
    cout << "Prosze podac 2 liczby: ";
    cin >> a;
    cin >> b;
    cout << "Srednia rowna sie: " << srednia(&a, &b);


    return 0;
}
