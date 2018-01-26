#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;
// Section B/ Ex4
int main()
{
    float r, theta, x, y;
    //cout << "Enter the value of hypotenuse r: \n";
    cin >> r;
    //cout << "Enter the angle in degrees: \n";
    cin >> theta;
    theta = (M_PI/180)*theta; // calculating angle in radians
    x = r*cos(theta);
    y = r*sin(theta);
    //cout << "The values of x and y are : \n";
    cout << x << endl << y << endl;
    return 0;
}
