#pragma once

#include <assert.h>



template<typename TYPE, uint32_t CAPACITY>
class stack
{
    public:

        stack();
        ~stack();

        void Push(TYPE aPushedObject);

        uint32_t GetSize();
        uint32_t GetCapacity();

        TYPE Pop();



    private:

        TYPE myArray[CAPACITY];

        uint32_t mySize;
        const uint32_t myCapacity = CAPACITY;
};



template<typename TYPE, uint32_t CAPACITY>
stack<TYPE, CAPACITY>::stack()
{
    mySize = 0;
};



template<typename TYPE, uint32_t CAPACITY>
stack<TYPE, CAPACITY>::~stack()
{
}



template<typename TYPE, uint32_t CAPACITY>
uint32_t stack<TYPE, CAPACITY>::GetCapacity()
{
    return myCapacity;
}



template<typename TYPE, uint32_t CAPACITY>
uint32_t stack<TYPE, CAPACITY>::GetSize()
{
    return mySize;
}



template<typename TYPE, uint32_t CAPACITY>
void stack<TYPE, CAPACITY>::Push(TYPE aPushedObject)
{
    assert(mySize < myCapacity && "Tried to push to a full stack!");
    myArray[mySize] = aPushedObject;
    mySize += 1;
}



template<typename TYPE, uint32_t CAPACITY>
TYPE stack<TYPE, CAPACITY>::Pop()
{
    assert(mySize > 0 && "Tried to pop from an empty stack!");
    mySize -= 1;
    return myArray[mySize];
}
