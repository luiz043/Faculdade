#include <stdio.h>
#include <stdlib.h>

int main()
{

    int R[4][5];
    int lin, col;
    int maior, posL, posC;

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &R[lin][col]);
        }
    }

    maior = R[0][0];

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            if (R[lin][col] > maior)
            {
                maior = R[lin][col];
                posL = lin;
                posC = col;
            }
        }
    }

    printf("O maior elemento da matriz eh: %d e esta na posicao %d , %d", maior, posL, posC);

    return 0;
}