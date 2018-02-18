
//Section C/ HW/ Worksheet2/ Exercise 7

#include "Window.h"
#include "Colours.h"
#include "functions.h"
#include <fstream>
using namespace std;



int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test");
    int n;
    vector<float> xvec; //declares vector xvec
    vector<float> yvec; //declares vector yvec
    ifstream Input("G:/points3.dat"); //creates file object Input and opens the file from path
    while(Input.eof()==0)  //completes the loop if end of file flag is not raised
    {
        Input >> n;
        readPointsFromStream(n,Input,xvec,yvec); //calls function
        drawPoints(window,xvec,yvec);
        if(Input.eof()==1)  //checks if end of file flag is raised
            break;  //breaks loop if eof is set to 1
    }

    //For part B, printing first 5 pairs from file
    for(int j =0; j<n; j++ )
    {
        cout << xvec[j] << ", "<< yvec[j]<<endl; // Printing in x, y notation
    }


    Input.close(); //closes file
	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


