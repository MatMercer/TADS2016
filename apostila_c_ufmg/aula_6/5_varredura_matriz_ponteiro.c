#include <stdio.h>

#define collum 50
#define row 50
int main () {
    float matrx [collum][row];
    float *p;
    int count;
    p=matrx[0];
    for (count=0;count<collum*row;count++) {
        *p=0.0;
        p++;
        printf("%p\n", p);
    }
    return(0); 
}