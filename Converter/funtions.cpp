//
// Created by ap16032 on 09/02/2018.
//
#define _USE_MATH_DEFINES  // for pi and exp.
#include <cmath>
#include "funtions.h"

void myConverter(float &radians)
{
    radians = (180/M_PI)*radians;
}