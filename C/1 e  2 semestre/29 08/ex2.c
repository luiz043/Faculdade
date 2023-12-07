#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,i=0,v[15];
    while(i<15){
        scanf("%d",&x);
        v[i]=(x*x);
        i++; 
    }
    i=0;
    while(i<15){
        printf("%d ",v[i]);
        i++;
    }
    return 0;
}