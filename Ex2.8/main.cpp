
// Section C/ Worksheet 2/ HW/ Exercise 8

#include "Window.h"
#include "Colours.h"
#include <cmath>
#include "Line.h"
using namespace SPA;


int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test",24);
	Fl::visual(FL_DOUBLE | FL_INDEX);

	Shape * shape = new Shape(250,250,0);
    Shape * shape2 = new Shape(250,250,45); //initial angle 45 degrees
	shape->setRotationSpeed(2); // initial rotation speed in degrees
    shape2->setRotationSpeed(-2); // sets initial rotation speed of second shape to -2
	// make a new line
	Line * line = new Line();
    Line * line2 = new Line(); //creates another new line
	// allowed colours are specified in the enum in Colours.hpp
	line->setColor(getColor(BLACK)); //makes line1 Black
    line2->setColor(getColor(RED));  //makes line2 Red
	// add a point to the line
	// these points are all relative to the centre of the Shape

    //added these points to make a square with length 200 centered at (0,0) relative to centre of the Shape
	line->addPoint(Point(-100,-100));
	line->addPoint(Point(100,-100));
	line->addPoint(Point(100,100));
	line->addPoint(Point(-100,100));
	line->addPoint(Point(-100,-100));

    //added these points to make a square with length 100 centered at (50,50) relative to centre of the Shape
    line2-> addPoint(Point(0,-50));
    line2-> addPoint(Point(100,-50));
    line2-> addPoint(Point(100,50));
    line2-> addPoint(Point(0,50));
    line2-> addPoint(Point(0,-50));

	// add these lines to the shape
	shape->addLine(line);
    shape2->addLine(line2);
	// add the shapes to the window
	window.addShape(shape);
    window.addShape(shape2);
	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


