#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	char n1[10], n2[10], n3[10], n4[10], n5[10], s1, s2, s3, s4 ,s5;
	int i1, i2, i3, i4, i5;
	printf ("Nome da primeira pessoa: ");
	scanf ("%s", &n1);
	printf ("Idade da primeira pessoa: ");
	scanf ("%d", &i1);
	do
	{
		printf ("Sexo da primeira pessoa (M para masculino e F para feminino): ");
		fflush (stdin);
		scanf ("%c", &s1);
	}while (s1!= 'M' && s1!= 'F');
	system ("cls");
	printf ("Nome da segunda pessoa: ");
	scanf ("%s", &n2);
	printf ("Idade da segunda pessoa: ");
	scanf ("%d", &i2);
	do
	{
		printf ("Sexo da segunda pessoa (M para masculino e F para feminino): ");
		fflush (stdin);
		scanf ("%c", &s2);
	}while (s2!= 'M' && s2!= 'F');
	system ("cls");
	printf ("Nome da terceira pessoa: ");
	scanf ("%s", &n3);
	printf ("Idade da terceira pessoa: ");
	scanf ("%d", &i3);
	do
	{
		printf ("Sexo da terceira pessoa (M para masculino e F para feminino): ");
		fflush (stdin);
		scanf ("%c", &s3);
	}while (s3!= 'M' && s3!= 'F');
	system ("cls");
	printf ("Nome da quarta pessoa: ");
	scanf ("%s", &n4);
	printf ("Idade da quarta pessoa: ");
	scanf ("%d", &i4);
	do
	{
		printf ("Sexo da quarta pessoa (M para masculino e F para feminino): ");
		fflush (stdin);
		scanf ("%c", &s4);
	}while (s4!= 'M' && s4!= 'F');
	system ("cls");
	printf ("Nome da quinta pessoa: ");
	scanf ("%s", &n5);
	printf ("Idade da quinta pessoa: ");
	scanf ("%d", &i5);
	do
	{
		printf ("Sexo da quinta pessoa (M para masculino e F para feminino): ");
		fflush (stdin);
		scanf ("%c", &s5);
	}while (s5!= 'M' && s5!= 'F');
	system ("cls");
	if (i1>=21 && s1=='M')
		printf ("%s tem a idade maior ou igual a 21 anos e é homem.\n", n1);
	if (i2>=21 && s2=='M')
		printf ("%s tem a idade maior ou igual a 21 anos e é homem.\n", n2);
	if (i3>=21 && s3=='M')
		printf ("%s tem a idade maior ou igual a 21 anos e é homem.\n", n3);
	if (i4>=21 && s4=='M')
		printf ("%s tem a idade maior ou igual a 21 anos e é homem.\n", n4);
	if (i5>=21 && s5=='M')
		printf ("%s tem a idade maior ou igual a 21 anos e é homem.", n5);
}
