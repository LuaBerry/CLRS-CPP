/*
10. 1-1
Using Figure 10.1 as a model, illustrate the result of each operation in the sequence
PUSH (S, 4), PUSH (S, 1), PUSH (S, 3), POP(S), PUSH (S, 8), and POP (S) on an
initially empty stack S stored in array S[1 .. 6].
*/

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