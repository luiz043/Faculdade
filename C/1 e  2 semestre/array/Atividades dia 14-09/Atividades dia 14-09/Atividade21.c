#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont;
    char v1[7];
    char v2[7];
    char u[14];

    cont = 0;

    printf("Leitura v1: \n");
    gets(v1);

    fflush(stdin);
    printf("Leitura v2: \n");
    gets(v2);

    for (i = 0; i < 6; i++)
    {
        u[i] = v1[i];
    }

    for (i = 6; i < 14; i++)
    {
        u[i] = v2[cont];
        cont++;
    }

    for (i = 0; u[i] != '\0'; i++)
    {
    }

    for (i = i; i >= 0; i--)
    {
        printf("%c", u[i]);
    }

    
    return 0;
}