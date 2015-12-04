#include <iostream>

#include "macros.h"
#include "stack/stack.h"



template class stack<float, 10>;


int main()
{
    stack<uint32_t, 10> a;

    for(uint32_t i = 0; i < 10; ++i)
    {
        std::cout << a.GetCapacity() << "\t" << a.GetSize() << std::endl;
        a.Push(i);
    }

    for(uint32_t i = 10; i > 0; --i)
    {
        std::cout << std::endl << a.GetCapacity() << "\t" << a.GetSize() << std::endl;
        std::cout << a.Pop() << std::endl;
        std::cout << a.GetCapacity() << "\t" << a.GetSize() << std::endl;
    }

	return 0;
}

