#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
// 4_Exercises-SectionA_2/Exercise 6

int main() {
    int x= 3, y =4, z =5;
    float r = sqrt(x*x + y*y);
    cout << "x= 3, y =4, z =5";
    cout << "z*(x+y) = " << z*(x+y)<< endl;
    cout << "4.pi.r^2 = " << 4*M_PI*r*r << endl;
    cout << "sqrt(abs(x*x +y*y)) = " <<  sqrt(abs(x*x +y*y)) << endl;
    cout << " cos(30deg) = " << cos(30*M_PI/float(180)) << endl;
    cout << "atan(-x/y) = " << atan2((-x),float(y)) << endl; //gives answer in radians
    cout << "exp(y/x^2) = " <<  pow(M_E,(float(y)/(x*x))) << endl;

}