
# include <fstream>
#include "Window.h"
#include "Colours.h"
using namespace std;



int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");
  //  window.addpoint()
    ifstream Input("G:/points.dat");
    int done=1;
    float x,y;
    while (Input.eof()== 0)
    {
        Input >>x>>y;
        //cout <<x<<y<<endl;
        window.addPoint(x,y);

    }
    window.stopCurrentLine();
    // Add code here to draw things

	/*
	 * Here are some of the options
	 * window.startNewLine(float x, float y) start a new line from location (x,y)
	 * window.setAngle(float angle) to set the initial ang of the pen in degrees
	 * window.penRotateDegrees(float angle) rotate the pen in degrees
	 * window.penForward(float distance) move the pen forward
	 * window.stopCurrentLine() to stop the current line
	 * window.addPointfloat x, float y) add a point to the current line
	 * window.addPoint(Point p) add a point to the current line
	 * window.setLineColor(FL_Color c) set the colour for the next line
*/

	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


