#include <stdio.h>

int add(int x, int y) {
    return(x + y);
}

int main () {
    int soma = add(17, 25);
    printf("Soma = %d\n", soma);
    return(0);
}
