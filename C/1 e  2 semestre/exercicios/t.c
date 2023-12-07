#include <stdio.h>
#include <stdlib.h>
int main (void){

    int m[3][3],i,x;
    for(i=0;i<3;i++){
        for(x=0;x<3;x++){
            
            scanf("%d",&m[x][i]);
        }
    }
    for(i=0;i<3;i++){
        for(x=0;x<3;x++){
            printf("%d",m[x][i]);
        }


}
}