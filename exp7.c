#include <stdio.h>

int main() {
    int n,i,j,bt[10],temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(bt[i]>bt[j]){
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }

    printf("Execution Order:\n");
    for(i=0;i<n;i++)
        printf("%d ",bt[i]);

    return 0;
}