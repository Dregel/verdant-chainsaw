#include <iostream>

#include "macros.h"
#include "coordStruct/coordStruct.h"
#include "distanceCalculator.h"



int main()
{
    Coord a;
    Coord b(5, 10);

    std::cout << distanceCalculator(0, a, b) << std::endl;
    std::cout << distanceCalculator(1, a, b) << std::endl;
    std::cout << distanceCalculator(2, a, b) << std::endl;
    std::cout << distanceCalculator(3, a, b) << std::endl;
    std::cout << distanceCalculator(4, a, b) << std::endl;

    a.X = 10;
    a.Y = 5;

    std::cout << distanceCalculator(0, a, b) << std::endl;
    std::cout << distanceCalculator(1, a, b) << std::endl;
    std::cout << distanceCalculator(2, a, b) << std::endl;
    std::cout << distanceCalculator(3, a, b) << std::endl;
    std::cout << distanceCalculator(4, a, b) << std::endl;

	return 0;
}

