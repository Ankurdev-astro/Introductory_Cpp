//
// Created by ap16032 on 2/15/2018.
//

#include "functions.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

//function definition with parameters n = number of numbers to input, non- constant reference to file object, non- constant references to vectors
void readPointsFromStream(int n, std::ifstream &f, std::vector<float> &xvec, std::vector<float> &yvec)
{
    std::cout<<n<<endl; // for part A
    float x,y;
    while (f.eof()==0)  //checks if end of file flag is raised
    {
        for (int i = 1; i <= n; i++) // loop for inputing numbers n number of times
        {
            f >> x >> y;
            xvec.push_back(x); //adding first number from pair from file to xvec vector
            yvec.push_back(y); //adding second number from pair from file to yvec vector
            if((f.eof()==1) || (f.bad()==1) || (f.fail()==1)) //breaks loop if any of end of file, bad stream or fail stream flags are raised
                break;
        }
        break;
    }

}

//for Part C
//function definition with parameters non -constant reference to window object, constant references to vectors
void drawPoints(SPA::Window &window, const std::vector<float> &xvec, const std::vector<float> &yvec)
{
    float x,y;
    int n = xvec.size(); // finds the size of the vector xvec
    for(int j =0; j<n; j++ ) //loops for n number of times through the vector
    {
        x = xvec[j]; //using [] method to access vector elements
        y = yvec[j];
        window.addPoint(x,y); //adds points for drawing
    }
    window.stopCurrentLine();
}
