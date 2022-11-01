#include "queue2.h"
#include<iostream>
#include<exception>

void initialize(Queue* q, int n)
{
    q->data = new int[n];
    q->head = 0;
    q->tail = 0;
    q->length = n;
    q->num = 0;
}

void enqueue(Queue* q, int n)
{
    if(isFull(q))
        std::cout << ("Queue full!\n");
    else
    {
        q->data[q->tail] = n;
        q->num++;
        q->tail = (q->tail + 1) % q->length; 
    }
}

int dequeue(Queue* q)
{
    if(isEmpty(q))
        throw std::underflow_error("Queue Empty!");
    else
    {
        int n = q->data[q->head];
        q->num--;
        q->head = (q->head + 1) % q->length;
        
        return n;
    }
}

bool isFull(Queue* q)
{
    return q->num == q->length;
}

bool isEmpty(Queue* q)
{
    return q->num == 0;
}

void printQueue(Queue* q)
{
    std::cout << "Queue status: ";
    for(int i = 0; i < (q->num); i++)
    {
        std::cout << q->data[(q->head + i) % (q->length) ] << " ";

    }
    std::cout << "\n\n";
}

void terminate(Queue* q)
{
    delete[] q->data;
}