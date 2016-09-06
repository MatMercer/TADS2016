#include <stdio.h>

/**
 * Programa que calcula a multiplicação de
 * 2 números por somas sucessivas.
**/

int main() {
    int num1 = 0;
    int num2 = 0;
    int mult = 0;

    printf("Insira dois numeros inteiros exemplo: '5 6'\n");

    scanf("%d %d", &num1, &num2);

    printf("%d * %d = ", num1, num2);
    
    for(num2 > 0; num2 > 0; num2 -= 1, mult += num1);

    printf("%d\n", mult);

    return 0;
}
