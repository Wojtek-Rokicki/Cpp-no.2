#include "library.h"
#include <iostream>
#include <unordered_map>
using namespace std;

SparseVector::SparseVector() {

}

//Przypisanie wartosci z danego obiektu na rzecz obiektu ktorego zostal wywolany operator
void SparseVector::operator=(const SparseVector &v1){
    this->svector.clear();
    for(auto& x: v1.svector){
        this->svector[x.first] = x.second;
    }
}
//Jesli w wektorze, na rzecz ktorego jest wywolywany operator, nie ma na danej pozycji wartosci to dodaj pare,
//w przeciwnym wypadku dodaj wartosci
SparseVector SparseVector::operator+(const SparseVector &v1){
    SparseVector sum;
    sum=*this;

    for(auto& x: v1.svector){
        std::unordered_map<int,double>::const_iterator y = sum.svector.find(x.first);
        if(y == sum.svector.end()){
            sum.svector.insert(x);
        }else{
            sum.svector[x.first] = sum.svector[x.first] + x.second;
        }
    }
    return sum;
}

void SparseVector::operator+=(const SparseVector &v1){

}

SparseVector SparseVector::operator-(const SparseVector &v1){
    SparseVector sum;
    sum=*this;
    for(auto& x: v1.svector){
        std::unordered_map<int, double>::const_iterator y=sum.svector.find(x.first);
        if(y == sum.svector.end()){
            sum.svector[x.first] = -x.second;
        }else{
            sum.svector[x.first] = sum.svector[x.first] - x.second;
        }
    }
    return sum;
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