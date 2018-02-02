//
// Created by ap16032 on 02/02/2018.
//

#include "functions.h"
#include <iostream>
using namespace std;
void fizzBuzz(int number)
    {
        cout << number ;
        if (number%3 == 0)
            cout << " fizz";
        if (number%5 == 0)
            cout << " buzz";
        cout <<endl;

    }