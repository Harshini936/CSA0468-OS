#include<stdio.h>
int main()
{
    int n,i,b[20];
    printf("Enter number of blocks: ");
    scanf("%d",&n);

    printf("Enter block numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    printf("Block\tNext\n");
    for(i=0;i<n-1;i++)
        printf("%d\t%d\n",b[i],b[i+1]);

    printf("%d\tNULL",b[n-1]);
}