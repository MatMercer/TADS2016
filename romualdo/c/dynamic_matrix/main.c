#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

int main() {
    srand((unsigned)time(NULL));
    int max = 2;
    matrix m1 = INIT_MATRIX;
    matrix m2 = INIT_MATRIX;
    matrix m3 = INIT_MATRIX;

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
    multMatrix(m2, m1, &m3);

    printMatrix(m3);

    for(i = 0; i < max; i++) {
        printf("------------------------------------------------------------\n");
        getMatrix(max - i, i + 1, &m1);
        getMatrix(i + 1, max - i, &m2);
        fillRandMatrix(m1, 10);
        fillRandMatrix(m2, 10);
        printMatrix(m1);
        printMatrix(m2);
        printf("Sum:\n");
        sumMatrix(m1, m2, &m3);
        printMatrix(m3);
        printf("Subtraction:\n");
        subMatrix(m1, m2, &m3);
        printMatrix(m3);
        printf("Multiply:\n");
        multMatrix(m1, m2, &m3);
        printMatrix(m3);
    }
    return 0;
}
