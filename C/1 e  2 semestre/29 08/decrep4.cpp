#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int num, i, soma, t1=0, t2=1;
	printf ("Informe o n�mero que voc� deseja que a sequ�ncia chegue: ");
	scanf ("%d", &num);
	printf ("\nSEQU�NCIA FIBONACCI:\n");
	for (i=0; t1<=num; i++)
	{
		printf ("%d ", t1);
		soma=t1+t2;
		t1=t2;
		t2=soma;
	}
}

