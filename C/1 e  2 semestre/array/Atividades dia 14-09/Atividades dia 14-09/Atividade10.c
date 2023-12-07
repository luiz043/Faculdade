#include <stdio.h>
#include <stdlib.h>

int main()
{

    int l, c, soma, M[5][5], somaLinhas[5], somaColunas[5];

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            scanf("%d", &M[l][c]);
        }
    }

    for (l = 0; l < 5; l++)
    {
        soma = 0;
        for (c = 0; c < 5; c++)
        {
            soma += M[l][c];
        }
        somaLinhas[l] = soma;
    }

    for (c = 0; c < 5; c++)
    {
        soma = 0;
        for (l = 0; l < 5; l++)
        {
            soma += M[l][c];
        }
        somaColunas[c] = soma;
    }

    printf("\nMatriz:\n");
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%2d ", M[l][c]);
        }
        printf("\n");
    }

    printf("\n\nVetor com a soma das linhas:\n");
    for (l = 0; l < 5; l++)
    {
        printf("Linha %d: %d\n", l, somaLinhas[l]);
    }

    printf("\n\nVetor com a soma das colunas:\n");
    for (c = 0; c < 5; c++)
    {
        printf("Coluna %d: %d\n", c, somaColunas[c]);
    }

    return 0;
}