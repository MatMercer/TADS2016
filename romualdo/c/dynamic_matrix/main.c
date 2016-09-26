#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct matrixes {
    int **m;
    int rows;
    int columns;
} matrix;

void getMatrix(int linhas, int colunas, matrix *m);
void printMatrix(matrix m);
void freeMatrix(matrix *m);
void zeroMatrix(matrix m);
void fillRandMatrix(matrix m, int range);
matrix sumMatrix(matrix x, matrix y);
matrix subMatrix(matrix x, matrix y);
matrix multMatrix(matrix x, matrix y);
matrix transMatrix(matrix x);
matrix initMatrix();
int validMatrix(matrix m);

int main() {
    srand((unsigned)time(NULL));
    int max = 5;
    matrix m1 = initMatrix();
    matrix m2 = initMatrix();

    int i = 0;

    getMatrix(2, 2, &m1);

    getMatrix(3, 2, &m2);

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

    printMatrix(m2);
    printMatrix(m1);

    printMatrix(multMatrix(m2, m1));

    for(i = 0; i < max; i++) {
        printf("------------------------------------------------------------\n");
        getMatrix(max - i, i + 1, &m1);
        getMatrix(max - i, i + 1, &m2);
        fillRandMatrix(m1, 10);
        fillRandMatrix(m2, 10);
        printMatrix(m1);
        printMatrix(m2);
        printf("Sum:\n");
        printMatrix(sumMatrix(m1, m2));
        printf("Subtraction:\n");
        printMatrix(subMatrix(m1, m2));
        printf("Multiply:\n");
        printMatrix(multMatrix(m1, m2));
    }
    return 0;
}

matrix initMatrix() {
    matrix m;

    m.rows = 0;
    m.columns = 0;
    return m;
}

void getMatrix(int rows, int columns, matrix *m) {
    if(rows > 0 && columns > 0) {
        if(m->columns > 0 || m->rows > 0) {
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

matrix sumMatrix(matrix x, matrix y) {
    matrix z = initMatrix();

    if(x.rows == y.rows && x.columns == y.columns) {
        getMatrix(x.rows, x.columns, &z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < x.columns; j++) {
                z.m[i][j] = x.m[i][j] + y.m[i][j];
            }
        }
    }

    return z;
}

matrix subMatrix(matrix x, matrix y) {
    matrix z = initMatrix();

    if(x.rows == y.rows && x.columns == y.columns) {
        getMatrix(x.rows, x.columns, &z);

        int i = 0;
        int j = 0;

        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < x.columns; j++) {
                z.m[i][j] = x.m[i][j] - y.m[i][j];
            }
        }
    }

    return z;
}

matrix transMatrix(matrix x) {
    matrix y = initMatrix();


    getMatrix(x.columns, x.rows, &y);

    int i = 0;
    int j = 0;

    for(i = 0; i < y.rows; i++) {
        for(j = 0; j < y.columns; j++) {
            y.m[i][j] = x.m[j][i];
        }
    }

    return y;
}

int validMatrix(matrix m) {
    if(m.rows >= 0 && m.columns >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

matrix multMatrix(matrix x, matrix y) {
    matrix z = initMatrix();

    int i = 0;
    int j = 0;
    int w = 0;

    //printf("%d:%d == %d:%d ?", x.rows, x.columns, y.rows, y.columns);

    if(x.columns == y.rows) {
        getMatrix(x.rows, y.columns, &z);
        for(i = 0; i < x.rows; i++) {
            for(j = 0; j < y.columns; j++) {
                for(w = 0; w < x.columns; w++) {
                    z.m[i][j] += x.m[i][w] * y.m[w][j];
                    //printf("\nw = %d && z[%d][%d] += %d * %d", w, i, j, x.m[i][w], y.m[w][j]);
                }
                //printf("\n");
            }
        }
    }

    return z;
}
