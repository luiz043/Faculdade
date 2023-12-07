#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void invertido (char string [])
{
	int i, tam=strlen (string);
	for (i=tam-1; i>=0; i--)
	{
		printf ("%c", string[i]);
	}
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	char string [50];
	printf ("Escreva uma palavra de até 50 caracteres:\n");
	gets (string);
	invertido (string);
}
