//
// Created by ap16032 on 05/02/2018.
//

#include "functions.h"
#include "Window.h"

//function definition with parameters : non-constant reference window, number of sides, radius, and position of center
void makeInscribedPolygon (SPA::Window & window, int sides, float radius, int x, int y)
    {
        float r, theta, n, rad, len;
        n = sides;
        r = radius;
        len = r*(2*sin(M_PI/n));        // calculating side length from given radius
        theta = float((n-2)*180)/n;  //calculating interior angle of polygon
        rad = (theta*M_PI)/180;         //coverting into radians
        // calculating position of (x,y) top-left vertex of polygon
        x = x - r*cos(rad/2);
        y = y - r*sin(rad/2);
        window.startNewLine(x,y); //starts new line
        window.penSetAngle(0);   //ensures top line is horizontal

        for (int i=0;i<n;i++)   //makes polygon with n sides
        {
            window.penForward(len);
            window.penRotateDegrees(180-theta);
        }

        window.stopCurrentLine();  //stops drawing lines
        window.display();

    }
