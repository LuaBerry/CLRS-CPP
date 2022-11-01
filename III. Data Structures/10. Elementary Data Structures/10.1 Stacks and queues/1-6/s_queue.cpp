#include<iostream>
#include<exception>
#include"s_queue.h"
#include"stack.h"

void initialize(S_Queue* q, int n)
{
    q->s1 = new Stack;
    q->s2 = new Stack;
    initialize(q->s1, n);
    initialize(q->s2, n);
}

void enqueue(S_Queue* q, int n) // O(1)
{
    if(isFull(q))
        std::cout << "Queue Full!";
    else
        push(q->s1, n);
}

int dequeue(S_Queue* q) // O(n)
{
    if(isEmpty(q))
        throw std::underflow_error("Queue Empty!");

    while(!isEmpty(q->s1))
        push(q->s2, pop(q->s1));

    int n = pop(q->s2);

    while(!isEmpty(q->s2))
        push(q->s1, pop(q->s2));

    return n;
}

bool isFull(S_Queue* q)
{
    return isFull(q->s1);
}

bool isEmpty(S_Queue* q)
{
    return isEmpty(q->s1);
}

void printQueue(S_Queue* q)
{
    printStack(q->s1);
}

void terminate(S_Queue* q)
{
    terminate(q->s1);
    terminate(q->s2);

    delete q->s1;
    delete q->s2;
}
