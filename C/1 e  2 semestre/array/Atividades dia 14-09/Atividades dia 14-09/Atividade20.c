#include <stdio.h>
#include <stdlib.h>


int main()
{
    char s1[50];
    char s2[50];
    char r[50];
    int flag;
    int cont;
    int i;

    cont = 0;
    flag = 0;

    printf("Leitura v1: \n");
    fflush(stdin);
    gets(s1);

    printf("Leitura v2: \n");
    fflush(stdin);
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
        {
            r[cont] = s2[i];
            flag++;
            cont++;
        }
    }

    if (flag > 0)
    {

        printf("A String 2 Estah inserida na String 1: \n");

        for (cont = 0; r[cont] != '\0'; cont++)
        {
            printf("%c", r[cont]);
        }

       
        return 0;
    }
}