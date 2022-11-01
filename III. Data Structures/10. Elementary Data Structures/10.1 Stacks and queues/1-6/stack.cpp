#include "stack.h"
#include<iostream>
#include<exception>

void initialize(Stack* s, int n)
{
    s->data = new int[n];
    s->max = n;
    s->top = 0;
}

void push(Stack* s, int n)
{
    if(isFull(s))
        throw std::overflow_error("Stack Full!");
    else
        s->data[(s->top)++] = n;
}

int pop(Stack* s)
{
    if(isEmpty(s))
        throw std::underflow_error("Stack Empty!");
    else
        return s->data[--(s->top)];
}

bool isFull(Stack* s)
{
    return s->top >= s->max;
}

bool isEmpty(Stack* s)
{
    return s->top == 0;
}

void printStack(Stack* s)
{
    std::cout << "Stack status: ";
    for(int i = 0; i < s->top; i++)
    {
        std::cout << s->data[i] << " ";
    }
    std::cout << "\n\n";
}

void terminate(Stack* s)
{
    delete[] s->data;
}