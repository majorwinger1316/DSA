#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"
#include "fcfs.c"

int main() {
    Queue* queue = createQueue();
    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);
     int wt[numProcesses];
     int bt[numProcesses];
    for (i = 0; i < numProcesses; i++) {
        Process process;
        process.id = i + 1;
        printf("Enter arrival time for Process %d: ", process.id);
        scanf("%d", &process.arrival_time);
        printf("Enter burst time for Process %d: ", process.id);
        scanf("%d", &process.burst_time);
        wt[i] = process.arrival_time + process.burst_time;
        bt[i] += process.burst_time; 
        enqueue(queue, process);
    }
    for(i = 0; i<numProcesses; i++){
        twt+=wt[i];
        tat+=(wt[i] + bt[i]);
    }
    
    printf("FCFS CPU Scheduling Simulation\n");
    simulateFCFS(queue);

    float att, awt;

    awt = twt/numProcesses;
    att = tat/numProcesses;

    printf("Avg. waiting time= %f\n",awt);
    printf("Avg. turnaround time= %f",att);

    return 0;
}
