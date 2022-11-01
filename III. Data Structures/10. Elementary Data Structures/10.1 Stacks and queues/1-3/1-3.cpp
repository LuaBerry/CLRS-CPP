/*
10. 1-3
Using Figure 10.2 as a model, illustrate the result of each operation in the sequence
ENQUEUE (Q, 4), ENQUEUE (Q, 1), ENQUEUE (Q, 3), DEQUEUE(Q), ENQUEUE (Q, 8), and DEQUEUE (Q) on an
initially empty queue Q stored in array Q[1 .. 6].
*/

#include<iostream>
#include "queue.h"

using namespace std;

int main()
{
    Queue* q = new Queue;
    initialize(q, 6);

    cout << "Enqueue 4\n";
    enqueue(q, 4);
    printQueue(q);;

    cout << "Enqueue 1\n";
    enqueue(q, 1);
    printQueue(q);

    cout << "Enqueue 3\n";
    enqueue(q, 3);
    printQueue(q);

    cout << "Dequeue!\n"  << dequeue(q) << " dequeued.\n";
    printQueue(q);

    cout << "ENQUEUE 8\n";
    enqueue(q, 8);
    printQueue(q);

    cout << "Dequeue!\n"  << dequeue(q) << " dequeued.\n";
    printQueue(q);

    terminate(q);
}