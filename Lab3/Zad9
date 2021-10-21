#include<iostream>
#include <string>
#include <cstdlib>

using namespace std;

void change(string word) {
    int changed;
    changed = stoi(word);

    cout << changed;
}


int main() {
    string word;
    cout << "Podaj ciag znakow do przekonwertowania: ";
    cin >> word;

    try {
        change(word);
    }
    catch (out_of_range) {
        cout << "Zla liczba wariacie";
    }
    catch (invalid_argument) {
        cout << "A gdzie liczba wariacie?";
    }
    return 0;
}
