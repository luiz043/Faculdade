#include <stdio.h>
#include <stdlib.h>
     struct nomeprodutos{
        char nome[20];
        int valor;
    };
    int main(){
        struct nomeprodutos Nomeprodutos[3];
        int i=0;
        for(i=0;i<3;i++){
            fflush(stdin);
            gets(Nomeprodutos[i].nome);
            scanf("%d",&Nomeprodutos[i].valor);
        }
        for(i=0;i<3;i++){
            puts(Nomeprodutos[i].nome);
            printf(" %d",Nomeprodutos[i].valor);
            printf("\n");
        }
    



    }
        