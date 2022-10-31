#include<iostream>
#include<exception>
#include "stack.h"

using namespace std;

int main()
{
    Stack* s = new Stack;
    initialize(s, 6);

    cout << "Push 4\n";
    push(s, 4);
    printStack(s);

    cout << "Push 1\n";
    push(s, 1);
    printStack(s);

    cout << "Push 3\n";
    push(s, 3);
    printStack(s);

    cout << "Pop!\n"  << pop(s) << " poped.\n";
    printStack(s);

    cout << "Push 8\n";
    push(s, 8);
    printStack(s);

    cout << "Pop!\n"  << pop(s) << " poped.\n";
    printStack(s);

    terminate(s);
}