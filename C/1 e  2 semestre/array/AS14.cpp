#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int V [30], i;
	printf ("Informe os valores do vetor: ");
	for (i=0; i<30; i++)
		scanf ("%d", &V[i]);
	printf ("Vetor invertido:\n");
	for (i=29; i>=0; i--)
		printf ("%d ",V[i]);
}
