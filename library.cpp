#include "library.h"
#include <iostream>
#include <unordered_map>
#include <cstdlib>
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
    for(auto& x: v1.svector){
        std::unordered_map<int,double>::const_iterator y = this->svector.find(x.first);
        if(y == this->svector.end()){
            this->svector.insert(x);
        }else{
            this->svector[x.first] = this->svector[x.first] + x.second;
        }
    }
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
    for(auto& x: v1.svector){
        std::unordered_map<int,double>::const_iterator y = this->svector.find(x.first);
        if(y == this->svector.end()){
            this->svector[x.first] = -x.second;
        }else{
            this->svector[x.first] = this->svector[x.first] - x.second;
        }
    }
}

SparseVector SparseVector::operator*(const SparseVector &v1){
    SparseVector product;
    product=*this;
    for(auto& x: v1.svector) {
        std::unordered_map<int, double>::const_iterator y = product.svector.find(x.first);
        if (y != product.svector.end()) {
            product.svector[x.first] = product.svector[x.first] * x.second;
        }
    }
    for(auto& x: product.svector) {
        std::unordered_map<int, double>::const_iterator y = v1.svector.find(x.first);
        if (y == v1.svector.end()) {
            product.svector.erase(product.svector.find(x.first));
        }
    }

    return product;
}

void SparseVector::operator*=(const SparseVector &v1){
    for(auto& x: v1.svector) {
        std::unordered_map<int, double>::const_iterator y = this->svector.find(x.first);
        if (y != this->svector.end()) {
            this->svector[x.first] = this->svector[x.first] * x.second;
        }
    }
    for(auto& x: this->svector) {
        std::unordered_map<int, double>::const_iterator y = v1.svector.find(x.first);
        if (y == v1.svector.end()) {
            this->svector.erase(this->svector.find(x.first));
        }
    }
}

bool SparseVector::operator==(const SparseVector &v1){
    if(this->svector.size()!=v1.svector.size())return false;
    for(auto& x: v1.svector){
        if(this->svector[x.first]!=x.second)return false;
    }
    return true;
}

bool SparseVector::operator!=(const SparseVector &v1){
    if(this->svector.size()!=v1.svector.size())return true;
    for(auto& x: v1.svector){
        if(this->svector[x.first]!=x.second)return true;
    }
    return false;
}

ostream & operator<<(ostream & os,const SparseVector & v1){
    for(auto& x: v1.svector) os<<x.first<<" : "<<x.second<<endl;
    return os;
}

ostream & operator>>(std::ostream & os, SparseVector & v1){
    
    return os;
}

void SparseVector::read(int key){
        std::cout<<key<<" : "<<this->svector[key]<<std::endl;
        if(this->svector[key]==0) this->svector.erase(this->svector.find(key));
}

void SparseVector::change(int key, double value){
        this->svector[key]=value;
}
    
/*void SparseVector::show(){
    for(auto& x: this->svector){
        std::cout<<x.first<<" : "<<x.second<<std::endl;
    }
}*/