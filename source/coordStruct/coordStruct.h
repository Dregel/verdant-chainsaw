#pragma once



typedef struct Coord
{
    Coord();
    Coord(double aPosX, double aPosY);
    Coord(double aPosX, double aPosY, double aPosZ);

    double myPosX;
    double myPosY;
    double myPosZ;
} Coord;
