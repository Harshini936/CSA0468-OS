#include <stdio.h>

int main() {
    int n, i, p[10], bt[10], temp;
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d%d",&bt[i],&p[i]);

    for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(p[i]>p[j]){
                temp=p[i]; p[i]=p[j]; p[j]=temp;
                temp=bt[i]; bt[i]=bt[j]; bt[j]=temp;
            }

    printf("BT\tPriority\n");
    for(i=0;i<n;i++)
        printf("%d\t%d\n",bt[i],p[i]);

    return 0;
}