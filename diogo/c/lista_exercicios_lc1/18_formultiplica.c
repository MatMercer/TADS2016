#include <stdio.h>

int main(){
	int i = 1, x = 0, y = 0, mult = 0;

	printf("--- Multiplicação ---\n");
	printf("\nDigite o primeiro número inteiro: ");
	scanf("%d", &x);

	printf("\nDigite o segundo número inteiro: ");
	scanf("%d", &y);

	mult = (x * y);

	printf("\n%d * %d = ", x, y);
	while(i <= y){
		if(i == y){
			printf("%d ", x);
		} else{
			printf("%d + ", x);
		}
	i++;
	}
	printf("= %d\n", mult);
	return 0;
}