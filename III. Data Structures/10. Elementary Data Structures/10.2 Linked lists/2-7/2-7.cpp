/*
Q2-7.
Give a Θ(n)-time nonrecursive procedure that reverses a singly linked list of n
elements. The procedure should use no more than constant storage beyond that
needed for the list itself.

A. Set pointer P = head->next. *Remove head->next(Since it will be the tail node)*

Do 1~3 repeatedly while P is not nullptr.
1. Save current P in TEMP.
2. Move P to P->next.
3. Then, push TEMP to the head. (TEMP->next = head, head = TEMP)


Solution 2.
Set pointer A = head, pointer B = head->next.

Do 1~3 repeatedly while B is not nullptr.
1. Save B->next in TEMP
2. Set B->next = A. (Connect A-B in reverse, A->B to A<-B)
3. Move A to A->next(which is B) and Move B to B->next(which is TEMP)

Then, Set B as the head of the list.
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
        case 5:
            list_reverse(l);
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
    cout <<"3. Search 4. Print 5. Reverse\n";
    cout <<"0. Exit\n";
}