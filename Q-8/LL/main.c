#include <stdio.h>
#include <stdlib.h>
#include "queue_ll.h"
#include "queue_ll.c"

int main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\n");  
        printf("Enter your choice: ");  
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("Enter a valid choice\n");  
        }  
    }  
    return 0;
}
