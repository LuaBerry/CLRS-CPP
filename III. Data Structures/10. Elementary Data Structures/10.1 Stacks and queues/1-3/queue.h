#ifndef __QUEUE__
#define __QUEUE__

struct Queue
{
    int* data;
    int head;
    int tail;
    int length;
};

void initialize(Queue* q, int n);

void enqueue(Queue* q, int n);

int dequeue(Queue* q);

void printQueue(Queue* q);

void terminate(Queue* q);

#endif