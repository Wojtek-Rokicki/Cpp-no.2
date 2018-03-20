#include "library.h"

#include <iostream>

SparseVector::SparseVector(){

}

//Przypisanie wartosci z danego obiektu na rzecz obiektu ktorego zostal wywolany operator
void operator=(const SparseVector &v1){
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
        std::unordered_map::const_iterator y=x.first;
        if(sum.svector.find(y)==sum.svector.end()){
            sum.svector.insert(x);
        }else{
            sum.svector.insert(sum.svector.at(x.first)+x.second);
        }
    }
}

void SparseVector::operator+=(const SparseVector &v1){

}

SparseVector SparseVector::operator-(const SparseVector &v1){
    SparseVector sum;
    sum=*this;
    for(auto& x: v1.svector){
        std::unordered_map::const_iterator y=x.first;
        if(sum.svector.find(y)==sum.svector.end()){
            sum.svector.insert(x);
            sum.svector.(x.first).second=-(v1.svector.(x.first).second);
        }else{
            sum.svector.insert(sum.svector.at(x.first)+x.second);
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
        std::cout<<this->svector.(x.first).first<<" : "<<this->svector.(x.first).second<<std::endl;
    }
}