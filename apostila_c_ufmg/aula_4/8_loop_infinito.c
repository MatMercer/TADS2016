#include <stdio.h>
int main () {
	int Count;
	char ch;
	printf(" Digite uma letra - <X para sair> ");
	for (Count=1;;Count++) {
		scanf("%c", &ch);
		if (ch == 'X') break;
		printf("\nLetra: %c ",ch);
		scanf("%c", &ch);
		printf("\n");
	}
	return(0);
}