#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num[20], i, soma=0, vezes=1;
	printf ("Informe os 20 n�meros: ");
	for (i=0; i<20; i++)
	{
		scanf ("%d", &num[i]);
		if (num[i]%2==0)
			soma=soma+num[i];
		else
			vezes=vezes*num[i];
	}
	printf ("A soma dos n�meros pares � %d e o produto dos n�meros impares � %d.", soma, vezes);
}
