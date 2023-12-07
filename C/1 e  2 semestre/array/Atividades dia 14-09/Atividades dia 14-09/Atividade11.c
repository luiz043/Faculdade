#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat[3][3], l, c;
    int somalin, somacol;
    int flag;

    flag = 0;
    somacol = 0;
    somalin = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &Mat[l][c]);
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (Mat[l][c] > 1)
            {
                flag++;
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            somalin += Mat[l][c];
        }
    }

    for (c = 0; c < 3; c++)
    {
        for (l = 0; l < 3; l++)
        {
            somacol += Mat[l][c];
        }
    }

    if (flag != 0 || somalin > 3 || somacol > 3)
    {
        printf("Nao eh matriz permutacao\n");
    }
    else
    {
        printf("matriz permutacao \n");
    }

    return 0;
}