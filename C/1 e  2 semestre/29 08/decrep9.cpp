#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num [15], i, cont=0;
	printf ("Digite 15 n�meros: ");
	for (i=0; i<15; i++)
	{
		scanf ("%d", &num[i]);
		if (num[i]>30)
			cont++;
	}
	printf ("Foram inseridos %d n�meros mairoes que 30.", cont);
}

