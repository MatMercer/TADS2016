#include <stdio.h>

int main(){

	// 1 real -> 3.66 dolar
	// 1 euro -> 4 reais
	// 1 euro -> 1.1 dolar

	float euro = 0, dolar = 0, real = 0;
	int escolha = 0;

	while(escolha != 7){

	printf("\nDigite 1 - (Dólar -> Euro): ");
	printf("\nDigite 2 - (Euro -> Dólar): ");
	printf("\nDigite 3 - (Dólar -> Reais): ");
	printf("\nDigite 4 - (Reais -> Dólar): ");
	printf("\nDigite 5 - (Reais -> Euro): ");
	printf("\nDigite 6 - (Euro -> Reais): ");
	printf("\nDigite 7 - SAIR\n");
	scanf("%d", &escolha);

		switch(escolha){
			case 1 :
			printf("\nDigite o valor em Dólar: ");
			scanf("%f", &dolar);
			euro = dolar * 1.1;
			printf("\nConvertido para Euro = %.2f\n", euro);
			break;
	
			case 2:
			printf("\nDigite o valor em Euro: ");
			scanf("%f", &euro);
			dolar = euro / 1.11;
			printf("\nConvertido para Dólar = %.2f\n", dolar);
			break;
	
			case 3:
			printf("\nDigite o valor em Dólar: ");
			scanf("%f", &dolar);
			real = dolar * 3.66;
			printf("\nConvertido para Reais = %.2f\n", real);
			break;
	
			case 4:
			printf("\nDigite o valor em Reais: ");
			scanf("%f", &real);
			dolar = real / 3.66;
			printf("\nConvertido para Dólar = %.2f\n", dolar);
			break;

			case 5:
			printf("\nDigite o valor em Reais: ");
			scanf("%f", &real);
			euro = real / 4;			
			printf("\nConvertido para Euro = %.2f\n", euro);
			break;

			case 6:
			printf("\nDigite o valor em Euro: ");
			scanf("%f", &euro);
			real = euro * 4; 
			printf("\nConvertido para Reais = %.2f\n", real);
			break;

			case 7:
			printf("\nSaindo...\n");
			break;

			default:
			printf("\nPor favor, digite um número de 1 a 7\n");
			break;
		}
	}
	return 0;
}