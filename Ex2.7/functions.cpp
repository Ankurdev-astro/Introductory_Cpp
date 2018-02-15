//
// Created by ap16032 on 2/15/2018.
//

#include "functions.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

void readPointsFromStream(int n, std::ifstream &f, std::vector<float> &xvec, std::vector<float> &yvec)
{
    //std::cout<<n;
    float x,y;
    while (f.eof()==0)
    {
        for (int i = 1; i <= n; i++)
        {
            f >> x >> y;
            xvec.push_back(x);
            yvec.push_back(y);
            if((f.eof()==1) || (f.bad()==1) || (f.fail()==1))
                break;
        }
        break;
    }

}

void drawPoints(SPA::Window &window, const std::vector<float> &xvec, const std::vector<float> &yvec)
{
    float x,y;
    int n = xvec.size();
    for(int j =0; j<n; j++ )
    {
        x = xvec[j];
        y = yvec[j];
        window.addPoint(x,y);
    }
    window.stopCurrentLine();
}
