#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int area (int b, int h)
{
	printf ("A �rea do tri�ngulo ret�ngulo �: %d cm�.", (b*h)/2);
}
int main (void)
{
	int b, h;
	setlocale (LC_ALL, "portuguese");
	printf ("Informe a base e a altura do tri�ngulo ret�ngulo, respectivamente:\n");
	scanf ("%d%d", &b, &h);
	area (b, h);
}
