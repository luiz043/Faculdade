#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int B [5][5], l, c, soma[5]={0,0,0,0,0}, i=0, maior, aux;
	for (l=0; l<5; l++)
	{
		for (c=0; c<5; c++)
			scanf ("%d", &B[l][c]);
	}
	for (l=0; l<5; l++)
	{
		for (c=0; c<5; c++)
		{
			soma[i]=soma[i]+B[l][c];
		}
		i++;
	}
	maior=soma[0];
	for (i=0; i<5; i++)
	{
		if (soma[i]>maior)
		{
			maior=soma[i];
			aux=i;
		}
	}
	printf ("A linha com a maior soma é a linha %d com o resultado %d.", aux, maior);
}
