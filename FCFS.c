#include<stdio.h>
int main()
{
    int n, bt[10], wt[10], tat[10], avwt=0, avtat=0, i, j;

    printf("Enter total number of processos:");
    scanf("%d", &n);
    printf("\nEnter process burst time:\n");

    for(i=0; i<n; i++)
    {
        printf("p[%d]:", i+1);
        scanf("%d", &bt[i]);
    }

    wt[0]=0;

    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0; j<i; j++)
            wt[i]=wt[i]+bt[j];
    }
    printf("\n process \t burst time \t waiting time \t turnaround time");

    for(i=0; i<n; i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        printf("\n p[%d]  \t\t  %d  \t\t  %d  \t\t  %d", i+1, bt[i], wt[i], tat[i]);
    }

    avwt=avwt/i;
    avtat=avtat/i;
    printf("\n\n Average waiting time: %d", avwt);
    printf("\n Average turnaround time: %d", avtat);

    return 0;
}
