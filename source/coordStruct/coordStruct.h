#pragma once



struct Coord
{
    Coord();
    Coord(double aPosX, double aPosY);
    Coord(double aPosX, double aPosY, double aPosZ);

    double X;
    double Y;
    double Z;
};
