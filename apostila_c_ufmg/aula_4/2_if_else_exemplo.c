#include <stdio.h>
int main() {
	int num;
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	if (num==10) {
		printf ("\n\nVoce acertou!\n");
		printf ("O numero eh igual a 10.\n");
	}
	else {
		printf ("\n\nVoce errou!\n");
		printf ("O numero eh diferente de 10.\n");
	} 
	return(0);
}