#include <stdio.h>
int main() {
	char str1[100], str2[100], str3[100], str4[100];
	char final[400];

	printf("Faça uma frase\n");

	printf("Parte 1: ");
	gets(str1);
	strcat(final, str1);

	printf("Parte 2: ");
	gets(str2);
	strcat(final, str2);

	printf("Parte 3: ");
	gets(str3);
	strcat(final, str3);

	printf("Parte 4: ");
	gets(str4);
	strcat(final, str4);

	printf("Sua frase: %s\n", final);

    return(0);
}