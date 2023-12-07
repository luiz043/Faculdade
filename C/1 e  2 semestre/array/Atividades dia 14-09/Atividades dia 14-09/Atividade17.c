#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i, n;

    printf("String: ");
    scanf("%[^\n]s", &s);

    n = strlen(s);

    for (i = 0; i < n; i++)
    {

        if ((s[i] >= 'A') && (s[i] <= 'Z'))
        {

            if ((s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') ||
                (s[i] == 'O') || (s[i] == 'U'))
            {
                s[i] = s[i] + 32;
            }
        }
        else
        {

            if ((s[i] >= 'a') && (s[i] <= 'z'))
            {

                if ((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') &&
                    (s[i] != 'o') && (s[i] != 'u'))
                {
                    s[i] = s[i] - 32;
                }
            }
        }
    }

    printf("\nResultado: %s\n", s);

    return (0);
}