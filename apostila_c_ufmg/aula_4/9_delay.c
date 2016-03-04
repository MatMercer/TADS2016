#include <stdio.h>
int main() {
	long int i, j;
	printf("\a"); /* Imprime o caracter de alerta (um beep) */
	for (i=0; i<10000; i++)
		for (j=0; j<10000; j++); /* Espera 10.000.000 de iteracoes */
	printf("\a"); /* Imprime outro caracter de alerta */
	return(0); 
}