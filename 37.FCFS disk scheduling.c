#include<stdio.h>
int main()
{
    int a[20],n,head,i,sum=0;
    printf("Enter no. of requests: ");
    scanf("%d",&n);
    printf("Enter requests: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter head position: ");
    scanf("%d",&head);

    for(i=0;i<n;i++)
    {
        sum+=abs(head-a[i]);
        head=a[i];
    }
    printf("Total seek time=%d",sum);
}