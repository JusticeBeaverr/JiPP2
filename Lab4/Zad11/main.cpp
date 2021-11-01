#include <iostream>
#include <math.h>

using namespace std;

class Figura {

public:

   int wiercholki;
   int *x, *y;
   Figura(int wiercholki);

};

Figura::Figura(int wierzcholki)
        :wiercholki(wierzcholki),
         x(new int[wierzcholki]),
         y(new int[wierzcholki])
{
    for (int i = 0; i < wierzcholki; ++i)
    {
        cout << "Wprowadz wspolrzedne " << i + 1 << " wiercholka:\n";
        cin >> x[i];
        cin >> y[i];
    }
}

int main() {
    int liczba;
    cout << "Wprowadz ilosc wieszcholkow\n";
    cin >> liczba;
    Figura fig(liczba);

    for(int i = 0; i < liczba; i++)
    {
        cout << "Wspolrzedne " << i + 1 << " punktu";
        cout << "(" << fig.x[i] << "," << fig.y[i] << ")\n";
    }
    return 0;
}
