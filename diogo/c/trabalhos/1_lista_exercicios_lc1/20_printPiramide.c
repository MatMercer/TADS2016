#include <stdio.h>

int main(){
	int x = 0, i = 0, y = 0;
	printf("\nDigite o número máximo: ");
	scanf("%d", &x);

	if(x % 2 != 0){
		while(i < x){
			i++;
			printf(" %d ", i);
		}
		
	printf("\n");
	} else {
		printf("\nPor favor, digite um número ímpar !\n");
	}
	return 0;
}
