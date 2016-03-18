#include <stdio.h>
int main() {
	char x[64];

	while(1) {
		printf("Insira uma palavra [CTRL + C] para sair: \n");
		__fpurge(stdin); //Limpa o buffer do teclado
		scanf("%s", x);
		printf("> %s\n", x);
	}
    return(0);
}