#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int bissexto (int ano)
{
	if (ano % 400 == 0)
		return 1;
	else
		return 0;
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int ano, x;
	printf ("Informe um ano para saber se ele é bissexto:\n");
	scanf ("%d", &ano);
	x=bissexto (ano);
	if (x==1)
		printf ("O ano %d, é bissexto.", ano);
	else
		printf ("O ano %d, não é bissexto.", ano);
}
