#include <iostream>

//Section C/ Functions2/ Exercise 3
#include "functions.h"
int main() {
    float x,y,z, res1;
    int m,n, res2;
    float res3;
    x = 6.5;
    y = 2;
    z=2;
    n =  6;
    m = 4;
    res1 = myDivide(x,y);
    std::cout << res1<< std::endl;
    res2 = myDivide(n,m);
    std::cout << res2<< std::endl;
    res3 = myDivide(x,y,z);
    std::cout << res3<< std::endl;
}