#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"

void push(){
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("element cannot be pushed"); 
    }
    else{
        printf("Enter the value: ");
        scanf("%d", &val);
        if(head == NULL){
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else{
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
    }
}

void pop(){
    int item;
    struct node *ptr;
    if(head == NULL){
        printf("Underflow");
    }
    else{
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("%d popped/n", item);
    }
}

void display(){
    int i;
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("Empty");
    }
    else{
        printf("The elements are: ");
        while(ptr != NULL){
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
