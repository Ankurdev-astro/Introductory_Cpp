//
// Created by ap16032 on 05/02/2018.
//

#include "functions.h"
#include "Window.h"

void makeInscribedPolygon (SPA::Window & window, int sides, float radius, int x, int y)
    {
        float r, theta, n, rad, len;
        n = sides;
        r = radius;
        len = r*(2*sin(M_PI/n));
        theta = float((n-2)*180)/n;
        rad = (theta*M_PI)/180;
        x = x - r*cos(rad/2);
        y = y - r*sin(rad/2);
        window.startNewLine(x,y);
        window.penSetAngle(0);

        for (int i=0;i<n;i++)
        {
            window.penForward(len);
            window.penRotateDegrees(180-theta);
        }

        window.stopCurrentLine();
        window.display();

    }
