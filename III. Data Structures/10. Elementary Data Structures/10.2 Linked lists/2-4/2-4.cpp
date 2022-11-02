/*
Q2-1. As written, each loop iteration in the LIST-SEARCH' procedure requires two tests:
one for x != L.nil and one for x.key != k. Show how to eliminate the test for
x != L.nil in each iteration.

A.Let L.nil.key = k. Loop will end at L.nil when k is not found. Then, revert L.nil.key.
It will reduce the coefficient of n in O(n).
*/

#include"cir_dbl_linked_list.h"
#include<iostream>

using namespace std;

void printConsole();

int main()
{
    CD_LLIST* l = new CD_LLIST;
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
            m = list_search_index2(l, n);
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