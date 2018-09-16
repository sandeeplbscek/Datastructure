#ifndef MY_STACK_H
#define MY_STACK_H
#include<stdbool.h>
void createstack(int s);
bool isempty();
bool isfull();
void push(int item);
int pop();
int peek();
#endif