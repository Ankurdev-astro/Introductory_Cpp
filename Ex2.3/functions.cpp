//
// Created by ap16032 on 05/02/2018.
//

#include "functions.h"
#include "Window.h"

void makePolygon(SPA::Window & window, int sides, int length, int x, int y)     //function definition
    {
        float r, theta, n, rad, len;
        n = sides;
        len = length;
        theta = float((n-2)*180)/n;  //calculation interior angles of polygon in degrees
        rad = (theta*M_PI)/180;         // converting into radians
        r = len/(2*sin(M_PI/n));
        //calculating (x,y) position of top-left vertex with respect to centre point
        x = x - r*cos(rad/2);
        y = y - r*sin(rad/2);
        window.startNewLine(x,y);
        window.penSetAngle(0);

        for (int i=0;i<n;i++)   //loop to make n sides of polygon
        {
            window.penForward(len);
            window.penRotateDegrees(180-theta);
        }

        window.stopCurrentLine();
        window.display();



    }
