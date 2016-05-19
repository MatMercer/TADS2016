#include <stdio.h>

#define TAMX 10
#define TAMY 10
#define CIRCULAR_SHIFT(X, N) X = (X << N) | (X >> (TAMY - 1))

typedef struct bitAloc {
    unsigned long b:TAMY; 
} bits; 
void printVetor(int *v);

int main() {
    int v[TAMX][TAMY];
    int i = 0;
    int j = 0;

    for(i = 0; i < TAMX; i++) {
        for(j = 0; j < TAMY; j++) {
            if(i % 2) 
                v[i][j] = (i * j) / (j + i);
            else
                v[i][j] = j * i;
        }
    }
    
    for(i = 0; i < TAMX; i++) {
        for(j = 0; j < TAMY; j++) {
            printf("%4d, ", v[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printVetor(*v);

    return 0;
}

void printVetor(int *v) {
    int i = 0;
    bits b;
    b.b = 0x2;
    
    for(i = 0; i < TAMX * TAMY; i++) {
        printf("%4d, ", *(v));
        v++;
        if(b.b & 1) {   
            printf("\n");
        }
        CIRCULAR_SHIFT(b.b, 1);
    }
}
