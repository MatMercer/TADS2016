#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

void getMatrix(int rows, int columns, matrix *m) {
    if(rows >= 0 && columns >= 0) {
        if(m->columns > 0 && m->rows > 0) {
            freeMatrix(m);
        }

        m->m = calloc(rows, sizeof(int*));
        int i = 0;

        for(i = 0; i < rows; i++) {
            m->m[i] = calloc(columns, sizeof(int));
        }

        m->rows = rows;
        m->columns = columns;
    }
}

void printMatrix(matrix m) {
    int i = 0;
    int j = 0;
    printf("\nMatrix %d * %d\n", m.rows, m.columns);
    printf("┌");
    for(i = 0; i < m.columns + 1; i++) {
        printf("\t");
    }
    printf("┐\n");
    for(i = 0; i < m.rows; i++) {
        for(j = 0; j < m.columns; j++) {
            if(j == 0) {
                printf("│\t");
            }
            printf("%d\t", m.m[i][j]);
            if(m.columns - j == 1) {
                printf("│");
            }
        }
        printf("\n");
    }
    printf("└");
    for(i = 0; i < m.columns + 1; i++) {
        printf("\t");
    }
    printf("┘\n");
}

void freeMatrix(matrix *m) {
    //printf("%d#%d\n", m->m[0][0], m->m[0][1]);
    //printf("Free matrix!\n");
    int i = 0;
    for(i = 0; i < m->rows; i++) {
        //printf("Freeing Adress %p...\n", m->m[i]);
        free(m->m[i]);
    }
    //printf("Freeing Adress %p...\n", m->m);
    free(m->m);

    m->rows = 0;
    m->columns = 0;
}

void zeroMatrix(matrix m) {
    int i = 0;
    int j = 0;

    for(i = 0; i < m.rows; i++) {
        for(j = 0; j < m.columns; j++) {
            m.m[i][j] = 0;
        }
    }
}

void fillRandMatrix(matrix m, int range) {
    int i = 0;
    int j = 0;

    for(i = 0; i < m.rows; i++) {
        for(j = 0; j < m.columns; j++) {
            m.m[i][j] = (rand() % range) + 1;
        }
    }
}

void sumMatrix(matrix x, matrix y, matrix *z) {
    if(x.rows == y.rows && x.columns == y.columns) {
        getMatrix(x.rows, x.columns, z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < x.columns; j++) {
                z->m[i][j] = x.m[i][j] + y.m[i][j];
            }
        }
    }
    else {
        getMatrix(0, 0, z);
    }
}

void subMatrix(matrix x, matrix y, matrix *z) {
    if(x.rows == y.rows && x.columns == y.columns) {
        getMatrix(x.rows, x.columns, z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < x.columns; j++) {
                z->m[i][j] = x.m[i][j] - y.m[i][j];
            }
        }
    }
    else {
        getMatrix(0, 0, z);
    }
}

void transMatrix(matrix x, matrix *y) {
    getMatrix(x.columns, x.rows, y);

    int i = 0;
    int j = 0;

    for(i = 0; i < y->rows; i++) {
        for(j = 0; j < y->columns; j++) {
            y->m[i][j] = x.m[j][i];
        }
    }
}

void multMatrix(matrix x, matrix y, matrix *z) {
    if(x.columns == y.rows) {
        int i = 0;
        int j = 0;
        int w = 0;
        getMatrix(x.rows, y.columns, z);
        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < y.columns; j++) {
                for(w = 0; w < x.columns; w++) {
                    z->m[i][j] += x.m[i][w] * y.m[w][j];
                    //printf("\nw = %d && z[%d][%d] += %d * %d", w, i, j, x.m[i][w], y.m[w][j]);
                }
                //printf("\n");
            }
        }
    }
    else {
        getMatrix(0, 0, z);
    }
}
