#include <iostream>
#include "../matrixLib/inlcude/lib.h"

using namespace std;


int main(int argc, char *argv[]) {
    cout << "Kalkulator macierzy!!\n";
    cout << "======================\n\n";
    cout << "W celu zobaczenie mozliwosci programu uruchom go z parametrem 'help'\n\n";
    cout << "Wybrane dzialanie - " << argv[1] << endl << endl;


    cout << "Wybierz zmienne na ktorych chcesz liczyc:\ni - inty\nd - double\n";
    string zmienna;
    if (!(cin >> zmienna)) {
        cout << "\nZle dame\n";
        cout << "Musisz zaczac od nowa\n\n";
        help();
        exit(1);
    }

    if (zmienna != "i" && zmienna != "d") {
        cout << "\nNieodpowiednie dane\n";
        cout << "Musisz zaczac od nowa\n\n";
        help();
        exit(1);
    }


    if (strcmp(argv[1], "addMatrix") == 0) {
        int wierszeA, kolumnyA;
        cout << "Wprowadz rozmiar macierzy ktore chcesz dodac (wiersze _ kolumny):\n";

        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "Musisz zaczac od nowa\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);
            int **B = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeA, kolumnyA);

            int **Wynik = addMatrix(A, B, wierszeA, kolumnyA);
            cout << "Wynik dodawania macierzy A + B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(B, wierszeA);
            delet(Wynik, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);
            double **B = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeA, kolumnyA);

            double **Wynik = addMatrix(A, B, wierszeA, kolumnyA);
            cout << "Wynik dodawania macierzy A + B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(B, wierszeA);
            delet(Wynik, wierszeA);
        }
    } else if (strcmp(argv[1], "subtractMatrix") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy ktore chcesz odjac (wiersze _ kolumny):\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "Musisz zaczac od nowa\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);
            int **B = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeA, kolumnyA);

            int **Wynik = subtractMatrix(A, B, wierszeA, kolumnyA);
            cout << "Wynik odejmowania macierzy A - B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(B, wierszeA);
            delet(Wynik, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);
            double **B = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeA, kolumnyA);

            double **Wynik = subtractMatrix(A, B, wierszeA, kolumnyA);
            cout << "Wynik odejmowania macierzy A - B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(B, wierszeA);
            delet(Wynik, wierszeA);
        }
    } else if (strcmp(argv[1], "multiplyMatrix") == 0) {
        int wierszeA, kolumnyA, wierszeB, kolumnyB;

        cout << "Wprowadz rozmiar pierwszej macierzy ktora chcesz pomnozyc (wiersze _ kolumny):\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "Musisz zaczac od nowa\n\n";
            help();
            exit(1);
        }

        cout << "Wprowadz rozmiar drugiej macierzy ktora chcesz pomnozyc (wiersze _ kolumny):\n";
        if (!(cin >> wierszeB >> kolumnyB)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (kolumnyA != wierszeB) {
            cout << "\n!Rozmiar kolumn macierzy A i wierszy macierzy B musi byc rowny!\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);
            int **B = createMatrix(wierszeB, kolumnyB);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeB, kolumnyB);

            int **Wynik = multiplyMatrix(A, B, wierszeA, kolumnyA, kolumnyB);
            cout << "Wynik mnozenia macierzy A x B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyB);

            delet(A, wierszeA);
            delet(B, wierszeB);
            delet(Wynik, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);
            double **B = create_dMatrix(wierszeB, kolumnyB);

            cout << "Wprowadz dane do pierwszej macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz dane do drugiej macierzy\n";
            fillMatrix(B, wierszeB, kolumnyB);

            double **Wynik = multiplyMatrix(A, B, wierszeA, kolumnyA, kolumnyB);
            cout << "Wynik mnozenia macierzy A x B: \n";
            displayMatrix(Wynik, wierszeA, kolumnyB);

            delet(A, wierszeA);
            delet(B, wierszeB);
            delet(Wynik, wierszeA);
        }

    } else if (strcmp(argv[1], "multiplyByScalar") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy ktora chcesz pomnozyc przez skalar\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {

            int **A = createMatrix(wierszeA, kolumnyA), skalar;

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz skalar: ";
            if (!(cin >> skalar)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            int **Wynik = multiplyByScalar(A, wierszeA, kolumnyA, skalar);
            cout << "Wynik mnozenia macierzy przez skalar A x s: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(Wynik, wierszeA);
        } else if (zmienna == "d") {

            double **A = create_dMatrix(wierszeA, kolumnyA), skalar;

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz skalar: ";
            if (!(cin >> skalar)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            double **Wynik = multiplyByScalar(A, wierszeA, kolumnyA, skalar);
            cout << "Wynik mnozenia macierzy przez skalar A x s: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(Wynik, wierszeA);
        }
    } else if (strcmp(argv[1], "transpozeMatrix") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy ktora ma zostac przetransponowana\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            int **Wynik = transpozeMatrix(A, wierszeA, kolumnyA);
            cout << "Wynik transpozycji macierzy A: \n";
            displayMatrix(Wynik, kolumnyA, wierszeA);

            delet(A, wierszeA);
            delet(Wynik, kolumnyA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            double **Wynik = transpozeMatrix(A, wierszeA, kolumnyA);
            cout << "Wynik transpozycji macierzy A: \n";
            displayMatrix(Wynik, kolumnyA, wierszeA);

            delet(A, wierszeA);
            delet(Wynik, kolumnyA);
        }
    } else if (strcmp(argv[1], "powerMatrix") == 0) {
        int wierszeA, kolumnyA;
        unsigned int poteg;

        cout << "Wprowadz rozmiar macierzy ktora ma zostac spotegowana\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (wierszeA != kolumnyA) {
            cout << "\nMacierze musza być tego samego rozmiaru\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {

            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz potege do ktorej chcesz podniesc macierz: ";
            cin >> poteg;

            int **Wynik = powerMatrix(A, wierszeA, kolumnyA, poteg);
            cout << "Wynik potegowania macierzy: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(Wynik, wierszeA);
        } else if (zmienna == "d") {

            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz potege do ktorej chcesz podniesc macierz: ";
            cin >> poteg;

            double **Wynik = powerMatrix(A, wierszeA, kolumnyA, poteg);
            cout << "Wynik potegowania macierzy: \n";
            displayMatrix(Wynik, wierszeA, kolumnyA);

            delet(A, wierszeA);
            delet(Wynik, wierszeA);
        }
    } else if (strcmp(argv[1], "determinantMatrix") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy z ktorej zostanie obliczony wyznacznik\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (wierszeA != kolumnyA) {
            cout << "\n!Wiersze i kolumny musza miec jednakowy rozmiar!\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, wierszeA);


            int Wynik = determinantMatrix(A, wierszeA);
            cout << "Wyznacznik macierzy: \n";
            cout << Wynik;

            delet(A, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, wierszeA);


            double Wynik = determinantMatrix(A, wierszeA);
            cout << "Wyznacznik macierzy: \n";
            cout << Wynik;

            delet(A, wierszeA);
        }
    } else if (strcmp(argv[1], "matrixIsDiagonal") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy ktora zostanie sprawdzona czy jest diagonalna\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            bool F = matrixIsDiagonal(A, wierszeA, kolumnyA);

            if (F)
                cout << F << " - jest diagonalna.";
            else
                cout << F << " - nie jest diagonalna";


            delet(A, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            bool F = matrixIsDiagonal(A, wierszeA, kolumnyA);

            if (F)
                cout << F << " - jest diagonalna.";
            else
                cout << F << " - nie jest diagonalna";


            delet(A, wierszeA);
        }
    } else if (strcmp(argv[1], "swap") == 0) {
        int wierszeA, kolumnyA, wierszeB, kolumnyB, wiersze, kolumny;

        cout << "Wprowadz rozmiar macierzy w ktorej chcesz zamienic dwie liczby miejscami\n";
        if (!(cin >> wiersze >> kolumny)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wiersze, kolumny);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wiersze, kolumny);

            cout << "Wprowadz wiersz i kolumne pierwszej liczby do zmiany:(pamieraj ze indeksy zaczynaja sie od 0)"
                 << endl;
            if (!(cin >> wierszeA >> kolumnyA)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            cout << "Wprowadz wiersz i kolumne drugiej liczby do zmiany:(pamietaj ze indeksy zaczynaja sie od 0)"
                 << endl;
            if (!(cin >> wierszeB >> kolumnyB)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            swap(A[wierszeA][kolumnyA], A[wierszeB][kolumnyB]);
            displayMatrix(A, wiersze, kolumny);

            delet(A, wiersze);
        }

        if (zmienna == "d") {
            double **A = create_dMatrix(wiersze, kolumny);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wiersze, kolumny);

            cout << "Wprowadz wiersz i kolumne pierwszej liczby do zmiany:(pamieraj ze indeksy zaczynaja sie od 0)"
                 << endl;
            if (!(cin >> wierszeA >> kolumnyA)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            cout << "Wprowadz wiersz i kolumne drugiej liczby do zmiany:(pamietaj ze indeksy zaczynaja sie od 0)"
                 << endl;
            if (!(cin >> wierszeB >> kolumnyB)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            swap(A[wierszeA][kolumnyA], A[wierszeB][kolumnyB]);
            displayMatrix(A, wiersze, kolumny);

            delet(A, wiersze);
        }
    } else if (strcmp(argv[1], "sortRow") == 0) {
        int wierszeA, kolumnyA, wiersz;

        cout << "Wprowadz rozmiar macierzy w ktorej chcesz posortowac wybrany wiersz\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz wiersz do posortowania:(pamietaj ze indeksy zaczynaja sie od 0)" << endl;
            if (!(cin >> wiersz)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            sortRow(A[wiersz], kolumnyA);
            displayMatrix(A, wierszeA, kolumnyA);

            delet(A, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Wprowadz wiersz do posortowania:" << endl;
            if (!(cin >> wiersz)) {
                cout << "\nNieodpowiednie dane\n";
                cout << "!Uruchom progam od nowa!\n\n";
                help();
                exit(1);
            }

            sortRow(A[wiersz], kolumnyA);
            displayMatrix(A, wierszeA, kolumnyA);

            delet(A, wierszeA);
        }
    } else if (strcmp(argv[1], "sortRowsInMatrix") == 0) {
        int wierszeA, kolumnyA;

        cout << "Wprowadz rozmiar macierzy w ktorej chcesz posortowac wszystkie wiersze\n";
        if (!(cin >> wierszeA >> kolumnyA)) {
            cout << "\nNieodpowiednie dane\n";
            cout << "!Uruchom progam od nowa!\n\n";
            help();
            exit(1);
        }

        if (zmienna == "i") {
            int **A = createMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Macierz po posortowaniu:" << endl;

            sortRowsInMatrix(A, wierszeA, kolumnyA);
            displayMatrix(A, wierszeA, kolumnyA);

            delet(A, wierszeA);
        } else if (zmienna == "d") {
            double **A = create_dMatrix(wierszeA, kolumnyA);

            cout << "Wprowadz dane do macierzy\n";
            fillMatrix(A, wierszeA, kolumnyA);

            cout << "Macierz po posortowaniu:" << endl;

            sortRowsInMatrix(A, wierszeA, kolumnyA);
            displayMatrix(A, wierszeA, kolumnyA);

            delet(A, wierszeA);
        }
    } else if (strcmp(argv[1], "help") == 0)
        help();

    else {
        cout << "!Wprowadzono bledy parametr uruchamiania!\n";
        help();
    }
    return 11;
}
