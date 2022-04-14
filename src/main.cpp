#include <iostream>
#include "stack.h"

int main()
{
	int num, stack_sz;
	std::cout << "Enter stack size:\t";
	std::cin >> stack_sz;

	stack stk(num);
	stack *ptr = &stk;
	ptr->isEmpty();
	ptr->top();
	ptr->pop();

	for (int i = 0; i < stack_sz; i++)
	{
		std::cout << "Enter a number:\t";
		std::cin >> num;
		ptr->push_back(num);
	}

	ptr->top();
	ptr->pop();
	ptr->top();
	std::cout << "Enter a number:\t";
	std::cin >> num;
	ptr->push_back(num);
	ptr->top();

	int size = ptr->size();

	for (int i = 0; i < size + 1; i++)
	{
		ptr->pop();
	}
	ptr->top();

	return 0;
}
