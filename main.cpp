#include <iostream>
#include "MultiMatrix.h"
using namespace std;

int main()
{
    MultiMatrix<int> m(10, 10);
    std::cout << m[1][0];
}
