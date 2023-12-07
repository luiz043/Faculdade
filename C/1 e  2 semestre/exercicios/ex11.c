#include <stdio.h>
#include <stdlib.h>

int main(){

    int m[5][5],x=0,y=0;
    printf("ler matriz \n");
    while(x<5){

        y=0;
        while(y<5){
            scanf("%d",&m[x][y]);
            y++;
        }
        x++;
    }
     if(m[0][0]==1 && m[1][1]==1 && m[2][2]==1 && m[3][3]==1 && m[4][4]==1 && m[5][5]==1){

        printf("matriz identidade\n");
    }
    else{
        printf("nao e matriz identidade\n");
    }
    return 0;
}