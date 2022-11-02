#ifndef __SINGLY_LINKED_LIST__
#define __SINGLY_LINKED_LIST__

struct Node
{
    int data;
    Node* next;
};

struct S_LList
{
    Node* head;
};

void list_initialize(S_LList* l);

void list_push(S_LList* l, int x);

int list_pop(S_LList* l);

bool list_isEmpty(S_LList* l);

void list_print(S_LList* l);

void list_terminate(S_LList* l);

#endif