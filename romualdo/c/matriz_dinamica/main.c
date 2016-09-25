#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct matrizes {
    int **m;
    int linhas;
    int colunas;
} matriz;

void getMatriz(int linhas, int colunas, matriz *m);
void printMatriz(matriz m);
void freeMatriz(matriz *m);
void zeroMatriz(matriz m);
void fillRandMatriz(matriz m, int range);
matriz sumMatriz(matriz x, matriz y);
matriz subMatriz(matriz x, matriz y);
matriz multMatriz(matriz x, matriz y);
matriz transMatriz(matriz x);
matriz initMatriz();
int validMatriz(matriz m);

int main() {
    srand((unsigned)time(NULL));
    int max = 5;
    matriz m1 = initMatriz();
    matriz m2 = initMatriz();

    int i = 0;

    getMatriz(2, 2, &m1);

    getMatriz(3, 2, &m2);

    m1.m[0][0] = 3;
    m1.m[0][1] = 1;
    m1.m[1][0] = 6;
    m1.m[1][1] = 2;

    m2.m[0][0] = 3;
    m2.m[0][1] = 2;
    m2.m[1][0] = 5;
    m2.m[1][1] = 0;
    m2.m[2][0] = 1;
    m2.m[2][1] = 4;

    printMatriz(m2);
    printMatriz(m1);

    printMatriz(multMatriz(m2, m1));

    for(i = 0; i < max; i++) {
        printf("------------------------------------------------------------\n");
        getMatriz(max - i, i + 1, &m1);
        getMatriz(max - i, i + 1, &m2);
        fillRandMatriz(m1, 10);
        fillRandMatriz(m2, 10);
        printMatriz(m1);
        printMatriz(m2);
        printf("Soma:\n");
        printMatriz(sumMatriz(m1, m2));
        printf("Subtração:\n");
        printMatriz(subMatriz(m1, m2));
        printf("Multiplicação:\n");
        printMatriz(multMatriz(m1, m2));
    }
    return 0;
}

matriz initMatriz() {
    matriz m;

    m.linhas = 0;
    m.colunas = 0;
    return m;
}

void getMatriz(int linhas, int colunas, matriz *m) {
    if(linhas > 0 && colunas > 0) {
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
    }
}

void printMatriz(matriz m) {
    int i = 0;
    int j = 0;
    printf("\nMatriz %d * %d\n", m.linhas, m.colunas);
    printf("┌");
    for(i = 0; i < m.colunas + 1; i++) {
        printf("\t");
    }
    printf("┐\n");
    for(i = 0; i < m.linhas; i++) {
        for(j = 0; j < m.colunas; j++) {
            if(j == 0) {
                printf("│\t");
            }
            printf("%d\t", m.m[i][j]);
            if(m.colunas - j == 1) {
                printf("│");
            }
        }
        printf("\n");
    }
    printf("└");
    for(i = 0; i < m.colunas + 1; i++) {
        printf("\t");
    }
    printf("┘\n");
}

void freeMatriz(matriz *m) {
    //printf("Free matriz!\n");
    int i = 0;
    for(i = 0; i < m->linhas; i++) {
        //printf("Freeing Adress %p...\n", m->m[i]);
        free(m->m[i]);
    }
    //printf("Freeing Adress %p...\n", m->m);
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

void fillRandMatriz(matriz m, int range) {
    int i = 0;
    int j = 0;

    for(i = 0; i < m.linhas; i++) {
        for(j = 0; j < m.colunas; j++) {
            m.m[i][j] = (rand() % range) + 1;
        }
    }
}

matriz sumMatriz(matriz x, matriz y) {
    matriz z = initMatriz();

    if(x.linhas == y.linhas && x.colunas == y.colunas) {
        getMatriz(x.linhas, x.colunas, &z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.linhas; i++) {
            for(j = 0; j < x.colunas; j++) {
                z.m[i][j] = x.m[i][j] + y.m[i][j];
            }
        }
    }

    return z;
}

matriz subMatriz(matriz x, matriz y) {
    matriz z = initMatriz();

    if(x.linhas == y.linhas && x.colunas == y.colunas) {
        getMatriz(x.linhas, x.colunas, &z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.linhas; i++) {
            for(j = 0; j < x.colunas; j++) {
                z.m[i][j] = x.m[i][j] - y.m[i][j];
            }
        }
    }

    return z;
}

matriz transMatriz(matriz x) {
    matriz y = initMatriz();


    getMatriz(x.colunas, x.linhas, &y);

    int i = 0;
    int j = 0;

    for(i = 0; i < y.linhas; i++) {
        for(j = 0; j < y.colunas; j++) {
            y.m[i][j] = x.m[j][i];
        }
    }

    return y;
}

int validMatriz(matriz m) {
    if(m.linhas >= 0 && m.colunas >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

matriz multMatriz(matriz x, matriz y) {
    matriz z = initMatriz();

    int i = 0;
    int j = 0;
    int w = 0;

    //printf("%d:%d == %d:%d ?", x.linhas, x.colunas, y.linhas, y.colunas);

    if(x.colunas == y.linhas) {
        getMatriz(x.linhas, y.colunas, &z);
        for(i = 0; i < x.linhas; i++) {
            for(j = 0; j < y.colunas; j++) {
                for(w = 0; w < x.colunas; w++) {
                    z.m[i][j] += x.m[i][w] * y.m[w][j];
                    //printf("\nw = %d && z[%d][%d] += %d * %d", w, i, j, x.m[i][w], y.m[w][j]);
                }
                //printf("\n");
            }
        }
    }

    return z;
}
