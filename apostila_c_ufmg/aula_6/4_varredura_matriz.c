#include <stdio.h>

int main () {
    float matrx [50][50];
    int i,j;
    for (i=0;i<50;i++)
        for (j=0;j<50;j++)
            printf("%d | %d\n", j, i);
            matrx[i][j]=0.0;
        return(0);
}