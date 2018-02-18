//
// Created by ap16032 on 2/15/2018.
//

#ifndef EX2_7_FUNCTIONS_H
#define EX2_7_FUNCTIONS_H
#include <fstream>
#include <vector>
#include "Window.h"

void readPointsFromStream(int n, std::ifstream &f, std::vector<float> &xvec, std::vector<float> &yvec); //declares function readPointsFromStream
void drawPoints(SPA::Window &window, const std::vector<float> &xvec, const std::vector<float> &yvec); //declares function drawPoints
#endif //EX2_7_FUNCTIONS_H
