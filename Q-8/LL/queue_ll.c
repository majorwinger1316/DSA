#include <stdio.h>
#include <stdlib.h>
#include "queue_ll.h"

void enqueue(){
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow\n");   
    }
    else{
        printf("Enter value: ");
        scanf("%d", &item);
        ptr -> data = item;
        if(front == NULL){
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else{
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
        printf("%d enqueued\n", item);
    }
}

void dequeue(){
    int item;
    struct node *ptr;
    if(front == NULL){
        printf("Underflow\n");
    }
    else{
        ptr = front;
        item = front -> data;
        front = front -> next;
        free(ptr);
        printf("%d dequeued\n", item);
    }
}

void display(){
    struct node *ptr;
    ptr = front;
    if(front == NULL){
        printf("Nothing to display");
    }
    else{
        printf("The values are: ");
        while(ptr != NULL){
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
        printf("\n");
    }
}
