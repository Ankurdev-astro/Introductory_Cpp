#include "Window.h"
using namespace std;

// Section C/ Worksheet 1/HW/ Exercise 2

float rad(float deg)            //function to convert degrees to radian
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
    do {
        cin >> nSides;  // user input stored in nSides variable
        if (cin.fail() == 1)  // if the fail flag of stream is raised, the program is terminated
            exit(0);
    }while(nSides<=2);  // checks if sides entered is greater than 2, else keep asking

    cout << "Enter the side length: \n ";
    do {
        cin >> sideLength;
        if (cin.fail() == 1)    // if the fail flag of stream is raised, the program is terminated
            exit(0);
    }while(sideLength<=0);  // checks if side length entered is greater than 0, else keep asking

    n = nSides;
    theta = float((n-2)*180)/n; // calculating interior angle of a polygon
    r = sideLength/(2*sin(M_PI/n));
    //calculation of top left vertex (x,y) position of polygon
    x = 250 - r*cos(rad(theta/2));
    y = 250 - r*sin(rad(theta/2));
    window.startNewLine(x,y);
    window.penSetAngle(0);

    for (int i=0;i<n;i++)   //loop to make n sides of polygon
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


