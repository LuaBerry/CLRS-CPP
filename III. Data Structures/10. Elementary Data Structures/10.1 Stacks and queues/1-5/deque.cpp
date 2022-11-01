#include "deque.h"
#include<iostream>
#include<exception>

static void moveHeadFront(Deque* q);
static void moveHeadBack(Deque* q);
static void moveTailFront(Deque* q);
static void moveTailBack(Deque* q);


void initialize(Deque* q, int n)
{
    q->data = new int[n];
    q->head = 0;
    q->tail = 1;
    q->length = n;
    q->num = 0;
}


void H_enqueue(Deque* q, int n)
{

    if(isFull(q))
        std::cout << ("Deque full!\n");
    else
    {
        q->data[q->head] = n;
        q->num++;
        moveHeadFront(q);
    }
}

void T_enqueue(Deque* q, int n)
{
    if(isFull(q))
        std::cout << ("Deque full!\n");
    else
    {
        q->data[q->tail] = n;
        q->num++;
        moveTailBack(q);
    }
}

int H_dequeue(Deque* q)
{
    if(isEmpty(q))
        throw std::underflow_error("Deque Empty!");
    else
    {
        moveHeadBack(q);
        q->num--;
        return q->data[q->head];
    }
}

int T_dequeue(Deque* q)
{
    if(isEmpty(q))
        throw std::underflow_error("Deque Empty!");
    else
    {
        moveTailFront(q);
        q->num--;
        return q->data[q->tail];
    }
}

bool isFull(Deque* q)
{
    return q->num == q->length;
}

bool isEmpty(Deque* q)
{
    return q->num == 0;
}

void printQueue(Deque* q)
{
    std::cout << "Deque status: ";
    for(int i = 1; i <= (q->num); i++)
    {
        std::cout << q->data[(q->head + i) % (q->length) ] << " ";

    }
    std::cout << "\n\n";
}

void terminateDeque(Deque* q)
{
    delete[] q->data;
}

void moveHeadFront(Deque* q)
{
    if ((q->head) == 0)
        q->head = (q->length) - 1;
    else
        q->head--;

}

void moveHeadBack(Deque* q)
{
    q->head = (q->head + 1) % q->length;
}

void moveTailFront(Deque* q)
{
    if ((q->tail) == 0)
        q->tail = (q->length) - 1;
    else
        q->tail--;

}

void moveTailBack(Deque* q)
{
    q->tail = (q->tail + 1) % q->length;
}