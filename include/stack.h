#pragma once

namespace data_structures
{
    class stack
    {
    private:
        int stack_ptr = -1;
        int *stk;
        int temp;
        int max;

    public:
        stack();
        stack(int in_sz);
        ~stack();
        void push_back(int in_stk);
        void pop();
        void top();
        void isEmpty();
        int size();
    };
}

typedef data_structures::stack stack;
