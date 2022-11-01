/*
10. 1-2
Explain how to implement two stacks in one array A[1 . . n] in such a way that
neither stack overflows unless the total number of elements in both stacks together
is n. The PUSH and POP operations should run in O(1) time.

*/

#include<iostream>
#include<exception>
#include "lrStack.h"

using namespace std;

void printConsole();

int main()
{
    LRStack* s = new LRStack;
    initialize(s, 8);
    int input = 1;
    int n = 0;
    while(input)
    {
        printConsole();
        cin >> input;
        switch (input)
        {
        case 1: //Push to L
            cout << "Input number: ";
            cin >> n;
            L_push(s, n);
            break;
        case 2: //Push to R
            cout << "Input number: ";
            cin >> n;
            R_push(s, n);
            break;
        case 3: //Pop from L
            try{
                n = L_pop(s);
                cout << "Poped from L stack Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 4: //Pop from R
            try{
                n = R_pop(s);
                cout << "Poped from R stack Number: " << n << "\n";
            }
            catch(exception& e)
            {
                cout << e.what() << "\n";
            }
            break;
        case 5: //Print
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
    cout << "1. Push to left stack 2. Push to right stack\n";
    cout << "3. Pop from left stack 4. Pop from right stack\n";
    cout << "5. Print 0. Exit\n";
    cout << "Input operations: ";
}