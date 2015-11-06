#include "coordStruct.h"



Coord::Coord()
{
    X = 0;
    Y = 0;
    Z = 0;
}



Coord::Coord(double aPosX, double aPosY)
{
    X = aPosX;
    Y = aPosY;
    Z = 0;
}



Coord::Coord(double aPosX, double aPosY, double aPosZ)
{
    X = aPosX;
    Y = aPosY;
    Z = aPosZ;
}
