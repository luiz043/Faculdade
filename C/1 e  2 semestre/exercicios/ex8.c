#include <stdio.h>
#include <stdlib.h>
//Cachorro quente	100	1,20
//Bauru simples	101	    1,30
//Bauru com ovo	102	    1,50
//Hambúrger	    103	    1,20
//Cheeseburguer	104	    1,30
//Refrigerante	105	    1,00

int main(){

    int c,q;
    float v;
    scanf("%d",&c);
    scanf("%d",&q);
    if(c==100){
        v=q*(1.20);
        printf("%f\n",v);
    }
    else if(c==101){
        v=q*(1.30);
        printf("%f\n",v);
    }
    else if(c==102){
        v=q*(1.50);
        printf("%.2f\n",v);
    }
    else if(c==103){
        v=q*(1.20);
        printf("%f\n",v);
    }
    else if(c==104){
        v=q*(1.30);
        printf("%f\n",v);
    }
    else if(c==105){
        v=q*(1.00);
        printf("%f\n",v);
    }
    return 0;
}