#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int primo (int num)
{
	int div=0;
	for (int i=1; i<=num; i++)
	{
		if (num%i==0)
			div++;
	}
	if (div<=2)
		printf ("O número %d é primo.\n", num);
	else
		printf ("O número %d não é primo.\n", num);
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num;
	printf ("Digite um número para saber se ele é primo, qunado quiser parar digite 0:\n");
	do{
		scanf ("%d", &num);
		primo (num);
	}while (num!=0);
}
