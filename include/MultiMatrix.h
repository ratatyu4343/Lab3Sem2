#ifndef MULTIMATRIX_H
#define MULTIMATRIX_H
#include <vector>
#include <thread>
#include <iostream>

template <typename T>
class MultiMatrix
{
public:
    MultiMatrix(int, int);
    std::vector<T> operator [] (int);

private:
    int m, n;
    std::vector<std::vector<T>> matrix;
};

template <typename T>
MultiMatrix<T>::MultiMatrix(int m, int n)
{

}

template <typename T>
std::vector<T> MultiMatrix<T>::operator [] (int m)
{
    return matrix[m];
}

#endif // MULTIMATRIX_H
