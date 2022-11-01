#include "queue.h"
#include<iostream>
#include<exception>

void initialize(Queue* q, int n)
{
    q->data = new int[n];
    q->head = 0;
    q->tail = 0;
    q->length = n;
}

void enqueue(Queue* q, int n)
{
    q->data[q->tail] = n;
    if ((q->tail) == (q->length - 1))
        q->tail = 0;
    else
        q->tail++;
}

int dequeue(Queue* q)
{
    int n = q->data[q->head];
    if (q->head == (q->length - 1))
        q->head = 0;
    else
        q->head++;
    
    return n;
}

void printQueue(Queue* q)
{
    std::cout << "Queue status: ";
    for(int i = q->head; i  != (q->tail); i++)
    {
        if(i == q->length)
            i = 0;
        std::cout << q->data[i] << " ";
    }
    std::cout << "\n\n";
}

void terminate(Queue* q)
{
    delete[] q->data;
}