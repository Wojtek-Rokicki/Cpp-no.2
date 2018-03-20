#include "library.h"

#include <iostream>

SparseVector::SparseVector(){

}

//Przypisanie wartosci z danego obiektu na rzecz obiektu ktorego zostal wywolany operator
void SparseVector::operator=(const SparseVector &v1){
    for(auto& x: v1.svector){
        this->svector.insert(x);
    }
}

//Jesli w wektorze, na rzecz ktorego jest wywolywany operator, nie ma na danej pozycji wartosci to dodaj pare,
//w przeciwnym wypadku dodaj wartosci
SparseVector SparseVector::operator+(const SparseVector &v1){
    SparseVector sum;
    sum=*this;
    for(auto& x: v1.svector){
        std::unordered_map<int, double>::iterator y=sum.svector.find(x.first);
        if(sum.svector.end() == y){
            sum.svector.insert(x);
        }else{
            std::pair <int, double> p  (x.first,sum.svector.at(x.first)+x.second);
            sum.svector.insert(p);
        }
    }
}

void SparseVector::operator+=(const SparseVector &v1){

}

SparseVector SparseVector::operator-(const SparseVector &v1){
    SparseVector sum;
    sum=*this;
    for(auto& x: v1.svector){
        std::unordered_map<int, double>::const_iterator y=sum.svector.find(x.first);
        std::unordered_map<int, double>::const_iterator z=sum.svector.end();
        if(y==z){
            std::pair <int, double> p  (x.first,-x.second);
            sum.svector.insert(p);
        }else{
            std::pair <int, double> p  (x.first,sum.svector.at(x.first)-x.second);
            sum.svector.insert(p);
        }
    }
}

void SparseVector::operator-=(const SparseVector &v1){

}

SparseVector SparseVector::operator*(const SparseVector &v1){

}

void SparseVector::operator*=(const SparseVector &v1){

}

void SparseVector::show(){
    for(auto& x: this->svector){
        std::cout<<x.first<<" : "<<x.second<<std::endl;
    }
}