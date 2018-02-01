#include <iostream>
#include "functions.h"

using namespace std;
// Section C/ Functions1/ Exercise 1

int main() {
    float x, y, z;
    cout << "Enter 2 numbers: \n";
    cin >> x >> y;
    z = add(x,y);
    cout << z;
}
