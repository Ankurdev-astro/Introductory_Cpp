/*
 * main.cpp
 *
 *  Created on: 18 Dec 2014
 *      Author: apw253
 */

#include "Window.h"
#define _USE_MATH_DEFINES
#include <cmath>


float rad(float deg)
    {
        float r = (deg*M_PI)/180;
        return r;
    }

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

	// Add code here to draw things

	/*
	 * Here are some of the options
	 * window.startNewLine(float x, float y) start a new line from location (x,y)
	 * window.penSetAngle(float angle) to set the initial ang of the pen in degrees
	 * window.penRotateDegrees(float angle) rotate the pen clockwise in degrees
	 * window.penForward(float distance) move the pen forward
	 * window.stopLine() to stop the current line
*/

	// uncomment the following lines to see a working example of how to draw lines

    // for 2 lines
	window.startNewLine(250,0);
    window.penRotateDegrees(90);
    //window.penSetAngle(0);
	window.penForward(500);
	//window.penRotateDegrees(90);
	//window.penForward(250);
	window.stopCurrentLine();
    window.startNewLine(0,250);
    window.penSetAngle(0);
    window.penForward(500);
    window.stopCurrentLine();
// for triangle
    float x,y;
    x = (500-200.0)/2.0;
    y = 250 - 100/tan(rad(60));
    int i;
    window.startNewLine(x,y);
    for (i=0;i<3;i++)
        {
            window.penForward(200);
            window.penRotateDegrees(120);
        }
    window.stopCurrentLine();
// for heptagon
    float r, theta, n;
    n = 7;
    theta = float((n-2)*180)/n;
    r = 200/(2*sin(M_PI/n));
    x = 250 - r*cos(rad(theta/2));
    y = 250 - r*sin(rad(theta/2));
    window.startNewLine(x,y);
    window.penSetAngle(0);

   for (i=0;i<7;i++)
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


