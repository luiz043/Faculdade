#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int cod, qtd;
	float preco;
	printf ("C�digo                  Produto                Valor (R$)\n1                       Refrigerante             2,50\n2                       Bolo                     3,50\n3                       Torrada                  4,50\n4                       Picadinho                10,00\n5                       Agua mineral             2,00");
	do
	{
		printf ("\nSelecione sua op��o: ");
		scanf ("%d", &cod);
		switch (cod)
		{
			case 1:
				printf ("Voc� escolheu 'Refrigerante'! Quantas unidades voc� deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(2.50*qtd);
				break;
			case 2:
				printf ("Voc� escolheu 'Bolo'! Quantas unidades voc� deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(3.50*qtd);
				break;
			case 3:
				printf ("Voc� escolheu 'Torrada'! Quantas unidades voc� deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(4.50*qtd);
				break;
			case 4:
				printf ("Voc� escolheu 'Picadinho'! Quantas unidades voc� deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(10.00*qtd);
				break;
			case 5:
				printf ("Voc� escolheu '�gua Mineral'! Quantas unidades voc� deseja? ");
				scanf ("%d", &qtd);
				preco=preco+(2.00*qtd);
				break;
			case 99:
				printf ("Compra finalizada. O pre�o final �: R$ %.2f", preco);
				break;
			default:
				printf ("N�mero invalido.");
				break;
		}
	}while (cod!=99);
}
