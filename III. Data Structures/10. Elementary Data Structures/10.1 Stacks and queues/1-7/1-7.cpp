/*
10. 1-4
Show how to implement a stack using two queues.
Analyze the running time of the stack operations.

PUSH(S, x) = O(1), POP(S) = O(n)

*/

#include<iostream>
#include<exception>
#include "q_stack.h"

using namespace std;

void printConsole();

int main()
{
    Q_Stack* s = new Q_Stack;
    initialize(s, 8);
    int input = 1;
    int n = 0;

    while(input)
    {
        printConsole();
        cin >> input;
        switch (input)
        {
        case 1: //Push
            cout << "Input number: ";
            cin >> n;
            push(s, n);
            break;
        case 2: //Pop
            try{
                n = pop(s);
                cout << "Poped Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 3: //Pop from L
            printStack(s);
            break;
        case 0: //Exit
            break;
        default:
            cout << "Input error!\n";
            break;
        }
    }

    terminate(s);
}

void printConsole()
{
    cout << "\n";
    cout << "1. Push 2. Pop\n";
    cout << "3. Print 0. Exit\n";
    cout << "Input operations: ";
}