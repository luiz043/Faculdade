#include <stdio.h>
#include <stdlib.h>

int main()
{

    char S[50];
    char O;
    int i, a, max;

    printf("Defina o tamanho da String -> max(50): \n");
    scanf("%d", &max);

    printf("Insira o Caractere: \n");
    fflush(stdin);
    O = getchar();

    printf("Leitura String: \n");
    fflush(stdin);
    gets(S);

    for (i = 0; i < max; i++)
    {
        if (S[i] == O)
        {
            S[i] = '*';
        }
    }

    for (i = 0; S[i] != '\0'; i++)
    {
        printf("%c", S[i]);
    }

    return 0;
}