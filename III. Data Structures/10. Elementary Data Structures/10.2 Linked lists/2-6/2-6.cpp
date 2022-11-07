/*
Q2-6. The dynamic-set operation UNION takes two disjoint sets S1 and S2 as input, and
it returns a set S = S1 U S2 consisting of all the elements of S1 and S2. The
sets S1 and S2 are usually destroyed by the operation. Show how to support UNION
in O(1) time using a suitable list data structure.

A. Using circular doubly linked list with Sentinel, S1 and S2 is those lists.
Connect S1 tail and S2 head. Make new list, and attach S1 head to new list's Nil.
Connect S2 tail and new list's Nil 
*/

#include"cir_dbl_linked_list.h"
#include<iostream>

using namespace std;

void printConsole();
void operations(int, CD_LLIST*);

int main()
{
    CD_LLIST* l1 = new CD_LLIST;
    CD_LLIST* l2 = new CD_LLIST;
    CD_LLIST* l3 = new CD_LLIST;
    list_initialize(l1);
    list_initialize(l2);
    list_initialize(l3);

    int input = 1;
    int list_n;
    while(input)
    {
        cout << "Select List (1 ~ 3)\n";
        cout << "4. L1 UNION L2 -> L3: ";
        cin >> list_n;
        if(list_n < 1 || list_n > 4)
            continue;
        
        if(list_n == 4)
        {
            l3 = list_union(l1, l2);
            l1 = new CD_LLIST;
            l2 = new CD_LLIST;
            list_initialize(l1);
            list_initialize(l2);
            continue;
        }
        printConsole();
        cin >> input;
        switch (list_n)
        {
        case 1:
            operations(input, l1);
            break;
        case 2:
            operations(input, l2);
            break;
        case 3:
            operations(input, l3);
            break;
        }
    }

    list_terminate(l1);
    list_terminate(l2);
    list_terminate(l3);

    return 0;
}

void printConsole()
{
    cout <<"\n";
    cout <<"1. Insert 2. Delete\n";
    cout <<"3. Search 4. Print\n";
    cout <<"0. Exit\n";
}

void operations(int input, CD_LLIST* l)
{
    int n = 0;
    int m = 0;
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
        return;
    default:
        cout << "Invalid input.\n";
    }
}