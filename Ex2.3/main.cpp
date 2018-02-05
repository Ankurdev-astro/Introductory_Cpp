#include "Window.h"
#include "functions.h"

// Section C/ Worksheet 1/ HW/ Exercise 3

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");
    makePolygon(window,4,100,125,125);
    makePolygon(window,5,100,125,375);
    makePolygon(window,6,100,375,375);
    makePolygon(window,7,100,375,125);

	return Fl::run();
}


