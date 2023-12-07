#include <stdio.h>
#include <stdlib.h>
int main(void){

    int v1[10],v2[10],v3[10],i=0,x=0;
    for(i=0;i<10;i++){
        scanf("%d",&v1[i]);
        v3[x]=v1[i];
        x++;
    }
    for(i=0;i<10;i++){
        scanf("%d",&v2[i]);
        v3[x]=v2[i];
        x++;
    }
    for(i=0;i<20;i++){
        if(v3[i]==' ')
            i++;
        printf("%d ",v3[i]);
    }

    
}