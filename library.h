#ifndef PROJEKT_2_PROI_LIBRARY_H
#define PROJEKT_2_PROI_LIBRARY_H

#include <unordered_map>
#include <iostream>

class SparseVector{
  private:
    //std::unordered_map <int, double> svector;
  public:
    std::unordered_map <int, double> svector;
    SparseVector();
    void read(int key){
        std::cout<<key<<" : "<<this->svector[key]<<std::endl;
    }
    //void change(int key, double value);
    void operator=(const SparseVector &v1);
    SparseVector operator+(const SparseVector &v1);
    void operator+=(const SparseVector &v1);
    SparseVector operator-(const SparseVector &v1);
    void operator-=(const SparseVector &v1);
    SparseVector operator*(const SparseVector &v1);
    void operator*=(const SparseVector &v1);
    void show();
};

#endif