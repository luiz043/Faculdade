#include <stdio.h>
#include <stdlib.h>

int main()
{

    int V1[10];
    int V2[10];
    int V3[5];
    int i, aux1, aux2;

    aux1 = 0;
    aux2 = 0;

    printf("Leitura do Primeiro Vetor: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &V1[i]);
    }

    printf("Leitura do Segundo Vetor: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &V2[i]);

        if (i % 2 != 0)
        {
            V3[aux2] = V1[aux1] * V2[i];
            aux2++;
            aux1 += 2;
        }
    }

    printf("Resultado: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", V3[i]);
    }

    return 0;
}