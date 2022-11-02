/*
Q2-5. Implement the dictionary operations INSERT, DELETE, and SEARCH using
singly linked, circular lists. What are the running times of your procedures?

A. INSERT(L, x) operates in O(1) time. But, Circular singly linked list w/o sentinel(nil) requires "L.tail" to operate INSERT(L, x) in O(1) time.
Otherwise, it will operate O(n) since it has to locate the tail.
DELETE(L, x) operates on O(N) time because we need to locate x first.
+ Singly linked list have to locate x while Doubly linked list doesn't when Node n is given.
*/

#include"circ_singly_linked_list.h"
#include<iostream>

using namespace std;

void printConsole();

int main()
{
    CL_LList* l = new CL_LList;
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
            if(m > -1)
                cout << n << " is at " << m << ".\n";
            else
                cout << n << " is not found.\n";
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