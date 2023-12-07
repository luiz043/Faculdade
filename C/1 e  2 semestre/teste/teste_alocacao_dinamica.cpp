#include <stdio.h>
#include <stdlib.h>

/*

Aloca um bloco de mem�ria de tamanho "x" bytes retornando um ponteiro para o in�cio do bloco
O conte�do n�o � inicializado, permanecendo com valores indeterminados
Se "x" for 0, o valor retornado depende da implementa��o da biblioteca

O tipo do ponteiro � sempre void*, que pode ser convertido para o tipo desejado de ponteiro de dados
Se a fun��o falhar em alocar o bloco de mem�ria, ela retorna um ponteiro nulo

Prot�tipo da fun��o
void *malloc(size_t numero_de_bytes);

*/

main(){
	
	int *valorPtr;
	int **matNumPtr;
	int **matNumPtr2;
	
	int num_qnt, linha, coluna, i, j, valor_inserir;
	
	printf ("\n-------- Exemplo de vetor e matriz n x n -------------\n");
	printf ("--------------------------------------------------------\n");
	printf ("\nDigite a quantidade de linhas/colunas (matriz n x n) que deseja criar\n");
	scanf ("%d", &num_qnt);
	
	//vetor alocado dinamicamente
	valorPtr = (int*) malloc (num_qnt * sizeof(int));
	
	//valores inseridos pelo usu�rio no vetor alocado dinamicamente
	for (i = 0; i < num_qnt; i++){
		printf ("\nDigite um valor para 'valorPtr': ");
		scanf ("%d", &valor_inserir);
		valorPtr[i] = valor_inserir;
	}
	
	printf ("\nValores inseridos\n");
	for (i = 0; i < num_qnt; i++){
		printf ("%d - ", valorPtr[i]);
	}
	
	printf ("\n");
	
	//matriz alocada dinamicamente com quantidades iguais de linhas e colunas
	matNumPtr = (int**) malloc (num_qnt * sizeof(int*));
	for (i = 0; i < num_qnt; i++){
		matNumPtr[i] = (int*) malloc (num_qnt * sizeof(int));
	}
	
	//inser��o de n�meros na matriz alocada dinamicamente com quantidade de linhas e colunas iguais
	for (i = 0; i < num_qnt; i++){
		for (j = 0; j < num_qnt; j++){
			printf ("\n\nDigite o valor para inserir em 'matNumPtr': ");
			scanf ("%d", &valor_inserir);
			matNumPtr[i][j] = valor_inserir;
		}
	}
	
	printf ("\nValores inseridos\n");
	for (i = 0; i < num_qnt; i++){
		printf ("\n");
		for (j = 0; j < num_qnt; j++){
			printf ("%d - ", matNumPtr[i][j]);
		}
	}
	
	printf ("\n-------- Exemplo de vetor e matriz com  linhas e colunas ditadas pelo usu�rio linha x coluna -------------\n");
	printf ("------------------------------------------------------------------------------------------------------------\n");
	
	printf ("\nDigite a quantidade de linhas: ");
	scanf ("%d", &linha);
	printf ("\nDigite a quantidade de colunas: ");
	scanf ("%d", &coluna);
	
	//matriz alocada dinamicamente com quantidades diferentes de linhas e colunas; ditadas pelo usu�rio
	matNumPtr2 = (int**) malloc (linha * sizeof(int*));
	for (i = 0; i < linha; i++){
		matNumPtr2[i] = (int*) malloc (coluna * sizeof(int));
	}
	
	//inser��o de n�meros na matriz alocada dinamicamente com quantidade de linhas e colunas iguais
	for (i = 0; i < num_qnt; i++){
		for (j = 0; j < num_qnt; j++){
			matNumPtr2[i][j] = scanf ("%d", &valor_inserir);
		}
	}
	
	for (i = 0; i < num_qnt; i++){
		printf ("\n");
		for (j = 0; j < num_qnt; j++){
			printf ("%d - ", matNumPtr2[i][j]);
		}
	}
	
	return 0;
}
