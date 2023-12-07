#include <stdio.h>
#include <stdlib.h>
    typedef struct pessoa{
        char nome[20];
        int idade;
        char endereco[20];
    };
    int main (){
        struct pessoa cliente ;
        gets(cliente.nome);
        gets(cliente.endereco);
        printf("ler idade :");
        scanf("%d",&cliente.idade);
        printf("%d\n",cliente.idade);
        puts(cliente.nome);
        puts(cliente.endereco);
}