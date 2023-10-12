#ifndef FCFS_H
#define FCFS_H

typedef struct Process {
    int id;
    int arrival_time;
    int burst_time;
} Process;

typedef struct Node {
    Process data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;
int i;
int numProcesses;
int twt, tat;
#endif
