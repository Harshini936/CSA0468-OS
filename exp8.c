#include <stdio.h>

int main() {
    int n,i,tq,bt[10],rem[10],done;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
    }

    scanf("%d",&tq);

    do{
        done=1;
        for(i=0;i<n;i++)
            if(rem[i]>0){
                done=0;
                if(rem[i]>tq)
                    rem[i]-=tq;
                else
                    rem[i]=0;
            }
    }while(!done);

    printf("Processes completed\n");

    return 0;
}