#include <iostream>
#include <cmath>
using namespace std;

//Section B/HW/Exercise5
int main() {
    float u,s,t, ang, ht,x,y;
    int a = -10;
    //cout << "Enter initial velocity of ball: \n";
    cin >> u;
    //cout << "Enter the angle in radian:  \n ";
    cin >> ang;
    //cout << "Enter initial height: \n";
    cin >> ht;
    x = u*cos(ang);
    y = u*sin(ang);
    cout << x << endl <<y<<endl;
    t = float(-y)/a;
    s = y*t + 0.5*a*t*t;
    s = s + ht;
    cout << t << endl;
    cout << s << endl;
}