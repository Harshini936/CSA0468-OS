#include<stdio.h>
int main()
{
    int p[20],f[10],n,m,i,j,k,pf=0,pos,far;
    printf("Enter no. of pages and frames: ");
    scanf("%d%d",&n,&m);
    printf("Enter pages: ");
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    for(i=0;i<m;i++) f[i]=-1;

    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=0;j<m;j++)
            if(f[j]==p[i]) flag=1;

        if(!flag)
        {
            far=-1;
            pos=0;
            for(j=0;j<m;j++)
            {
                for(k=i+1;k<n;k++)
                    if(f[j]==p[k]) break;
                if(k>far)
                {
                    far=k;
                    pos=j;
                }
            }
            f[pos]=p[i];
            pf++;
        }
    }
    printf("Page Faults=%d",pf);
}