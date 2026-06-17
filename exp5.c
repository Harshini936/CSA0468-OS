#include <stdio.h>

int main() {
    int n, i, j, bt[10], p[10], temp;

    printf("Enter no. of processes: ");
    scanf("%d", &n);

    printf("Enter burst time and priority:\n");
    for (i = 0; i < n; i++)
        scanf("%d%d", &bt[i], &p[i]);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (p[i] > p[j]) {    // smaller number = higher priority
                temp = p[i]; p[i] = p[j]; p[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
            }

    printf("\nBT\tPriority\n");
    for (i = 0; i < n; i++)
        printf("%d\t%d\n", bt[i], p[i]);

    return 0;
}