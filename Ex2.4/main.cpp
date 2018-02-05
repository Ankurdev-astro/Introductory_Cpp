
#include "Window.h"
#include "functions.h"

// Section C/ Worksheet 1/ HW/ Exercise 4


int main(int argc, char * argv[]) {
// create a new window of size 600 x 600 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(600,600,"My Test");

	 for (int i=3; i<=7; i++)
        {
            makeInscribedPolygon(window,i,200,300,300);
        }

    makeInscribedPolygon(window,2*M_PI*200,200,300,300); // makes circle
	return Fl::run();
}


