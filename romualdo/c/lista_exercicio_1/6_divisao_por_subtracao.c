#include <stdio.h>

/**
 * Programa que calcula a divisão de
 * 2 números por subtrações sucessivas.
**/

int main() {
    int num1 = 0;
    int num2 = 0;
    int div = 0;

    printf("Insira dois numeros inteiros exemplo: '5 6'\n");

    scanf("%d %d", &num1, &num2);

    printf("%d / %d ~= ", num1, num2);

    for(div = 0; num1 >= num2; div += 1, num1 -= num2);

    printf("%d\n", div);

    return 0;
}
