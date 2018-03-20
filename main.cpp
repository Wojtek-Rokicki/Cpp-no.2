//
// Created by Wojtek on 20/03/2018.
//
#include <iostream>
#include "library.h"

int main(){

    SparseVector wektor1;
    wektor1.svector[0]=3.45;
    wektor1.svector[1]=8.66;
    wektor1.svector[2]=5.22;
    wektor1.svector[29]=6;

    wektor1.show();

    SparseVector wektor2;
    wektor2.svector[0]=3.45;
    wektor2.svector[1]=8.66;
    wektor2.svector[2]=5.22;
    wektor2.svector[29]=6;

    wektor2.show();

    SparseVector wektor3;

    wektor3=wektor1+wektor2;

    wektor3.show();

    return 0;
}

