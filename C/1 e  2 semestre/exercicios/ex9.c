#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10],v2[10],v3[20],i=0,x=0,y=0;
    printf("Ler vetor 1: ");
    while(i<10){
        scanf("%d",&v[i]);
        v3[y]=v[i];
        y++;
        i++;    
    }
    printf("Ler vetor 2: ");
    while(x<10){
        scanf("%d",&v2[x]);
        v3[y]=v2[x];
        x++;
        y++;
    }
    y=0;
    printf("Vetor 3: ");
    while(y<20){
        printf("%d ",v3[y]);
        y++;
    }
    return 0;

}