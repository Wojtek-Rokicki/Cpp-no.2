//
// Created by Wojtek on 20/03/2018.
//
#include <iostream>
#include "library.h"

using namespace std;

int main() {
    SparseVector wektor1;
    wektor1.svector[0] = 3.45;
    wektor1.svector[1] = 8.66;
    wektor1.svector[2] = 5.22;
    wektor1.svector[28] = 6;
    wektor1.show();

    std::cout << std::endl;
    SparseVector wektor2;
    wektor2.svector[0] = 1.45;
    wektor2.svector[1] = 66;
    wektor2.svector[2] = 5.2;
    wektor2.svector[29] = 3;
    wektor2.show();

    std::cout << std::endl;
    SparseVector wektor3;
    wektor3 = wektor2 - wektor1;
    cout << 7 << endl;
    wektor3.show();
    cout << 8 << endl;
    std::cout << std::endl;

    return 0;
}

