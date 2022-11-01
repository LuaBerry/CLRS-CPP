#include "q_stack.h"
#include<iostream>
#include<exception>

void initialize(Q_Stack* s, int n)
{
    s->q1 = new Queue;
    s->q2 = new Queue;
    initialize(s->q1, n);
    initialize(s->q2, n);
}

void push(Q_Stack* s, int n) // O(1)
{
    if(isFull(s))
        std::cout << "Stack Full!\n";
    else
        enqueue(s->q1, n);
}

int pop(Q_Stack* s) // O(n)
{
    if(isEmpty(s))
        throw std::underflow_error("Stack Empty!");
    
    while((s->q1->num) > 1)
        enqueue(s->q2, dequeue(s->q1));

    int n = dequeue(s->q1);

    while(!isEmpty(s->q2))
        enqueue(s->q1, dequeue(s->q2));

    return n;
}

bool isFull(Q_Stack* s)
{
    return isFull(s->q1);
}

bool isEmpty(Q_Stack* s)
{
    return isEmpty(s->q1);
}

void printStack(Q_Stack* s)
{
    printQueue(s->q1);
}

void terminate(Q_Stack* s)
{
    terminate(s->q1);
    terminate(s->q2);

    delete s->q1;
    delete s->q2;
}