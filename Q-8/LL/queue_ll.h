#ifndef QUEUE_LL_H
#define QUEUE_LL_H
struct node{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void enqueue();
void dequeue();
void display();
#endif 
