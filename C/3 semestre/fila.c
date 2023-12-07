#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    fila a;
    int opcao, elemento;
    fila_init(&a);
    
    while(1){
        printf("1-emfileira   2-desemfileira  3-inicio   4-sair \n");
        printf("opção: ");
        scanf("%d", &opcao);
        
        if(opcao == 0) break;
        
        if(opcao == 1){
            printf("elemento: ");
            scanf("%d", &elemento);
            enfileira(&a,elemento);
            
            if(fila_cheia(&a))
                printf("fila cheia  \n\n");
            else
                enfileira(&a, elemento);
        }
        
        if(opcao == 2){
            if(fila_vazia(&a))
                printf("fila vazia \n");
            else {
                printf("elemento %d sera eliminado \n", topo_fila(&a));
                desenfileira(&a);
            }
        }
        
        if(opcao == 3){
            if(fila_vazia(&a))
                printf("fila vazia \n");
            else
                printf("topo %d\n", topo_fila(&a));
        }

        if(opcao == 4){
            break;
        }
    
    }
    
    return 0;
}
