#include <stdio.h>
#define GETPAR(A) ((A & 1) ? (1) : (0))

int main () {
    int n = 0;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if(GETPAR(n))
        printf("O numero eh impar!");
    else
        printf("O numero eh par!");
    return 0;
}
