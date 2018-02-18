#include "Window.h"
#define _USE_MATH_DEFINES
#include <cmath>

//Section C/ HW/Worksheet 1/ Ex 1

float rad(float deg)        // Defining function to convert degrees to radians
    {
        float r = (deg*M_PI)/180;
        return r;
    }

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

// for 2 lines
	window.startNewLine(250,0);    //defines start position of line 1
    window.penRotateDegrees(90);
    window.penForward(500);
	window.stopCurrentLine();
    window.startNewLine(0,250);     //defines start position of line 2
    window.penSetAngle(0);
    window.penForward(500);
    window.stopCurrentLine();
// for triangle
    float x,y;
    //calculating (x,y) position of top-left vertex of triangle
    x = (500-200.0)/2.0;
    y = 250 - 100/tan(rad(60));
    int i;
    window.startNewLine(x,y);
    for (i=0;i<3;i++)                  //loop to draw 3 sides of triangle
        {
            window.penForward(200);
            window.penRotateDegrees(120);
        }
    window.stopCurrentLine();

// for heptagon
    float r, theta, n;
    n = 7;  //heptagon has 7 sides
    theta = float((n-2)*180)/n;
    //calculating (x,y) position of top-left vertex of heptagon
    r = 200/(2*sin(M_PI/n));
    x = 250 - r*cos(rad(theta/2));
    y = 250 - r*sin(rad(theta/2));
    window.startNewLine(x,y);
    window.penSetAngle(0);

   for (i=0;i<7;i++)        //loop to draw 7 sides of heptagon
    {
        window.penForward(200);
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


