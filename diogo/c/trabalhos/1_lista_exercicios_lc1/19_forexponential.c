#include <stdio.h>
#include <math.h> // gcc 19... -lm para compilar no linux

int main(){
	int i = 1, x = 0, y = 0, expo = 0;

	printf("--- Exponenciação ---\n");
	printf("\nDigite o primeiro número inteiro: ");
	scanf("%d", &x);

	printf("\nDigite o segundo número inteiro: ");
	scanf("%d", &y);
	
	expo = pow(x,y);

	printf("\n%d ^ %d = ", x, y);
	while(i <= y){
		if(i == y){
			printf("%d ", x);
		} else{
			printf("%d * ", x);
		}
	i++;
	}
	printf("= %d\n", expo);
	return 0;
}