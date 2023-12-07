#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][5];
    int M2[5][5];
    int total;
    int V[25];
    int lin, col, i;

    total = 25;
    i = 0;

    printf("Leitura primeira Matriz: \n");

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &M[lin][col]);
        }
    }

    printf("Leitura segunda Matriz: \n");

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &M2[lin][col]);
        }
    }

    for (lin = 0; lin < total; lin++)
    {
        for (int col = lin + 1; col < total; col++)
        {
            if (M[0][lin] == M2[0][col])
            {
                V[i] = M2[0][col];
                i++;
                break;
            }
        }
    }

    printf("Vetor Resultado: \n");

    for (i = 0; i < 24; i++)
    {
        printf("%d", V[i]);
    }

    return 0;
}