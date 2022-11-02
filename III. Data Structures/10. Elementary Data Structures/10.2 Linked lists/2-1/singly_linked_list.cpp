#include"singly_linked_list.h"
#include<iostream>

void list_initialize(S_LList* l)
{
    l->head = nullptr;
}

void list_insert(S_LList* l, int x)
{
    Node* n = new Node;
    n->data = x;
    n->next = l->head;
    l->head = n;
}

void list_delete(S_LList* l, int x)
{
    Node* n = l->head;
    Node* prev = nullptr;
    while(n)
    {
        if((n->data) == x)
            break;
        else
            prev = n;
            n = n->next;
    }

    if(prev)
        prev->next = n->next;
    else
        l->head = n->next;
    
    delete n;
}

Node* list_search(S_LList* l, int x)
{
    Node* n = l->head;
    int i = 1;
    while(n)
    {
        if((n->data) == x)
            break;
        else
        {
            i++;
            n = n->next;
        }
    }
    return n;
}

int list_search_index(S_LList* l, int x)
{
    Node* n = l->head;
    int i = 1;
    while(n)
    {
        if((n->data) == x)
            break;
        else
        {
            i++;
            n = n->next;
        }
    }
    return i;
}

bool list_isEmpty(S_LList* l)
{
    return (l->head) == nullptr;
}

void list_print(S_LList* l)
{
    Node* n = l->head;
    while(n)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
    std::cout << "\n\n";
}

void list_terminate(S_LList* l)
{
    Node* n = l->head;
    Node* temp;
    while(n)
    {
        temp = n;
        n = n->next;
        delete temp;
    }
}
