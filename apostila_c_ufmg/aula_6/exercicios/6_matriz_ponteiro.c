#include <stdio.h>

#define SIZE 20
int main() {
    int x[SIZE][SIZE];
    int *p;
    int id, i, j;

    p = x[0];

    for (id = 0; id < SIZE * SIZE; id++) {
        *p = 0;
        //printf("%d\n", *p);
        p++;
    }

    p = x[0];

    for (id = 1; id <= SIZE * SIZE; id++) {
        *p = id;
        //printf("%d\n", *p);
        p++;
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
} 