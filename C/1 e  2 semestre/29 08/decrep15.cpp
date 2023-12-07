#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int cod, qtd;
	float preco;
	printf ("Código                  Produto                Valor (R$)\n1                       Refrigerante             2,50\n2                       Bolo                     3,50\n3                       Torrada                  4,50\n4                       Picadinho                10,00\n5                       Agua mineral             2,00");
	do
	{
		printf ("\nSelecione sua opção: ");
		scanf ("%d", &cod);
		switch (cod)
		{
			case 1:
				printf ("Você escolheu 'Refrigerante'! Quantas unidades você deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(2.50*qtd);
				break;
			case 2:
				printf ("Você escolheu 'Bolo'! Quantas unidades você deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(3.50*qtd);
				break;
			case 3:
				printf ("Você escolheu 'Torrada'! Quantas unidades você deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(4.50*qtd);
				break;
			case 4:
				printf ("Você escolheu 'Picadinho'! Quantas unidades você deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(10.00*qtd);
				break;
			case 5:
				printf ("Você escolheu 'Água Mineral'! Quantas unidades você deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(2.00*qtd);
				break;
			case 99:
				printf ("Compra finalizada. O preço final é: R$ %.2f", preco);
				break;
			default:
				printf ("Número invalido.");
				break;
		}
	}while (cod!=99);
}
