#include <iostream>

using namespace std;

class Pauza {
public:
    int *tab;

    Pauza();

    ~Pauza();

    void pause() {
        system("PAUSE");
    };
};

Pauza::Pauza() {
    tab = new int[1024];
}

Pauza::~Pauza() {
    cout << "\nYoungLeosia<3";
    delete[] tab;
}


int main() {
    Pauza rozmiar;
    rozmiar.pause();
    cout << sizeof(rozmiar);

    return 0;
}
