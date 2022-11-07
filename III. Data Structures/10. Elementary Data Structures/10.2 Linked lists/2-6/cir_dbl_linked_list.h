#ifndef __CIR_DBL_LLIST__
#define __CIR_DBL_LLIST__

#define NIL -10001

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

struct CD_LLIST
{
    Node* nil;
};

void list_initialize(CD_LLIST* l);

void list_insert(CD_LLIST* l, int x);

void list_delete(CD_LLIST* l, int x);

void list_delete(CD_LLIST* l, Node* x);

Node* list_search(CD_LLIST* l, int x);

int list_search_index(CD_LLIST* l, int x);

Node* list_search2(CD_LLIST* l, int x);

int list_search_index2(CD_LLIST* l, int x);

bool list_isEmpty(CD_LLIST* l);

void list_print(CD_LLIST* l);

void list_terminate(CD_LLIST* l);

CD_LLIST* list_union(CD_LLIST* l1, CD_LLIST* l2);

#endif