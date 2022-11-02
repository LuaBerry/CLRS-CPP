#ifndef __CIRC_SINGLY_LINKED_LIST__
#define __CIRC_SINGLY_LINKED_LIST__

struct Node
{
    int data;
    Node* next;
};

struct CL_LList
{
    Node* head;
    Node* tail;
};

void list_initialize(CL_LList* l);

void list_insert(CL_LList* l, int x);

void list_delete(CL_LList* l, int x);

Node* list_search(CL_LList* l, int x);

int list_search_index(CL_LList* l, int x);

bool list_isEmpty(CL_LList* l);

void list_print(CL_LList* l);

void list_terminate(CL_LList* l);

#endif