#include <stdio.h>
#define max(A,B) ((A>B) ? (A):(B))
#define min(A,B) ((A<B) ? (A):(B))
#define PRINT(i) printf(" %d \n", i)
#define HAH "Isso sera deletado"
#undef HAH

int main () {
    int i = 4;
    int j = 2;
    int x = max(i, j); //essa sentença ira ser substituida
    int y = min(i, j); //por x = ((i) > (j) ? (i):(j));

    PRINT(x + y); //essa sentença sera substituida por 
                  //printf(" %d \n", (x + y));


    printf("%d|%d", x, y);
    return 0;
}
