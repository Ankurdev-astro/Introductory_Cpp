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

	Shape * shape = new Shape(250,250,0); //creates new Shape object rotating about (250,250)
    Shape * shape2 = new Shape(250,250,0); //creates new Shape object rotating about (250,250)
	Shape * shape3 = new Shape(250,250,0); //creates new Shape object rotating about (250,250)
	shape->setRotationSpeed(2); // initial rotation speed in degrees
    shape2->setRotationSpeed(4); //set initial rotation to 4
	shape3->setRotationSpeed(-4); //set initial rotation to -4
	// make a new line
	Line * line = new Line();
    Line * line2 = new Line();
	Line * line3 = new Line();
	// allowed colours are specified in the enum in Colours.hpp
	line->setColor(getColor(BLACK));  // Set line to Black
    line2->setColor(getColor(RED));  //Set line2 to Red
	line3->setColor(getColor(BLUE)); //Set line 3 to Blue
	// add a point to the line
	// these points are all relative to the centre of the Shape

    //shape  = Black square
    // Added these points to make square of length 200 centred on and rotating around (250,250)
	line->addPoint(Point(-100,-100));
	line->addPoint(Point(100,-100));
	line->addPoint(Point(100,100));
	line->addPoint(Point(-100,100));
	line->addPoint(Point(-100,-100));

    //shape 2 = Red triangle
    // Added these point to make a triangle
    // side length 50 initially centred on (150,150) and rotating around (250,250)
    line2->addPoint(Point(-125,-100+(25.0/tan(M_PI/3))));
    line2->addPoint(Point(-75, -100+(25.0/tan(M_PI/3))));
    line2->addPoint(Point(-100,-100-(sqrt(50*50-25*25)-(25.0/tan(M_PI/3)))));
	line2->addPoint(Point(-125,-100+(25.0/tan(M_PI/3))));

	//shape 3 = Blue triangle
    // side length 50 initially centred on (350,350) and rotating around (250,250)
	line3->addPoint(Point(75,100+(25.0/tan(M_PI/3))));
	line3->addPoint(Point(125, 100+(25.0/tan(M_PI/3))));
	line3->addPoint(Point(100,100-(sqrt(50*50-25*25)-(25.0/tan(M_PI/3)))));
	line3->addPoint(Point(75,100+(25.0/tan(M_PI/3))));


	// add these lines to the shape
	shape->addLine(line);
    shape2->addLine(line2);
	shape3->addLine(line3);
	// add the shapes to the window
	window.addShape(shape);
    window.addShape(shape2);
	window.addShape(shape3);

	// display the window
	window.show(argc,argv);
	// run the FLTK event loop - this allows you to move the window around etc
	// and ultimately set up click events.
	// program will end when you close the window
	return Fl::run();
}


