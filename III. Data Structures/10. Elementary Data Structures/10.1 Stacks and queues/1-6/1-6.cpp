/*
10. 1-6
Show how to implement a queue using two stacks.
Analyze the running time of the queue operations.

Enqueue(Q, x) = O(1), Dequeue(Q, x) = O(n)

*/

#include<iostream>
#include<exception>
#include "s_queue.h"

using namespace std;

void printConsole();

int main()
{
    S_Queue* q = new S_Queue;
    initialize(q, 8);
    int input = 1;
    int n = 0;

    while(input)
    {
        printConsole();
        cin >> input;
        switch (input)
        {
        case 1: //Enqueue
            cout << "Input number: ";
            cin >> n;
            enqueue(q, n);
            break;
        case 2: //Dequeue
            try{
                n = dequeue(q);
                cout << "Dequeued Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 3: //Pop from L
            printQueue(q);
            break;
        case 0: //Exit
            break;
        default:
            cout << "Input error!\n";
            break;
        }
    }

    terminate(q);
}

void printConsole()
{
    cout << "\n";
    cout << "1. Enqueue 2. Dequeue\n";
    cout << "3. Print 0. Exit\n";
    cout << "Input operations: ";
}