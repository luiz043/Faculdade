#include <stdio.h>
#include <stdlib.h>
    typedef struct {
        int x;
        int y;
   }Num;
    
    int troca(int x, int y){
        int aux;
        aux=x;
        x=y;
        y=aux;
        printf(" x: %d \n",x);
        printf(" y: %d \n",y);
   }
    typedef struct {
        int w;
        int z;
        
   }Num1;

    int main(){
        Num *pnum,num;
        Num1 *pnum1,num1;
        pnum1=&num1;
        pnum = &num;
        scanf("%d",&pnum->x);
        scanf("%d",&pnum->y);
        printf("\nvalor x antes %d\n",pnum->x);
        printf("\nvalor y antes %d\n",pnum->y);
        troca(pnum->x,pnum->y);
        pnum1->w=pnum->x;
        pnum1->z=pnum->y;
        printf("\nvalor w %d",pnum1->w);
        printf("\nvalor z %d",pnum1->z);

        return 0;

}

        
        