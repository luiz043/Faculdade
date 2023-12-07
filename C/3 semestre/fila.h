#include <stdio.h>
#include <stdlib.h>
#define TAMP 5 

typedef struct {
    int memoria[TAMP];
    int topo;
} fila;

void fila_init(fila *p) {
    p->topo = 0;
}

void enfileira(fila *p, int elemento) {
    if (p->topo != TAMP) {
        p->memoria[p->topo] = elemento;
        p->topo++;
    }
}

void desenfileira(fila *p) {
    if (p->topo != 0) {
        p->topo--;
    }
}

int fila_cheia(fila *p) {
    if (p->topo == TAMP) {
        return 1;
    }
    return 0;
}

int fila_vazia(fila *p) {
    if (p->topo == 0) {
        return 1;
    }
    return 0;
}

int topo_fila(fila *p) {
    return (p->memoria[p->topo-1]);
}
