#ifndef __DEQUE__
#define __DEQUE__

struct Deque
{
    int* data;
    int head;
    int tail;
    int length;
    int num;
};

void initialize(Deque* q, int n);

void H_enqueue(Deque* q, int n);

void T_enqueue(Deque* q, int n);

int H_dequeue(Deque* q);

int T_dequeue(Deque* q);

bool isFull(Deque* q);

bool isEmpty(Deque* q);

void printQueue(Deque* q);

void terminateDeque(Deque* q);

#endif