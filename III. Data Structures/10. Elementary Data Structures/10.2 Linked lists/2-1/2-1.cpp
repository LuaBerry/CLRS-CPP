/*
Q2-1. Can you implement the dynamic-set operation INSERT
on a singly linked list in O(1) time? How about DELETE?

A. INSERT(L, x) operates in O(1) time.
DELETE(L, x) operates on O(N) time because we need to locate x first.
*/

#include"singly_linked_list.h"
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
        case 1: //Insert
            cout << "Input: ";
            cin >> n;
            list_insert(l, n);
            break;
        case 2: //Delete
            cout << "Input: ";
            cin >> n;
            list_delete(l, n);
            break;
        case 3: //Search
            cout << "Input: ";
            cin >> n;
            m = list_search_index(l, n);
            cout << n << " is at " << m << ".\n";
            break;
        case 4: //Print
            cout << "List status: ";
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
    cout <<"1. Insert 2. Delete\n";
    cout <<"3. Search 4. Print\n";
    cout <<"0. Exit\n";
}