#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num, i, soma, t1=0, t2=1;
	printf ("Informe os dois primeiros números da sequencia: ");
	scanf ("%d", &t1);
	scanf ("%d", &t2);
	printf ("\nSEQUÊNCIA FIBONACCI:\n");
	for (i=0; i<20; i++)
	{
		printf ("%d ", t1);
		soma=t1+t2;
		t1=t2;
		t2=soma;
	}
}
