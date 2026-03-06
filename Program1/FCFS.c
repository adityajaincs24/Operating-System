#include <stdio.h>

typedef struct {
    int ID, AT, BT, CT, TAT, WT, RT;
} Process;
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    Process p[n];
    for (int i = 0; i < n; i++) {
        p[i].ID = i + 1;
        printf("Process %d Arrival Time: ", p[i].ID);
        scanf("%d", &p[i].AT);

        printf("Process %d Burst Time: ", p[i].ID);
        scanf("%d", &p[i].BT);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].AT > p[j + 1].AT) {
                Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    int timePassed = 0, sumTAT = 0, sumWT = 0;
    for (int i = 0; i < n; i++) {
        if (timePassed < p[i].AT) {
            timePassed = p[i].AT;
        }
        p[i].CT = timePassed + p[i].BT;
        p[i].TAT = p[i].CT - p[i].AT;
        p[i].WT = p[i].TAT - p[i].BT;
        timePassed = p[i].CT;
        sumTAT += p[i].TAT;
        sumWT += p[i].WT;
    }
    printf("\nProcess Table:\n");
    printf("ID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",p[i].ID, p[i].AT, p[i].BT,p[i].CT, p[i].TAT, p[i].WT);
    }
    printf("\nAverage TAT : %.2f\n", (float)sumTAT / n);
    printf("Average WT  : %.2f\n", (float)sumWT / n);

    return 0;
}
