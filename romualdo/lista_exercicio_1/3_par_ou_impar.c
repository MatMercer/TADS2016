#include <stdio.h>

/**
 * Programa que diz se um número é ímpar ou par
**/

int main() {
    int n = 0;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    if(n & 1) {
        printf("\nEsse número é ímpar!\n");
    }
    else {
        printf("\nEsse número é par!\n");
    }
}
