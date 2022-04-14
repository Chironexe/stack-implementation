#include <iostream>
#include "stack.h"

stack::stack() : stk(nullptr) {}

stack::stack(int in_sz)
{
    stk = new int[in_sz];
    max = in_sz;
}

stack::~stack()
{
    delete[] stk;
}

void stack::push_back(int in_stk)
{
    if (stack_ptr == max)
    {
        std::cout << "Stack is full.\n";
        return;
    }
    stk[++stack_ptr] = in_stk;
}

void stack::pop()
{
    if (stack_ptr < 0)
    {
        std::cout << "Stack is empty.\n";
    }
    else
    {
        stack_ptr--;
    }
}

void stack::top()
{
    if (stack_ptr < 0)
    {
        std::cout << "NULL\n";
    }
    else
    {
        std::cout << stk[stack_ptr] << "\n";
    }
}

void stack::isEmpty()
{
    if (stack_ptr < 0)
    {
        std::cout << "Empty.\n";
    }
    else
    {
        std::cout << "Not empty.\n";
    }
}

int stack::size()
{
    return stack_ptr;
}
