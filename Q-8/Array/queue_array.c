#include <stdio.h>
#include <stdlib.h>
#include "queue_array.h"

void enqueue(){
    int item;
    printf("Enter the element: ");
    scanf("%d", &item);
    if(Rear == SIZE - 1){
        printf("Overflow\n");
    }
    if(Front == -1 && Rear == -1){
        Front = 0;
        Rear = 0;
        }
    else{
        Rear++;
    }
    queue[Rear] = item;
    printf("%d Inserted\n", item);
    }

void dequeue(){
    int item;
    if(Front == -1 || Front > Rear){
        printf("UnderFlow\n");
    }
    else{
        item = queue[Front];
        if(Front == Rear){
            Front = -1;
            Rear = -1;
        }
        else{
            Front++;
        }
        printf("%d Dequeued\n", item);
    }
}

void display()  
{  
    int i;  
    if(Rear == -1)  
    {  
        printf("Empty queue\n");  
    }  
    else  
    {   printf("Values are: ");  
        for(i=Front;i<=Rear;i++)  
        {  
            printf("%d ",queue[i]);  
        }     
        printf("\n");
    }  
}  
