#include <iostream>
#include "../include/vector.h"
//#include "vector.h"

using namespace std;


int main() {
    Vector v1(69,2137), v2(420,77);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);

}


