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

void list_insert(S_LList* l, int x);

void list_delete(S_LList* l, int x);

Node* list_search(S_LList* l, int x);

int list_search_index(S_LList* l, int x);

bool list_isEmpty(S_LList* l);

void list_print(S_LList* l);

void list_terminate(S_LList* l);

#endif