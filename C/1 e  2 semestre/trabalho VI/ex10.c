#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
int main(void){
    double v[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%lf",&v[i]);
    }
    for(i=0;i<5;i++){
        printf("\n%.2lf\n",ceil(v[i]));
    }
}