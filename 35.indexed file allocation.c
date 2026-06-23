#include<stdio.h>
int main()
{
    int n,i,b[20];
    printf("Enter number of blocks: ");
    scanf("%d",&n);

    printf("Enter block numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    printf("Index\tBlock\n");
    for(i=0;i<n;i++)
        printf("%d\t%d\n",i,b[i]);
}