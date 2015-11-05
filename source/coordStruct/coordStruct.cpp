#include "coordStruct.h"



Coord::Coord()
{
    myPosX = 0;
    myPosY = 0;
    myPosZ = 0;
}



Coord::Coord(double aPosX, double aPosY)
{
    myPosX = aPosX;
    myPosY = aPosY;
    myPosZ = 0;
}



Coord::Coord(double aPosX, double aPosY, double aPosZ)
{
    myPosX = aPosX;
    myPosY = aPosY;
    myPosZ = aPosZ;
}
