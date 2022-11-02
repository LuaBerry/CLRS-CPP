#include"l_queue.h"
#include<iostream>

void list_initialize(S_LList* l)
{
    l->head = nullptr;
    l->tail = nullptr;
}

void list_enqueue(S_LList* l, int x)
{
    Node* n = new Node;
    n->data = x;
    n->next = nullptr;
    if(l->head)
    {
        l->tail->next = n;
        l->tail = n;
    }
    else
    {
        l->head = n;
        l->tail = n;
    }
}

int list_dequeue(S_LList* l)
{
    Node* temp = l->head;
    int n = temp->data;
    l->head = l->head->next;
    delete temp;

    return n;
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
