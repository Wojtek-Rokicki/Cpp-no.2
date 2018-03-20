#ifndef PROJEKT_2_PROI_LIBRARY_H
#define PROJEKT_2_PROI_LIBRARY_H

#include <unordered_map>

class SparseVector{
  private:
    //std::unordered_map <int, double> svector;
  public:
    std::unordered_map <int, double> svector;
    SparseVector();
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