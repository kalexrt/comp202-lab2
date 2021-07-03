#include <iostream>
#include "arraystack.h"

int main()
{
    stack<char> *stack = new arraystack<char>(5);
    stack->push('o');
    stack->push('n');
    stack->push('e');
    char e;
    stack->top(e);
    std::cout << e << std::endl; 
    stack->pop(e);
    std::cout << e << std::endl; 
    stack->pop(e);
    std::cout << e << std::endl; 
    stack->top(e);
    std::cout << e << std::endl; 
    stack->push('l');
    stack->push('f');
    stack->top(e);
    std::cout << e << std::endl; 
    delete stack;
    return 0;
}