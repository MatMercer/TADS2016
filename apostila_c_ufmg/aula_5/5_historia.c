#include <stdio.h>
#include <string.h>
int main() {
	char parte1 [100];
	char parte2 [100];
	char parte3 [100];

	printf("Continue a historia!\n");
	printf("Victor nao queria pular, mas ");
	gets(parte1);

	printf(", por isso, ele resolveu ");
	gets(parte2);

	printf(" e no final de tudo ele ");
	gets(parte3);

	printf("Sua historia:\n");

	printf("Victor nao queria pular, mas %s , por isso, ele resolveu %s e no final de tudo ele %s\n", parte1, parte2, parte3);	
    return(0);
}