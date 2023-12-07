#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int v[10],i=0,n=0,p=0;
    while(i<10){
        scanf("%d",&v[i]);
        if(v[i]<0){
            n++; 
        }
        else{
            p++;
        }
        i++;
        }
        printf("negativos %d e positivos %d",n,p);
    }