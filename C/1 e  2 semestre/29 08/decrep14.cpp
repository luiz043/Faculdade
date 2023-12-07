#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int arvores [100], balas=20, i, x=1, esconderijo;
	for (i=0; i<100; i++)
	{
		arvores[i]=x;
		x++;
	}
	printf ("O jogador 1 será o Marciano! Escolha em qual das cem árvores você irá se esconder? ");
	scanf ("%d", &esconderijo);
	system ("cls");
	while (balas>0)
	{
		printf ("O jogador 2 têm %d balas, escolha uma das cem árvores para atirar: ", balas);
		scanf ("%d", &x);
		balas--;
		if (arvores[x-1]==arvores[esconderijo-1])
		{
			system ("cls");
			printf ("AAAAAHHHHHHHHHHHHH!!!!\nO JOGADOR 2 VENCEU!!!");
			return 0;
		}
		else
		{
			if (arvores[x-1]<arvores[esconderijo-1])
				printf ("Humano burro!!! Estou mais para a direita.\n");
			else
				printf ("Humano burro!!! Estou mais para a esquerda.\n");
		}
	}
	system ("cls");
	printf ("O marciano escapou.\nO JOGADOR 1 VENCEU!!!");
	return 0;
}
