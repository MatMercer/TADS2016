#include <stdio.h>
int quadrado(int x) {
    printf("O quadrado de %d eh %d\n", x, (x*x));
    return(0);
}
int main() {
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("\n");
    quadrado(num);
    return 0;
}