#include <stdio.h>
#include <stdlib.h>
int main (void){
    int i;
    int *p;
    scanf("%d",&i);
    p=&i;
    printf("conteudo %d",i);
    printf("endereco: %d",p);
}