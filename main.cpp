// PLIK TESTOWY BIBLIOTEKI OBSLUGUJACEJ WEKTORY ZADKIE
//
// Created by Wojtek on 20/03/2018.
//

#include <unordered_map>
#include <iostream>
#include <cstdlib>
#include "library.h"

using namespace std;

int main() {

    cout << "Inicjalizacja wektora1 [0 : 3.45, 1 : 8.66, 2 : 5.22, 28 : 6]" << endl;
    SparseVector wektor1;
    wektor1.svector[0] = 3.45;
    wektor1.svector[1] = 8.66;
    wektor1.svector[2] = 5.22;
    wektor1.svector[28] = 6;

    cout << "Wypisanie wektora1 za pomoca cout << (wypisuje [pozycje : wartosci], reszta pozycji to domyslnie zera): " << endl;
    cout << wektor1;
    cout << endl;

    cout << "Wypisanie wartosci na 10 pozycji za pomoca funkcji read: " << endl;
    wektor1.read(10);
    cout << endl;

    cout << "Zmiana wartosci na 8 pozycji na wartosc 4.324 za pomoca funkcji change: " << endl;
    wektor1.change(8, 4.324);

    cout << "Ponowne wypisanie wektora1: " << endl;
    cout << wektor1;
    cout << endl;

    cout << "Inicjalizacja wektora2 [0 : 1.45, 1 : 66, 2 : 5.2, 29 : 3]" << endl;
    SparseVector wektor2;
    wektor2.svector[0] = 1.45;
    wektor2.svector[1] = 66;
    wektor2.svector[2] = 5.2;
    wektor2.svector[29] = 3;

    cout << "Wypisanie wektora2 za pomoca cout << (wypisuje [pozycje : wartosci], reszta pozycji to domyslnie zera): " << endl;
    cout<<wektor2;
    cout << endl;

    cout << "Deklaracja pustego wektora3 " << endl;
    SparseVector wektor3;
    cout << "Obliczenie dzialania wketor3 = wektor2 * wektor1 * wektor2" << endl;
    wektor3 = wektor2 * wektor1 * wektor2;

    cout << "Operator *= dziala podobnie, zamieniany jest obiekt pomocniczy na obiekt this" << endl;

    cout << "Wektor3: " << endl;
    cout << wektor3;
    cout << endl;

    cout << "Obliczenie dzialania wketor3 += wektor1" << endl;
    wektor3 += wektor1;
    cout << endl;

    cout << "Operator + dziala podobnie, zamieniany jest obiekt this na obiekt pomocniczy ktory jest zwracany returnem" << endl;

    cout << "Wektor3: " << endl;
    cout << wektor3;
    cout << endl;

    cout << "Obliczenie dzialania wketor3 -= wektor1" << endl;
    wektor3 -= wektor1;
    cout << endl;

    cout << "Operator - dziala podobnie, zamieniany jest obiekt this na obiekt pomocniczy ktory jest zwracany returnem" << endl;

    cout << "Wektor3: " << endl;
    cout << wektor3;
    cout << endl;

    cout << "Inicjalizacja wektora k1 [0 : 1, 1 : 2, 2 : 3, 3 : 4]" << endl;
    SparseVector k1;
    k1.svector[0]=1;
    k1.svector[1]=2;
    k1.svector[2]=3;
    k1.svector[3]=4;

    cout << "Inicjalizacja wektora k2 [0 : 1, 1 : 2, 2 : 3, 4 : 4]" << endl;
    SparseVector k2;
    k2.svector[0]=1;
    k2.svector[1]=2;
    k2.svector[2]=3;
    k2.svector[4]=4;

    cout << "Czy wektory k1 i k2 sa rozne (operator !=)?: " << endl;
    cout << (k1!=k2) << endl;
    cout << endl;

    cout << "Czy wektory k1 i k2 sa rowne (operator ==)?: " << endl;
    cout << (k1==k2) << endl;
    cout << endl;

    cout << "Wypisanie wektorow, endl w jednej instrukcji (cout<<k1<<endl<<k2<<...): " << endl;
    cout<<k1<<endl<<k2<<endl<<wektor1<<endl;

    cout << "Inicjalizacja nowego wektora, wczytanie go za pomoca cin >> " << endl << "(nalezy kolejno wpisywac pozycja (int) zatwierdzic enterem, wartosc (double), zatwierdzic enterem az do wpisania znaku [niecyfry]): " << endl;
    SparseVector wczytaj;
    cin >> wczytaj;
    cout << endl;

    cout << "Wypisanie wczytanego wektora" << endl;
    cout << wczytaj;

    return 0;
}

