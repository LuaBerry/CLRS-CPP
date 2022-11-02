#include"cir_dbl_linked_list.h"
#include<iostream>

void list_initialize(CD_LLIST* l)
{
    Node* n = new Node;
    n->data = NIL;
    n->next = n;
    n->prev = n;

    l->nil = n;
}

void list_insert(CD_LLIST* l, int x)
{
    Node* n = new Node;
    n->data = x;
    n->prev = l->nil;
    n->next = (l->nil)->next;
    ((l->nil)->next)->prev = n;
    (l->nil)->next = n;
}

void list_delete(CD_LLIST* l, int x)
{
    Node* n = list_search(l, x);
    if(n != l->nil)
        list_delete(l, list_search(l, x));
    else
        std::cout << x << " is not found.";
}

void list_delete(CD_LLIST* l, Node* x)
{
    x->prev->next = x->next;
    x->next->prev = x->prev;
    delete x;
}

Node* list_search(CD_LLIST* l, int x)
{
    Node* n = (l->nil)->next;
    while(n != l->nil)
    {
        if((n->data) == x)
            break;
        else
            n = n->next;
    }
    return n;

}

int list_search_index(CD_LLIST* l, int x)
{
    Node* n = (l->nil)->next;
    int i = 1;
    while(n != l->nil)
    {
        if((n->data) == x)
            break;
        else
        {
            i++;
            n = n->next;
        }
    }
    if(n != l->nil)
        return i;
    else
        return -1;
}

Node* list_search2(CD_LLIST* l, int x)
{
    Node* n = (l->nil)->next;
    (l->nil)->data = x;
    while(true)
    {
        if((n->data) == x)
            break;
        else
            n = n->next;
    }
    (l->nil)->data = NIL;
    return n;
}

int list_search_index2(CD_LLIST* l, int x)
{
    Node* n = (l->nil)->next;
    (l->nil)->data = x;
    int i = 1;
    while(true)
    {
        if((n->data) == x)
            break;
        else
        {
            i++;
            n = n->next;
        }
    }
    (l->nil)->data = NIL;
    if(n != l->nil)
        return i;
    else
        return -1;
}

bool list_isEmpty(CD_LLIST* l)
{
    return (l->nil) == (l->nil)->next;
}

void list_print(CD_LLIST* l)
{
    Node* n = (l->nil)->next;
    while(n != l->nil)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
    std::cout << "\n\n";
}

void list_terminate(CD_LLIST* l)
{
    Node* n = (l->nil)->next;
    Node* temp;
    while(n != l->nil)
    {
        temp = n;
        n = n->next;
        delete temp;
    }
}