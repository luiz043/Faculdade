#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5];
    int lin, col;
    int S[5];
    int soma, i;

    soma = 0;
    i = 0;

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &A[lin][col]);
        }
    }

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            if (lin == col)
            {
                soma += A[lin][col];
                S[i] = A[lin][col];
                i++;
            }
        }
    }

    printf("Soma da diagonal principal: %d \n", soma);

    printf("Vetor Com os elementos da diagonal principal: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d", S[i]);
    }

    return 0;
}
