#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

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
        getMatrix(i + 1, max - i, &m2);
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
