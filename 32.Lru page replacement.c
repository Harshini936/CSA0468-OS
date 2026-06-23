#include<stdio.h>
int main()
{
    int p[20],f[10],time[10],n,m,i,j,pf=0,c=0,pos,min;
    printf("Enter no. of pages and frames: ");
    scanf("%d%d",&n,&m);
    printf("Enter pages: ");
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    for(i=0;i<m;i++) f[i]=-1;

    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=0;j<m;j++)
            if(f[j]==p[i])
            {
                flag=1;
                time[j]=++c;
            }

        if(!flag)
        {
            min=0;
            for(j=1;j<m;j++)
                if(time[j]<time[min]) min=j;

            pos=min;
            for(j=0;j<m;j++)
                if(f[j]==-1) pos=j;

            f[pos]=p[i];
            time[pos]=++c;
            pf++;
        }
    }
    printf("Page Faults=%d",pf);
}