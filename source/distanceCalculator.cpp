#include <math.h>

#include "distanceCalculator.h"
#include "macros.h"



double distanceCalculator(unsigned short int aDimensions, Coord aCoord1, Coord aCoord2)
{
    switch(aDimensions)
    {
        case 1:
            return ABS(aCoord1.myPosX - aCoord2.myPosX);

        case 2:
           return sqrt(ABS((pow((aCoord1.myPosX - aCoord2.myPosX), 2) + pow((aCoord1.myPosY - aCoord2.myPosY), 2))));

        case 3:
            return 0;

        default:
            return -1;
    }
}
