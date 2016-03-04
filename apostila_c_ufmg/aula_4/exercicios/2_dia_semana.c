#include <stdio.h>
int main() {
	int num;

	while(num != -1) {
		printf("Insira um numero correpondente a um dia da semana (-1 para sair): ");
		scanf("%d", &num);
		switch(num) {
			case 1:
				printf("\nDomingo\n");
			break;

			case 2:
				printf("\nSegunda feira.\n");
			break;

			case 3:
				printf("\nTerca feira.\n");
			break;

			case 4:
				printf("\nQuarta feira.\n");
			break;

			case 5:
				printf("\nQuinta feira.\n");
			break;

			case 6:
				printf("\nSexta feira.\n");
			break;

			case 7:
				printf("\nSabado\n");
			break;

			default:
				printf("\nNumero invalido!\n");
			break;
		}
	}
	return(0);
}