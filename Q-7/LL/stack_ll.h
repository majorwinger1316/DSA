#ifndef STACK_LL_H
#define STACK_LL_H
struct node{
    int val;
    struct node *next;
};
struct node *head;
void push();
void pop();
void display();
#endif
