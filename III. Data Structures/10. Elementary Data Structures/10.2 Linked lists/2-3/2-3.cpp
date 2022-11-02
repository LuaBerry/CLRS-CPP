/*
Q2-2. Implement a queue using a singly linked list L. 
The operations enqueue and dequeue should still take O(1) time.
*/

#include"l_queue.h"
#include<iostream>

using namespace std;

void printConsole();

int main()
{
    S_LList* l = new S_LList;
    list_initialize(l);

    int input = 1;
    int n = 0;
    int m = 0;
    while(input)
    {
        printConsole();
        cin >> input;
        switch (input)
        {
        case 1: //Push
            cout << "Input: ";
            cin >> n;
            list_enqueue(l, n);
            break;
        case 2: //Pop
            if(list_isEmpty(l))
            {
                cout << "Queue empty!\n";
                break;
            }
            cout << "Dequeued number: " << list_dequeue(l) << "\n";
            break;
        case 3: //Print
            cout << "Queue status: ";
            list_print(l);
            cout << "\n";
            break;
        case 0:
            break;
        default:
            cout << "Invalid input.\n";
        }
    }

    list_terminate(l);

    return 0;
}

void printConsole()
{
    cout <<"\n";
    cout <<"1. Enqueue 2. Dequeue 3. Print\n";
    cout <<"0. Exit\n";
}