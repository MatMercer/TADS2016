#include <stdio.h>
#define max(A,B) ((A>B) ? (A):(B))
#define min(A,B) ((A<B) ? (A):(B))
#define PRINT(i) printf(" %d \n", i)
#define HAH "Isso sera deletado"
#define TEST "it"

#ifdef HAH
    #define X 62
#endif

#ifdef YU
#elif UY
#else
    #define W "%d|%d"
#endif

#undef HAH

#ifndef HAH
    #define Y 23
#endif

int main () {
    int i = 4;
    int j = 2;
    int x = max(i, j); //essa sentença ira ser substituida
    int y = min(i, j); //por x = ((i) > (j) ? (i):(j));

    PRINT(Y + x + y + X); //essa sentença sera substituida por 
                          //printf(" %d \n", (23 + x + y + 62));
    printf(W, x, y);
    return 0;
}
