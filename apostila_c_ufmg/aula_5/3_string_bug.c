#include <stdio.h>
int main() {
	char string1 [10];
	char string2 [10];

	printf("Insira uma string: ");
	gets(string1);
	printf("\nInsira outra string: ");
	gets(string2);

	//string1 = string2; // error: incompatible types when assigning to type ‘char[10]’ from type ‘char *’


	printf("\n%s | %s\n", string1, string2);
    return(0);
}