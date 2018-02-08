#include "Window.h"
using namespace std;

// Section C/ Worksheet 1/HW/ Exercise 2

float rad(float deg)
{
    float r = (deg*M_PI)/180;
    return r;
}

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");
    int nSides;
    float sideLength;
    float n,theta,r,x,y;
    cout << "Enter the number of sides of shape: \n ";
    do
        cin >> nSides;
    while(nSides<=2);
    cout << "Enter the side length: \n ";
    do
        cin >> sideLength;
    while(sideLength<=0);
    n = nSides;
    theta = float((n-2)*180)/n;
    r = sideLength/(2*sin(M_PI/n));
    x = 250 - r*cos(rad(theta/2));
    y = 250 - r*sin(rad(theta/2));
    window.startNewLine(x,y);
    window.penSetAngle(0);

    for (int i=0;i<n;i++)
    {
        window.penForward(sideLength);
        window.penRotateDegrees(180-theta);
    }

    window.stopCurrentLine();


	// display the window
	window.display();
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


