#ifndef __S_QUEUE__
#define __S_QUEUE__

#include"stack.h"

struct S_Queue
{
    Stack* s1;
    Stack* s2;
};

void initialize(S_Queue* q, int n);

void enqueue(S_Queue* q, int n);

int dequeue(S_Queue* q);

bool isFull(S_Queue* q);

bool isEmpty(S_Queue* q);

void printQueue(S_Queue* q);

void terminate(S_Queue* q);

#endif