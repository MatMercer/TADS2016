#include <stdio.h>
int main() {
	char x;

	while(1) {
		printf("Insira um char [X] para sair: \n");
		__fpurge(stdin); //Limpa o buffer do teclado
		scanf("%c", &x);
		if(x == 'X' || x == 'x') {
			break;
		}
	}
    return(0);
}