#include <stdio.h>
int main() {
    int i;
    int j;
    j = 10;
    int k = 20; /* Esta declaracao de variável não é
    válida, pois não está sendo feita no início do bloco */
    printf("%d\n", k);
    //Duvida: compilando com GCC, ele funciona normalmente, porque nao eh valido?
    return(0);
}