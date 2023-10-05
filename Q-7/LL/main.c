#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.c"
#include "stack_ll.h"

int main(){
    int choice = 0;
    while(choice != 4){
        printf("1.Push\n2.Pop\n3.Print\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            exit(0);
            break;
        }
        default:{
            printf("Wrong input");
            break;
        }
        }
    }
}
