#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void maiorstring (char string1[], char string2[])
{
	int tam1=strlen (string1), tam2=strlen (string2);
	if (tam1>tam2)
		printf ("A string 1 é maior que a string 2.");
	else if (tam1<tam2)
		printf ("A string 2 é maior que a string 1.");
	else if (tam1==tam2)
		printf ("As duas strings são do mesmo tamanho.");
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	char string1[50], string2[50];
	printf ("Escreva uma frase: ");
	gets (string1);
	printf ("Escreva outra frase: ");
	gets (string2);
	maiorstring (string1, string2);
}

