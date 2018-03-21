//
// Created by Wojtek on 20/03/2018.
//
#include <unordered_map>
#include <iostream>
#include <cstdlib>
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

    wektor1.read(10);
    std::cout << std::endl;

    wektor1.change(8, 4.324);

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
    wektor3 = wektor2 * wektor1 * wektor2;

    cout << 7 << endl;
    wektor3.show();
    cout << 8 << endl;
    std::cout << std::endl;

    wektor3.change(1, 10);
    wektor3.read(1);
    wektor3.read(2);

    wektor3.show();
    std::cout << std::endl;

    SparseVector k1;
    k1.svector[0]=1;
    k1.svector[1]=2;
    k1.svector[2]=3;
    k1.svector[3]=4;

    SparseVector k2;
    k2.svector[0]=1;
    k2.svector[1]=2;
    k2.svector[2]=3;
    k2.svector[4]=4;

    cout << (k1!=k1) << endl;
    std::cout << std::endl;

    cout<<k1<<k2<<wektor1;



    return 0;
}

