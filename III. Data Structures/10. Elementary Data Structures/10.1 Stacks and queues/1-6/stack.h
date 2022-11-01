#ifndef __STACK__
#define __STACK__

struct Stack
{
    int* data;
    int top;
    int max;
};

void initialize(Stack* s, int n);

void push(Stack* s, int n);

int pop(Stack* s);

bool isFull(Stack* s);

bool isEmpty(Stack* s);

void printStack(Stack* s);

void terminate(Stack* s);

#endif