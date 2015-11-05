#include <iostream>

#include "macros.h"



int main()
{
    std::cout << MIN(1,2) << std::endl;
    std::cout << MAX(1,2) << std::endl;
    std::cout << CLAMP(50, 0, 100) << std::endl;
    std::cout << CLAMP(-50, 0, 100) << std::endl;
    std::cout << CLAMP(150, 0, 100) << std::endl;
	return 0;
}
