#ifndef PROJEKT1_LIB_H
#define PROJEKT1_LIB_H



#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <math.h>



void help();
int **createMatrix(int wiersze, int kolumny);
void fillMatrix(int **Macierz, int wiersze, int kolumny);
void displayMatrix(int **Macierz, int wiersze, int kolumny);
void delet(int **Macierz, int wiersze);
int** addMatrix(int** MacierzA, int** MacierzB, int kolumny, int wiersze);
int **subtractMatrix(int **MacierzA, int **MacierzB, int kolumny, int wiersze);
int **multiplyMatrix(int **MacierzA, int **MacierzB, int wiersze, int kolumnyA, int kolumnyB);
int **multiplyByScalar(int **MacierzA, int wiersze, int kolumny, int skalar);
int **transpozeMatrix(int **Macierz, int wiersze, int kolumny);
int **powerMatrix(int **Macierz, int wiersze, int kolumny, int potega);
int determinantMatrix(int **Macierz, int wiersze);
bool matrixIsDiagonal(int **Macierz, int wiersze, int kolumny);
void swap(int &a, int &b);
void sortRow(int *Macierz, int kolumny);
void sortRowsInMatrix(int **Macierz, int wiersze, int kolumny);

double **create_dMatrix(int wiersze, int kolumny);
void fillMatrix(double **Macierz, int wiersze, int kolumny);
void displayMatrix(double **Macierz, int wiersze, int kolumny);
void delet(double **Macierz, int wiersze);
double **addMatrix(double **MacierzA, double **MacierzB, int wiersze, int kolumny);
double **subtractMatrix(double **MacierzA, double **MacierzB, int kolumny, int wiersze);
double **multiplyMatrix(double **MacierzA, double **MacierzB, int wiersze, int kolumnyA, int kolumnyB);
double **multiplyByScalar(double **MacierzA, int wiersze, int kolumny, double skalar);
double **transpozeMatrix(double **Macierz, int wiersze, int kolumny);
double **powerMatrix(double **Macierz, int wiersze, int kolumny, int potega);
double determinantMatrix(double **Macierz, int wiersze);
bool matrixIsDiagonal(double **Macierz, int wiersze, int kolumny);
void swap(double &a, double &b);
void sortRow(double *Macierz, int kolumny);
void sortRowsInMatrix(double **Macierz, int wiersze, int kolumny);
