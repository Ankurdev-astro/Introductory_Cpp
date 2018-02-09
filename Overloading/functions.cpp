//
// Created by ap16032 on 09/02/2018.
//

#include <iostream>
#include "functions.h"
float myDivide(float a, float b)
{
    if(b!= 0)
        return float(a)/b;
    else
        return 0;
}

float myDivide(int i, int j)
{
    if(j!= 0)
    {
        std::cout << "I am an Integer \n";
        return i/j;
    }
    else
        return 0;
}

float myDivide(float a, float b, float c)
{
    if(b!= 0 && c!= 0)
        return float(a)/(b*c);
    else
        return 0;
}