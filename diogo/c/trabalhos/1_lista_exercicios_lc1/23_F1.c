#include <stdio.h>

int main(){
	
	int i = 0, qtde = 0, vfast = 0;
	float melhorVolta, tempoVolta;

	printf("\nDigite a quantidade de voltas: ");
	scanf("%d",&qtde);

	while(i < qtde){
	i++;
	printf("Digite o tempo da volta: ");
	scanf("%f", &tempoVolta);

		if(tempoVolta < melhorVolta){
		melhorVolta = tempoVolta;
		vfast = i;
		}
	}
	printf("\nA volta %d foi a mais rápida, com o tempo de %.2f \n", vfast, melhorVolta);
	
	return 0;
}