#include <iostream>
#include <cmath>

using namespace std;
// Section B/ Ex3

int main()
{
    float x,y;
    float ln;
    //cout << "Enter two numbers: \n";
    cin >> x;
    cin >> y;
    ln = log(1 + float(x)/y);
    cout << ln;
    return 0;

}
