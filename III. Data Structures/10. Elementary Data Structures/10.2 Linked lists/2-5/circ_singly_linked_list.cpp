#include"circ_singly_linked_list.h"
#include<iostream>

void list_initialize(CL_LList* l)
{
    l->head = nullptr;
    l->tail = nullptr;
}

void list_insert(CL_LList* l, int x) // O(1)
{
    Node* n = new Node;
    n->data = x;

    if(l->head) //if list is not empty
    {
        n->next = l->head;
        (l->tail)->next = n;
        l->head = n;
    }
    else //if list is empty
    {
        n->next = n;
        l->head = n;
        l->tail = n;
    }
}

void list_delete(CL_LList* l, int x) // O(n)
{
    Node* n = l->head; //Start at head
    Node* prev = l->head; //Prev of head is tail
    bool flag = false; //flag to check if x is located

    if((n->data) == x) //If head is x
    {
        l->head = n->next;
        flag = true;
    }
    else //If head is not x
    {
        prev = n; //Move prev and n to next one
        n = n->next;
        while(n != l->head) //to locate x
        {
            if((n->data) == x) //If x is found
            {
                flag = true;
                break;
            }
            prev = n; //move prev and n to next one
            n = n->next;
        }
    }
    if(flag) //if x is located
    {
        if(n == l->tail) //if it is tail
            l->tail = prev;
        
        prev->next = n->next; //Cut out n and delete
        delete n;
    }
}

Node* list_search(CL_LList* l, int x)
{
    Node* n = l->head;
    if ((n)->data == x)
        return n;
    n = n->next;
    while(n != l->head)
    {
        if((n->data) == x)
            break;
        else
        {
            n = n->next;
        }
    }
    return n;
}

int list_search_index(CL_LList* l, int x)
{
    Node* n = l->head;
    if ((n)->data == x)
        return 1;
    n = n->next;
    int i = 2;
    while(n != l->head)
    {
        if((n->data) == x)
            break;
        else
        {
            i++;
            n = n->next;
        }
    }
    if(n != l->head)
        return i;
    else
        return -1;
}

bool list_isEmpty(CL_LList* l)
{
    return (l->head) == nullptr;
}

void list_print(CL_LList* l)
{
    Node* n = l->head;
    if(n == nullptr)
        return;
    do
    {
        std::cout << n->data << " ";
        n = n->next;
    } while(n != l->head);
    std::cout << "\n\n";
}

void list_terminate(CL_LList* l)
{
    Node* n = l->head;
    Node* temp;
    while(n != l->head)
    {
        temp = n;
        n = n->next;
        delete temp;
    }
}
