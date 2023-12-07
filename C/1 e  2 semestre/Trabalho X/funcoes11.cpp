#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int saci (int a[], int b[])
{
	int i, j, tama=sizeof(a)+1, tamb=sizeof(b)+1;
	for (i=0; i<=tama; i++)
	{
		for (j=0; j<=tamb; j++)
		{
			if (a[i]==a[j])
			{
				printf ("O número %d do vetor A está presente no vetor B.\n");
			}
		}
	}
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int a[10], b[10], i;
	printf ("Informe os números do primeiro vetor:\n");
	for (i=0; i<10; i++)
		scanf ("%d", &a[i]);
	printf ("Informe os números do segundo vetor:\n");
	for (i=0; i<10; i++)
		scanf ("%d", &b[i]);
	system("cls");
	saci (a, b);
}
