#include <stdio.h>
#include <stdlib.h>

int main(){

        int a[3][2], b[2][3], c[2][2],i,l1,c1,l2,c2;

        printf("Matriz 1\n");
        for(l1=0;l1<2;l1++){
                for(c1=0;c1<3;c1++){
                        scanf("%d",&a[l1][c1]);
                }
        }
        printf("Matriz 2\n");
        for(l1=0;l1<3;l1++){
                for(c1=0;c1<2;c1++){
                        scanf("%d",&b[l1][c1]);
                }
        }
        c[0][0] = (a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);
        c[0][1] = (a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);
        c[1][0] = (a[1][0]*b[0][0])+(a[1][1]*b[1][0])+(a[1][2]*b[2][0]);
        c[1][1] = (a[1][0]*b[1][0])+(a[1][1]*b[1][1])+(a[1][2]*b[2][1]);

        for(l1=0;l1<2;l1++){
                printf("| ");
                for(c1=0;c1<2;c1++){
                        printf("%d ",c[l1][c1]);
                }
                printf("|\n");
        }

        return 0;
}