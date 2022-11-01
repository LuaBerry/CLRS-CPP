#ifndef __Q_STACK__
#define __Q_STACK__

#include"queue2.h"

struct Q_Stack
{
    Queue* q1;
    Queue* q2;
};

void initialize(Q_Stack* s, int n);

void push(Q_Stack* s, int n);

int pop(Q_Stack* s);

bool isFull(Q_Stack* s);

bool isEmpty(Q_Stack* s);

void printStack(Q_Stack* s);

void terminate(Q_Stack* s);

#endif