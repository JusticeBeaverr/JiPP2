//
// Created by fixu2 on 17.10.2021.
//

#include <iostream>
#include "../include/calc.h"
using namespace std;

int main(int argc, char* argv[])
{
    int wybor = sprawdzInput(argc, argv);

    Calculate(wybor, argv);

    return(0);
}