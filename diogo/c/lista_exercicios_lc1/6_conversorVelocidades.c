#include <stdio.h>

int main(){

	float m_s = 0, m_h = 0, km_h = 0, nos = 0, pes_s = 0, milha_h = 0;
	int escolha = 0;

	while(escolha != 5){

	printf("\nDigite 1 - (m/s -> km/h): ");
	printf("\nDigite 2 - (milha/h -> km/h): ");
	printf("\nDigite 3 - (km/h -> nós): ");
	printf("\nDigite 4 - (m/h -> pés/s): ");
	printf("\nDigite 5 - SAIR\n");
	scanf("%d", &escolha);

		switch(escolha){
			case 1 :
			printf("\nDigite a velocidade em m/s: ");
			scanf("%f", &m_s);
			km_h = m_s * 3.6;
			printf("\nConvertido para km_h = %.2f\n", km_h);
			break;
	
			case 2:
			printf("\nDigite a velocidade em milha_h: ");
			scanf("%f", &milha_h);
			km_h = milha_h * 1.61;
			printf("\nConvertido para km_h = %.2f\n", km_h);
			break;
	
			case 3:
			printf("\nDigite a velocidade em km_h: ");
			scanf("%f", &km_h);
			nos = km_h * 0.54;
			printf("\nConvertido para nós = %.2f\n", nos);
			break;
	
			case 4:
			printf("\nDigite a velocidade em m/h: ");
			scanf("%f", &m_h);
			pes_s = m_h * 0.0009;	
			printf("\nConvertido para pés/s = %.4f\n", pes_s);
			break;

			case 5:
			printf("\nSaindo...\n");
			break;

			default:
			printf("\nPor favor, digite um número de 1 a 5\n");
			break;
		}
	}
	return 0;
}