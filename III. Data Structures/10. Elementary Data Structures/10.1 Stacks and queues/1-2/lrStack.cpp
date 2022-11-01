#include "lrStack.h"
#include<iostream>
#include<exception>

void initialize(LRStack* s, int n)
{
    s->data = new int[n];
    s->left = 0;
    s->right = n - 1;
    s->max = n;
}

void L_push(LRStack* s, int n)
{
    if(isFull(s))
    {
        std::cout << "Stack Full!\n";
        return;
    }
    else
        s->data[(s->left)++] = n;
}

int L_pop(LRStack* s)
{
    if(isLEmpty(s))
        throw std::overflow_error("Stack Empty!");
    else
        return s->data[--(s->left)];
}

void R_push(LRStack* s, int n)
{
    if(isFull(s))
    {
        std::cout << "Stack Full!\n";
        return;
    }
    else
        s->data[(s->right)--] = n;
}

int R_pop(LRStack* s)
{
    if(isREmpty(s))
        throw std::overflow_error("Stack Empty!");
    else
        return s->data[++(s->right)];
}

bool isFull(LRStack* s)
{
    return s->right < s->left;
}

bool isLEmpty(LRStack* s)
{
    return s->left == 0;
}

bool isREmpty(LRStack* s)
{
    return s->right == s->max - 1;
}

void printStack(LRStack* s)
{
    std::cout << "Left Stack status: ";
    for(int i = 0; i < s->left; i++)
    {
        std::cout << s->data[i] << " ";
    }
    std::cout << "Right Stack status: ";
    for(int i = (s->max) - 1; i > s->right; i--)
    {
        std::cout << s->data[i] << " ";
    }
    std::cout << "\n\n";
}

void terminate(LRStack* s)
{
    delete[] s->data;
}