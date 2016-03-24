#include <stdio.h>
#include <string.h>
//int tamanhoString(char * x) {
//	int count = 0;
//	int i;
//
//	for (i = 0; x[i] != '\0'; ++i) {
//		count++;
//	}
//
//	return count;
//}
//
//void copiaString(char * x, char * y) {
//	int count = tamanhoString(x);
//	int i;
//
//	printf("%d\n", count);
//
//	for (i = 0; i < count; ++i) {
//		y[i] = x[i];
//	}
//}

int main() {
	char string1 [50];
	char string2 [50];
	char string3 [50];

	printf("Insira uma string: ");
	gets(string1);

	//copiaString(string1, string2);
	strcpy(string2, string1);
	strcpy(string3, string2);

	printf("\n%s | %s | %s\n", string1, string2, string3);

    return(0);
}