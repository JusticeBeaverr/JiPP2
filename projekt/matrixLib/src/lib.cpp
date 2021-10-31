#include "../include/lib.h"


using namespace std;

void help() {

    cout << "Mozliwe opcje:(wybierz jedna z nich jako parametr uruchamiania,)\n";
    cout << "[1] - Dodawanie macierzy A+B -- 'addMatrix'\n";
    cout << "[2] - Odejmowanie macierzy A-B -- 'subtractMatrix'\n";
    cout << "[3] - Mnozenie macierzy AxB -- 'multiplyMatrix'\n";
    cout << "[4] - Mnozenie macierzy przez skalar Axs -- 'multiplyByScalar'\n";
    cout << "[5] - Transponowanie macierzy -- 'transpozeMatrix'\n";
    cout << "[6] - Potegowanie macierzy  -- 'powerMatrix'\n";
    cout << "[7] - Wyznacznik macierzy  -- 'determinantMatrix'\n";
    cout << "[8] - Czy macierz jest diagonalna? -- 'matrixIsDiagonal'\n";
    cout << "[9] - Zamiana dwoch wartosci miejscami -- 'swap'\n";
    cout << "[10] - Sortowanie podanego wiersz -- 'sortRow'\n";
    cout << "[11] - Sortowanie wszystkich wierszy -- 'sortRowInMatrix'\n";
    cout << "Przyklad jak wprowadzac dane do macierzy o rozmiarze 2x3:\n";
    cout << "Wprowadz rozmiar macierzy ktore chcesz dodac (wiersze _ kolumny):\n";
    cout << "2 3\n";
    cout << "Wprowadz dane do macierzy\n";
    cout << "1 2 3\n";
    cout << "4 5 6\n";



int **createMatrix(int wiersze, int kolumny) { //tworzenie macierzy
    int **Macierz = new int *[wiersze];

    for (int i = 0; i < wiersze; i++) {
        Macierz[i] = new int[kolumny];
    }

    return Macierz;
}

void fillMatrix(int **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++)
            if (!(cin >> Macierz[i][j])) {
                cout << "Wrong Input\n";

            }
    }
}

void displayMatrix(int **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            cout << " " << Macierz[i][j] << " ";
        }

        cout << "\n";
    }
}

void delet(int **Macierz, int wiersze) {
    for (int i = 0; i < wiersze; i++)
        delete[] Macierz[i];

    delete[] Macierz;
}


int **addMatrix(int **MacierzA, int **MacierzB, int wiersze, int kolumny) {

    int **MacierzW = createMatrix(wiersze, kolumny); //MacierzW - macierz w której jest wynik

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            MacierzW[i][j] = MacierzA[i][j] + MacierzB[i][j];
        }
    }
    return MacierzW;
}

int **subtractMatrix(int **MacierzA, int **MacierzB, int kolumny, int wiersze) {

    int **MacierzW = createMatrix(wiersze, kolumny);

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            MacierzW[i][j] = MacierzA[i][j] - MacierzB[i][j];
        }
    }
    return MacierzW;
}

int **multiplyMatrix(int **MacierzA, int **MacierzB, int wierszeA, int kolumnyA, int kolumnyB) {

    int **MacierzW = createMatrix(wierszeA, kolumnyB);
    int wynik = 0;

    for (int i = 0; i < wierszeA; ++i) {
        for (int j = 0; j < kolumnyB; ++j) {
            for (int k = 0; k < kolumnyA; ++k) {
                wynik += MacierzA[i][k] * MacierzB[k][j];
                MacierzW[i][j] = wynik;
            }
        }
    }
    return MacierzW;
}

int **multiplyByScalar(int **MacierzA, int wiersze, int kolumny, int skalar) {

    int **MacierzW = createMatrix(wiersze, kolumny);

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            MacierzW[i][j] = MacierzA[i][j] * skalar;
        }
    }
    return MacierzW;
}

int **transpozeMatrix(int **Macierz, int wiersze, int kolumny) {

    int **MacierzW = createMatrix(kolumny, wiersze);

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            MacierzW[j][i] = Macierz[i][j];
        }
    }

    return MacierzW;
}

int **powerMatrix(int **Macierz, int wiersze, int kolumny, int potega) {
    int **MacierzW = createMatrix(wiersze, wiersze);

    if (potega == 1) {
        return Macierz;
    } else if (potega == 0) {
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; i < kolumny; ++j) {
                if (i == j) {
                    MacierzW[i][j] = 1;
                }
            }
        }
    } else
        return multiplyMatrix(Macierz, powerMatrix(Macierz, wiersze, kolumny, potega-1), wiersze, kolumny, kolumny);
}

int determinantMatrix(int **Macierz, int wiersze) {
    int **MacierzP = createMatrix(wiersze, wiersze);
    int wynik = 0, p, h, k, i, j;

    if (wiersze == 1)
        return Macierz[0][0]; // wyznacznik 1x1
    else if (wiersze == 2) {
        return (Macierz[0][0] * Macierz[1][1] - Macierz[0][1] * Macierz[1][0]); // wyznacznik 2x2
    } else {
        for (p = 0; p < wiersze; p++) {
            h = 0;
            k = 0;

            for (i = 1; i < wiersze; i++) {
                for (j = 0; j < wiersze; j++) {
                    if (j == p)
                        continue;

                    MacierzP[h][k] = Macierz[i][j];
                    k++;

                    if (k == wiersze - 1) {
                        h++;
                        k = 0;
                    }
                }
            }

            wynik = wynik + Macierz[0][p] * pow(-1, p) * determinantMatrix(MacierzP, wiersze - 1);
        }
        delet(MacierzP, wiersze);
        return wynik;
    }
}

bool matrixIsDiagonal(int **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (j != i && Macierz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void swap(int &a, int &b) {
    int pomocnicza = a;
    a = b;
    b = pomocnicza;
}

void sortRow(int *Macierz, int kolumny) {
    for (int j = 0; j < kolumny - 1; ++j) {
        for (int i = 0; i < kolumny - 1; ++i) {
            if (Macierz[i] > Macierz[i + 1]) {
                swap(Macierz[i], Macierz[i + 1]);

            }
        }
    }
}

void sortRowsInMatrix(int **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i)
        sortRow(Macierz[i], kolumny);
}





//double








double **create_dMatrix(int wiersze, int kolumny) { //tworzenie macierzy
    double **Macierz = new double *[wiersze];

    for (int i = 0; i < wiersze; i++) {
        Macierz[i] = new double[kolumny];
    }

    return Macierz;
}

void fillMatrix(double **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++)
            if (!(cin >> Macierz[i][j])) {
                cout << "Wrong Input\n";

            }
    }
}

void displayMatrix(double **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            cout << " " << Macierz[i][j] << " ";
        }

        cout << "\n";
    }
}

void delet(double **Macierz, int wiersze) {
    for (int i = 0; i < wiersze; i++)
        delete[] Macierz[i];

    delete[] Macierz;
}


double **addMatrix(double **MacierzA, double **MacierzB, int wiersze, int kolumny) {

    double **MacierzW = create_dMatrix(wiersze, kolumny); //MacierzW - macierz w której jest wynik

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            MacierzW[i][j] = MacierzA[i][j] + MacierzB[i][j];
        }
    }
    return MacierzW;
}

double **subtractMatrix(double **MacierzA, double **MacierzB, int kolumny, int wiersze) {

    double **MacierzW = create_dMatrix(wiersze, kolumny);

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            MacierzW[i][j] = MacierzA[i][j] - MacierzB[i][j];
        }
    }
    return MacierzW;
}

double **multiplyMatrix(double **MacierzA, double **MacierzB, int wiersze, int kolumnyA, int kolumnyB) {

    double **MacierzW = create_dMatrix(wiersze, kolumnyB);

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumnyB; ++j) {
            for (int k = 0; k < kolumnyA; ++k)
                MacierzW[i][j] += MacierzA[i][k] * MacierzB[k][j];
        }
    }
    return MacierzW;
}

double **multiplyByScalar(double **MacierzA, int wiersze, int kolumny, double skalar) {

    double **MacierzW = create_dMatrix(wiersze, kolumny);

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            MacierzW[i][j] = MacierzA[i][j] * skalar;
        }
    }
    return MacierzW;
}

double **transpozeMatrix(double **Macierz, int wiersze, int kolumny) {

    double **MacierzW = create_dMatrix(kolumny, wiersze);

    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            MacierzW[j][i] = Macierz[i][j];
        }
    }

    return MacierzW;
}

double **powerMatrix(double **Macierz, int wiersze, int kolumny, int potega) {

    double **MacierzW = create_dMatrix(wiersze, wiersze);

    if (potega == 1) {
        return Macierz;
    } else if (potega == 0) {
        for (int i = 0; i < wiersze; ++i) {
            for (int j = 0; i < kolumny; ++j) {
                if (i == j) {
                    MacierzW[i][j] = 1;
                }
            }
        }
    } else
        return multiplyMatrix(Macierz, powerMatrix(Macierz, wiersze, kolumny, potega), wiersze, kolumny, kolumny);
}

double determinantMatrix(double **Macierz, int wiersze) {
    double **MacierzP = create_dMatrix(wiersze, wiersze);
    double wynik = 0;
    int p, h, k, i, j;

    if (wiersze == 1)
        return Macierz[0][0]; // wyznacznik 1x1
    else if (wiersze == 2) {
        return (Macierz[0][0] * Macierz[1][1] - Macierz[0][1] * Macierz[1][0]); // wyznacznik 2x2
    } else {
        for (p = 0; p < wiersze; p++) {
            h = 0;
            k = 0;

            for (i = 1; i < wiersze; i++) {
                for (j = 0; j < wiersze; j++) {
                    if (j == p)
                        continue;

                    MacierzP[h][k] = Macierz[i][j];
                    k++;

                    if (k == wiersze - 1) {
                        h++;
                        k = 0;
                    }
                }
            }

            wynik = wynik + Macierz[0][p] * pow(-1, p) * determinantMatrix(MacierzP, wiersze - 1);
        }
        delet(MacierzP, wiersze);
        return wynik;
    }
}

bool matrixIsDiagonal(double **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (j != i && Macierz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void swap(double &a, double &b) {
    double pomocnicza = a;
    a = b;
    b = pomocnicza;
}

void sortRow(double *Macierz, int kolumny) {
    for (int j = 0; j < kolumny - 1; ++j) {
        for (int i = 0; i < kolumny - 1; ++i) {
            if (Macierz[i] > Macierz[i + 1]) {
                swap(Macierz[i], Macierz[i + 1]);

            }
        }
    }
}

void sortRowsInMatrix(double **Macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i)
        sortRow(Macierz[i], kolumny);
}
