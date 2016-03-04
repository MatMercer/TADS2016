#include <stdio.h>
#include <string.h>
int main() {
	int index = 0, contador;
	char string[100];
	printf("Insira uma string: ");
	gets(string);

	for (contador=0; contador < 1000; contador++) {
		printf("\n%c | %d | %d",string[index], index, contador);
		if (contador % 5 == 0) {
			(index == strlen(string) - 1) ? index=0: ++index;
		}
	} 
	return(0);
}