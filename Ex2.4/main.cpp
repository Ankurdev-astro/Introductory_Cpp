
#include "Window.h"
#include "functions.h"

// Section C/ Worksheet 1/ HW/ Exercise 4


int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(600,600,"My Test");

	 for (int i=3; i<=7; i++)
        {
            makeInscribedPolygon(window,i,200,300,300);
        }
	return Fl::run();
}


