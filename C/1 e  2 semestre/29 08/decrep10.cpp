#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num[20], i, soma=0, cont=0;
	printf ("Informe os 20 n�meros: ");
	for (i=0; i<20; i++)
	{
		scanf ("%d", &num[i]);
		if (num[i]>=0)
			soma=soma+num[i];
		else
			cont++;
	}
	printf ("A soma dos n�meros positivos � %d e o n�meros de negativos � %d.", soma, cont);
}
