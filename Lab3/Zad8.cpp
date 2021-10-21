#include <iostream>

using namespace std;

void assign(int x, int *w) {
    *w = x;
}

int main() {
    int x = 2137, y, *wsk = &y;
    assign(x, wsk);
    cout << y;

    return 0;
}
