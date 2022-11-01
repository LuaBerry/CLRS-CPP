/*
10. 1-4
Rewrite ENQUEUE and DEQUEUE to detect underflow and overflow of a queue.

*/

#include<iostream>
#include<exception>
#include "queue2.h"

using namespace std;

void printConsole();

int main()
{
    Queue* q = new Queue;
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