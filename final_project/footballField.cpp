/*
Author: Alex Agudelo
Class: ECE 6122
Last date modified: 11/22/2019
Description: 
*/

#include "footballField.h"
#include <GL/glut.h>

// Define constexpr variables
constexpr float FootballField::lenFootballField;
constexpr float FootballField::widthFootballField;
constexpr unsigned int FootballField::numUAVs;

FootballField::FootballField()
{
    initializeUAVs();
}

void FootballField::drawField()
{
    glPushMatrix();
        glColor3f(0.0, 1.0, 0.0); // set drawing color to white
        glBegin(GL_QUADS);
        glVertex3f(0, 0, 0.0);
        glVertex3f(lenFootballField, 0, 0.0);
        glVertex3f(lenFootballField, widthFootballField, 0.0);
        glVertex3f(0, widthFootballField, 0.0);
        glEnd();
    glPopMatrix();
}

void FootballField::initializeUAVs()
{
    unsigned int counter = 0;
    unsigned int column = 0;
    for(auto &uav : uavs)
    {
        uav.location.x = yardToMeter(25*column + 10);
        uav.location.y = yardToMeter((counter%3)*widthFootballField/2);
        counter++;
        if (counter %3 == 0)
        {
            column++;
        }
    }

}

void FootballField::drawUAVS()
{
    for(const auto &uav : uavs)
    {
        uav.drawUAV();
    }
}
