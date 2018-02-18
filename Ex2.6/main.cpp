

#include "Window.h"
#include "Colours.h"
#include <fstream>
using namespace std;



int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");

	ifstream Input2("G:/points2.dat");  //opens file and creats file object Input2
    float x,y; //declaring float variables
    int npoints;
    while (Input2.eof()== 0)  //checks for end of file flag
    {
        Input2 >>npoints;  // inputs the first number in the file
        break;  // breaks loop after inputing a single number
    }

    while (Input2.eof()==0)
    {
        for (int i = 1; i <= npoints; i++)    // loop for inputing npoints number of pairs of x,y
        {
            Input2 >> x >> y;
            window.addPoint(x, y);
            if(Input2.eof()==1)      // checks if flag of end of file is raised
                break;    //breaks loop if flag is raised
        }
        break;
    }
    Input2.close();     //closes file
    window.stopCurrentLine();


    // display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


