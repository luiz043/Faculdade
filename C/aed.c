#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define MAX_VERTICES 10

typedef struct {
    int matrizAdj[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
    bool dirigido;
    bool valorado;
} Grafo;

void inicializarGrafo(Grafo *grafo, int numVertices) {
    grafo->numVertices = numVertices;
    
    
    printf("Digite os valores da matriz de adjacencia:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &grafo->matrizAdj[i][j]);
        }
    }
}

void adicionarAresta(Grafo *grafo, int vertice1, int vertice2) {
    grafo->matrizAdj[vertice1][vertice2];
}

int calcularGrau(Grafo *grafo, int vertice) {
    int grau = 0;

    for (int i = 0; i < grafo->numVertices; i++) {
        if (grafo->matrizAdj[vertice][i] != 0) {
            grau++;
        }
    }

    return grau;
}

bool ehEuleriano(Grafo *grafo) {
    if (grafo->dirigido) {
        return false;
    }

    for (int i = 0; i < grafo->numVertices; i++) {
        if (calcularGrau(grafo, i) % 2 != 0) {
            return false;
        }
    }

    return true;
}

bool ehSimples(Grafo *grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        for (int j = 0; j < grafo->numVertices; j++) {
            if (i == j && grafo->matrizAdj[i][j] > 0) {
                return false;
            }

            if (grafo->dirigido) {
                if (grafo->matrizAdj[i][j] > 1) {
                    return false;
                }
            } else {
                if (grafo->matrizAdj[i][j] > 2) {
                    return false;
                }
            }
        }
    }

    return true;
}

bool existeCaminhoEntreTresVertices(Grafo *grafo, int vertice1, int vertice2, int vertice3) {
    // Verifica se há arestas entre os pares consecutivos de vértices
    if (grafo->matrizAdj[vertice1][vertice2] > 0 &&
        grafo->matrizAdj[vertice2][vertice3] > 0) {
        // Verifica se há uma aresta de volta ao vértice inicial
        if (grafo->matrizAdj[vertice3][vertice1] > 0) {
            return true; // Existe um caminho completo entre os três vértices
        }
    }
    return false; // Não existe um caminho completo entre os três vértices
}

bool verificaCaminhoCicloEntreTresVertices(Grafo *grafo, int vertice1, int vertice2, int vertice3) {
    // Verifica se há arestas entre os pares consecutivos de vértices
    if (grafo->matrizAdj[vertice1][vertice2] > 0 &&
        grafo->matrizAdj[vertice2][vertice3] > 0) {
        // Verifica se há uma aresta de volta ao vértice inicial
        if (grafo->matrizAdj[vertice3][vertice1] > 0) {
            // Verifica se não existem outras arestas entre os vértices
            if (grafo->matrizAdj[vertice1][vertice3] == 0 &&
                grafo->matrizAdj[vertice2][vertice1] == 0 &&
                grafo->matrizAdj[vertice3][vertice2] == 0) {
                return true; // O caminho entre os vértices forma um ciclo
            }
        }
    }
    return false; // O caminho entre os vértices não forma um ciclo
}

bool ehConexo(Grafo *grafo) {
    bool visitado[MAX_VERTICES] = {false};
    int pilha[MAX_VERTICES];
    int topo = -1;
    int vertice, adjacente;

    // Verificar se existe pelo menos um vértice
    if (grafo->numVertices <= 0) {
        return false;
    }

    // Marcar o primeiro vértice como visitado e empilhá-lo
    visitado[0] = true;
    pilha[++topo] = 0;

    while (topo >= 0) {
        vertice = pilha[topo--];

        // Percorrer os vértices adjacentes ao vértice atual
        for (adjacente = 0; adjacente < grafo->numVertices; adjacente++) {
            if (grafo->matrizAdj[vertice][adjacente] > 0 && !visitado[adjacente]) {
                // Marcar o vértice adjacente como visitado e empilhá-lo
                visitado[adjacente] = true;
                pilha[++topo] = adjacente;
            }
        }
    }

    // Verificar se todos os vértices foram visitados
    for (int i = 0; i < grafo->numVertices; i++) {
        if (!visitado[i]) {
            return false;
        }
    }

    return true;
}

int main() {
	setlocale(LC_ALL, "portuguese");
    Grafo grafo;
    int numVertices, opcao;

    printf("Digite o número de vértices do grafo (limite de %d vértices): ", MAX_VERTICES);
    scanf("%d", &numVertices);


    inicializarGrafo(&grafo, numVertices);
    printf("Grafo criado com sucesso!\n");

    do {
        printf("\nEscolha uma opção:\n");
        printf("1) Calcular grau de cada vértice\n");
        printf("2) Verificar se o grafo é euleriano\n");
        printf("3) Verificar se o grafo é simples ou multigrafo\n");
        printf("4) Verificar se existe um caminho entre três vértices\n");
        printf("5) Verificar se o caminho entre três vértices é um ciclo\n");
        printf("6) Verificar se o grafo é conexo\n");
        printf("0) Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                printf("\nGrau de cada vértice:\n");
                for (int i = 0; i < grafo.numVertices; i++) {
                    printf("Vértice %d: %d\n", i, calcularGrau(&grafo, i));
                }
                break;
            }
            case 2: {
                if (ehEuleriano(&grafo)) {
                    printf("\nO grafo é euleriano.\n");
                } else {
                    printf("\nO grafo não é euleriano.\n");
                }
                break;
            }
            case 3: {
                if (ehSimples(&grafo)) {
                    printf("\nO grafo é simples.\n");
                } else {
                    printf("\nO grafo é multigrafo.\n");
                }
                break;
            }
            case 4: {
                int vertice1, vertice2, vertice3;
                printf("\nDigite três vértices separados por espaço: ");
                scanf("%d %d %d", &vertice1, &vertice2, &vertice3);

                if (existeCaminhoEntreTresVertices(&grafo, vertice1, vertice2, vertice3)) {
                    printf("Existe um caminho entre os vértices %d, %d e %d.\n", vertice1, vertice2, vertice3);
                } else {
                    printf("Não existe um caminho entre os vértices %d, %d e %d.\n", vertice1, vertice2, vertice3);
                }
                break;
            }
            case 5: {
                int vertice1, vertice2, vertice3;
                printf("\nDigite três vértices separados por espaço: ");
                scanf("%d %d %d", &vertice1, &vertice2, &vertice3);

                if (verificaCaminhoCicloEntreTresVertices(&grafo, vertice1, vertice2, vertice3)) {
                    printf("O caminho entre os vértices %d, %d e %d é um ciclo.\n", vertice1, vertice2, vertice3);
                } else {
                    printf("O caminho entre os vértices %d, %d e %d não é um ciclo.\n", vertice1, vertice2, vertice3);
                }
                break;
            }
            case 6: {
                if (ehConexo(&grafo)) {
                    printf("\nO grafo é conexo.\n");
                } else {
                    printf("\nO grafo não é conexo.\n");
                }
                break;
            }
            case 0: {
                printf("Encerrando o programa...\n");
                break;
            }
            default: {
                printf("Opção inválida. Digite novamente.\n");
                break;
            }
        }

    } while (opcao != 0);

    return 0;
}
