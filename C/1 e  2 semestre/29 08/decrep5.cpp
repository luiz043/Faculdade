#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num=0, div=1, cont=0;
	printf ("Informe um número para saber se ele é primo, se quiser parar digite '-1': ");
	do
	{
		div=1;
		cont=0;
		scanf ("%d", &num);
		while (div<num)
		{
			if (num%div==0)
				cont++;
			div++;
			if (cont==3)
			{
				printf ("O número %d não é primo.\n", num);
				break;
			}
		}
		if (cont==2);
			printf ("O número %d é primo.\n", num);
	}while (num!=-1);
}
