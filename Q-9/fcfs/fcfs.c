#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

// Function to create an empty queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (!queue) {
        perror("Queue creation failed");
        exit(EXIT_FAILURE);
    }
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue a process into the queue
void enqueue(Queue* queue, Process process) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        perror("Node creation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = process;
    newNode->next = NULL;
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue a process from the queue
Process dequeue(Queue* queue) {
    if (queue->front == NULL) {
        perror("Queue is empty");
        exit(EXIT_FAILURE);
    }
    Process process = queue->front->data;
    Node* temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    return process;
}

// Function to simulate FCFS scheduling
void simulateFCFS(Queue* queue) {
    int currentTime = 0;
    while (queue->front != NULL) {
        Process process = dequeue(queue);
        printf("Executing Process %d at time %d\n", process.id, currentTime);
        currentTime += process.burst_time;
    }
}
