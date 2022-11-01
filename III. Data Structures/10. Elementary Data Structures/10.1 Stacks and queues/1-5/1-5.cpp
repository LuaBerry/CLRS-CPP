/*
10. 1-5
Whereas a stack allows insertion and deletion of elements at only one end, and a
queue allows insertion at one end and deletion at the other end, a deque
(doubleended queue) allows insertion and deletion at both ends. Write four O(1)-time
procedures to insert elements into and delete elements from both ends of a deque
implemented by an array.

*/

#include<iostream>
#include<exception>
#include "deque.h"

using namespace std;

void printConsole();

int main()
{
    Deque* q = new Deque;
    initialize(q, 6);
    int input = 1;
    int n = 0;

    while(input)
    {
        printConsole();
        cin >> input;
        switch (input)
        {
        case 1: //Enqueue to head
            cout << "Input number: ";
            cin >> n;
            H_enqueue(q, n);
            break;
        case 2: //Enqueue to Tail
            cout << "Input number: ";
            cin >> n;
            T_enqueue(q, n);
            break;
        case 3: //Dequeue from head
            try{
                n = H_dequeue(q);
                cout << "Dequeued Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 4: //Dequeue from tail
            try{
                n = T_dequeue(q);
                cout << "Dequeued Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 5: //Pop from L
            printQueue(q);
            break;
        case 0: //Exit
            break;
        default:
            cout << "Input error!\n";
            break;
        }
    }
    terminateDeque(q);
}

void printConsole()
{
    cout << "\n";
    cout << "1. Enqueue to head 2. Enqueue to tail\n";
    cout << "3. Dequeue from head 4. Dequeue from tail\n";
    cout << "5. Print 0. Exit\n";
    cout << "Input operations: ";
}