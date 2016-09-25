#include <stdio.h>
#include <stdlib.h>

typedef struct matrizes {
    int **m;
    int linhas;
    int colunas;
} matriz;

void getMatriz(int linhas, int colunas, matriz *m);
void printMatriz(matriz m);
void freeMatriz(matriz *m);
void zeroMatriz(matriz m);


int main() {
    matriz m;
    int i = 0;

    for(i = 0; i < 10; i++) {
        getMatriz(10 - i, i + 1, &m);
        printMatriz(m);
        printf("----------------------------------------\n");
    }
    return 0;
}

void getMatriz(int linhas, int colunas, matriz *m) {
    printf("%d*%d\n", linhas, colunas);

    if(m->colunas > 0 || m->linhas > 0) {
        freeMatriz(m);
    }

    m->m = calloc(linhas, sizeof(int*));
    int i = 0;

    for(i = 0; i < linhas; i++) {
        m->m[i] = calloc(colunas, sizeof(int));
    }

    m->linhas = linhas;
    m->colunas = colunas;
    //zeroMatriz(*m);
}

void printMatriz(matriz m) {
    int i = 0;
    int j = 0;

    for(i = 0; i < m.linhas; i++) {
        for(j = 0; j < m.colunas; j++) {
            printf("%d\t", m.m[i][j]);
        }
        printf("\n");
    }
}

void freeMatriz(matriz *m) {
    printf("Free matriz!\n");
    int i = 0;
    for(i = 0; i < m->linhas; i++) {
        printf("Freeing Adress %p...\n", m->m[i]);
        free(m->m[i]); 
    }
    printf("Freeing Adress %p...\n", m->m);
    free(m->m);

    m->linhas = 0;
    m->colunas = 0;
}

void zeroMatriz(matriz m) {
    int i = 0;
    int j = 0;

    for(i = 0; i < m.linhas; i++) {
        for(j = 0; j < m.colunas; j++) {
            m.m[i][j] = 0;
        }
    }    
}
