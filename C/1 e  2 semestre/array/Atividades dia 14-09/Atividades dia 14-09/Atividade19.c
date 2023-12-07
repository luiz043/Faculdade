#include <stdio.h>
#include <stdlib.h>

int main()
{

    char S[50];
    int i, a, max;
    int rep;

    rep = 0;

    printf("Defina o tamanho da String -> max(50): \n");
    scanf("%d", &max);

    printf("Leitura String: \n");
    fflush(stdin);
    gets(S);

    for (i = 0; i < max; i++)
    {
        for (a = i + 1; a < max; a++)
        {
            if (S[i] == S[a])
            {
                rep++;
            }
        }
    }

    printf("Quantidade de letras repetidas: %d \n", rep);

    return 0;
}