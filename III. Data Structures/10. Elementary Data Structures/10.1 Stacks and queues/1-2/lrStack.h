#include<iostream>

#ifndef __LRSTACK__
#define __LRSTACK__

struct LRStack
{
    int* data;
    int left;
    int right;
    int max;
};

void initialize(LRStack* s, int n);

void L_push(LRStack* s, int n);

int L_pop(LRStack* s);

void R_push(LRStack* s, int n);

int R_pop(LRStack* s);

bool isFull(LRStack* s);

bool isLEmpty(LRStack* s);

bool isREmpty(LRStack* s);

void printStack(LRStack* s);

void terminate(LRStack* s);

#endif