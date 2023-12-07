#include <stdio.h>
#include <stdlib.h>

int main(){

    int v[10],v2[10],v3[10],x=0,y=0,i=0;;
    printf("Enter the number of elements in the array\n");
    while(x<10){
        scanf("%d",&v[x]);
        x++;
    }
    x=0;
    printf("Enter the number of elements in the array 2\n");
    while(y<10){
        scanf("%d",&v2[y]);
        y++;
    }
    while(v[x]<10){

        y=0;
        while(v2[y]<10){
            if(v[x]!=v2[y]){
                v3[i]=v2[y];
                i++;
            }
            y++;
        }
        x++;
    }
    return 0;
}