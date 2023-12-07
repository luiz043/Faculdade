#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][5];
    int Vet[5];
    int total, i;
    int lin, col;

    total = 25;

    printf("Iforme os valores da Matriz: ");
    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            scanf("%d", &M[lin][col]);
        }
    }

    printf("Iforme os valores do Vetor: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Vet[i]);
    }

    for (lin = 0; lin < total; lin++)
    {
        for (int col = lin + 1; col < total; col++)
        {
            if (M[0][lin] == Vet[col])
            {
                printf("R: %d \n", Vet[col]);
                break;
            }
        }
    }

    return 0;
}