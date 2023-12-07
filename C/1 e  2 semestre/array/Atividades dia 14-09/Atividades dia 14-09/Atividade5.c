#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[10][5];
    int lin, col, soma;

    soma = 0;

    for (lin = 0; lin < 10; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &M[lin][col]);
        }
    }

    for (lin = 0; lin < 10; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            soma = soma + M[lin][col];
        }
    }


    printf("Soma da matriz: %d", soma);

    return 0;
}