#include<stdio.h>
int main()
{
    int p[20],f[10],n,m,i,j,k=0,pf=0;
    printf("Enter no. of pages and frames: ");
    scanf("%d%d",&n,&m);
    printf("Enter page reference string: ");
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    for(i=0;i<m;i++) f[i]=-1;
    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=0;j<m;j++)
            if(f[j]==p[i]) flag=1;
        if(!flag)
        {
            f[k]=p[i];
            k=(k+1)%m;
            pf++;
        }
    }
    printf("Page Faults=%d",pf);
}