#include <stdio.h>
int main () {
	char Ch;
	Ch='\0';
	while (Ch!='q') {
		printf("Insira 1 char: \n");
		scanf("%c", &Ch);
	}
	return(0);
} 