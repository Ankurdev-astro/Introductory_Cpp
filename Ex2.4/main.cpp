
#include "Window.h"
//including header file
#include "functions.h"

// Section C/ Worksheet 1/ HW/ Exercise 4


int main(int argc, char * argv[]) {

// the top left corner of the window is (0,0)
	SPA::Window window(600,600,"My Test");  // create a new window of size 600 x 600 pixels

	 for (int i=3; i<=7; i++) // creates polygons of sides 4,5,6,7
        {
            makeInscribedPolygon(window,i,200,300,300);  // calls function
        }

    makeInscribedPolygon(window,2*M_PI*200,200,300,300); // makes circle with 2*pi*radius number of sides
	return Fl::run();
}


