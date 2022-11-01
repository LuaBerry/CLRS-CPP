#ifndef __QUEUE2__
#define __QUEUE2__

struct Queue
{
    int* data;
    int head;
    int tail;
    int length;
    int num;
};

void initialize(Queue* q, int n);

void enqueue(Queue* q, int n);

int dequeue(Queue* q);

bool isFull(Queue* q);

bool isEmpty(Queue* q);

void printQueue(Queue* q);

void terminate(Queue* q);

#endif