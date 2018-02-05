//
// Created by ap16032 on 05/02/2018.
//

#include "functions.h"
#include "Window.h"

void makePolygon(SPA::Window & window, int sides, int length, int x, int y)
    {
        float r, theta, n, rad, len;
        n = sides;
        len = length;
        theta = float((n-2)*180)/n;
        rad = (theta*M_PI)/180;
        r = len/(2*sin(M_PI/n));
        x = x - r*cos(rad/2);
        y = y - r*sin(rad/2);
        window.startNewLine(x,y);
        window.penSetAngle(0);

        for (int i=0;i<len;i++)
        {
            window.penForward(len);
            window.penRotateDegrees(180-theta);
        }

        window.stopCurrentLine();
        window.display();



    }
