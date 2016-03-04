#include <stdio.h>
int main () {
	char Ch;
	Ch='\0';
	do {
		printf("Insira 1 char: \n");
		scanf("%c", &Ch);
	} while (Ch!='q');
	return(0);
} 