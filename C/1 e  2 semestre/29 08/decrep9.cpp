#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num [15], i, cont=0;
	printf ("Digite 15 números: ");
	for (i=0; i<15; i++)
	{
		scanf ("%d", &num[i]);
		if (num[i]>30)
			cont++;
	}
	printf ("Foram inseridos %d números mairoes que 30.", cont);
}

