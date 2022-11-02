#include"l_stack.h"
#include<iostream>

void list_initialize(S_LList* l)
{
    l->head = nullptr;
}

void list_push(S_LList* l, int x)
{
    Node* n = new Node;
    n->data = x;
    n->next = l->head;
    l->head = n;
}

int list_pop(S_LList* l)
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
