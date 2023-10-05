#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"
#include <limits.h>

int i, j, choice = 0, n, top = -1;
void push(){
    int val;
    if(top == n){
        printf("Overflow");
    }
    else{
        printf("Enter the value: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop(){
    if(top == -1){
        printf("Underflow");
    }
    else{
        top = top - 1;
    }
}

void show(){
    for(i = top; i >= 0; i--){
        printf("%d/n", stack[i]);
    }
    if(top == -1){
        printf("The stack is empty");
    }
}
