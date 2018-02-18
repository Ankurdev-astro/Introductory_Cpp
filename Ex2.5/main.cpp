
# include <fstream>
#include "Window.h"
#include "Colours.h"
using namespace std;

//Section C/HW/Worksheet 2/ Ex 5

int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

    ifstream Input("G:/points.dat"); //opens file with file object Input
    float x,y;
    while (Input.eof()== 0) //loop condition to check if end of file flag is raised and set to 1
    {
        Input >>x>>y; //File objects inputs 2 numbers from file
        window.addPoint(x,y); //adds new point at position x,y and draws a line

    }
    window.stopCurrentLine(); //stops drawing
    Input.close(); //closes file
    // display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


