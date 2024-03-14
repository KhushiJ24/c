#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int pid[n];
    int at[n];
    int bt[n];
    int completion_time[n];

    for (i = 0; i < n; i++) {
        printf("Enter the process ID: ");
        scanf("%d", &pid[i]);
    }

    for (j = 0; j < n; j++) {
        printf("Enter the arrival time for process %d: ", pid[j]);
        scanf("%d", &at[j]);
    }

    for (k = 0; k < n; k++) {
        printf("Enter the burst time for process %d: ", pid[k]);
        scanf("%d", &bt[k]);
    }

    // Calculate completion time based on arrival time
    completion_time[0] = at[0] + bt[0];

    for (i = 1; i < n; i++) {
        if (at[i] > completion_time[i - 1]) {
            completion_time[i] = at[i] + bt[i];
        } else {
            completion_time[i] = completion_time[i - 1] + bt[i];
        }
    }
    
    int tat[n];
    for(i=0;i<n;i++)
    {
    	tat[i]=completion_time[i]-at[i];
	}
	int wt[n];
	for(i=0;i<n;i++){
		wt[i]=tat[i]-bt[i];
	}
    // Display the calculated completion time for each process
    printf("\nCalculated completion Time:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d: completion Time = %d, turn around time = %d, waiting time: %d\n", pid[i], completion_time[i],tat[i],wt[i]);
    }
    return 0;
}
