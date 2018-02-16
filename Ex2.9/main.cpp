// Section C/ Worksheet 2/ HW/ Exercise 9


#include "Window.h"
#include "Colours.h"
#define _USE_MATH_DEFINES  // for pi and exp.
#include <cmath>
#include "Line.h"
using namespace SPA;


int main(int argc, char * argv[]) {
// create a new window of size 500 x 500 pixels
// the top left corner of the window is (0,0)
	SPA::Window window(500,500,"My Test",24);
	Fl::visual(FL_DOUBLE | FL_INDEX);

	// Add code here to draw things
	Shape * shape = new Shape(250,250,0);
    Shape * shape2 = new Shape(250,250,0);
	Shape * shape3 = new Shape(250,250,0);
	shape->setRotationSpeed(2); // initial rotation speed in degrees
    shape2->setRotationSpeed(4);
	shape3->setRotationSpeed(-4);
	// make a new line
	Line * line = new Line();
    Line * line2 = new Line();
	Line * line3 = new Line();
	// allowed colours are specified in the enum in Colours.hpp
	line->setColor(getColor(BLACK));
    line2->setColor(getColor(RED));
	line3->setColor(getColor(BLUE));
	// add a point to the line
	// these points are all relative to the centre of the Shape
	line->addPoint(Point(-100,-100));
	line->addPoint(Point(100,-100));
	line->addPoint(Point(100,100));
	line->addPoint(Point(-100,100));
	line->addPoint(Point(-100,-100));

    //shape 2
    line2->addPoint(Point(-125,-100+(25.0/tan(M_PI/3))));
    line2->addPoint(Point(-75, -100+(25.0/tan(M_PI/3))));
    line2->addPoint(Point(-100,-100-(sqrt(50*50-25*25)-(25.0/tan(M_PI/3)))));
	line2->addPoint(Point(-125,-100+(25.0/tan(M_PI/3))));

	//shape 3
	line3->addPoint(Point(75,100+(25.0/tan(M_PI/3))));
	line3->addPoint(Point(125, 100+(25.0/tan(M_PI/3))));
	line3->addPoint(Point(100,100-(sqrt(50*50-25*25)-(25.0/tan(M_PI/3)))));
	line3->addPoint(Point(75,100+(25.0/tan(M_PI/3))));


	// add this line to the shape
	shape->addLine(line);
    shape2->addLine(line2);
	shape3->addLine(line3);
	// add the shape to the window
	window.addShape(shape);
    window.addShape(shape2);
	window.addShape(shape3);
	// notice the use of . notation for the window
	// and contrast with the use of -> notation for the shape and line

	// add your code here!


	////////
	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


