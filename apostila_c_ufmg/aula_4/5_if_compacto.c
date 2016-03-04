#include <stdio.h>
int main() {
	int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    (num & 1) ? printf("%d eh impar.\n", num): printf("%d eh par.\n", num);
    return(0);
}