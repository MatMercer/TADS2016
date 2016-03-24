#include <stdio.h>

int main(){

	float celsius = 0, fahrenheit = 0, kelvin = 0;
	int escolha = 0;

	while(escolha != 7){

	printf("\nDigite 1 - (Celsius -> Kelvin): ");//K = °C + 273,15
	printf("\nDigite 2 - (Kelvin -> Celsius): ");//°C = K − 273,15
	printf("\nDigite 3 - (Celsius -> Fahrenheit): ");//°F = °C × 1,8 + 32
	printf("\nDigite 4 - (Fahrenheit -> Celsius): ");//°C = (°F − 32) / 1,8
	printf("\nDigite 5 - (Kelvin -> Fahrenheit): ");//°F = K × 1,8 - 459,67
	printf("\nDigite 6 - (Fahrenheit -> Kelvin): ");//K = (°F + 459,67) / 1,8
	printf("\nDigite 7 - SAIR\n");
	scanf("%d", &escolha);

		switch(escolha){
			case 1 :
			printf("\nDigite a temperatura em Celsius: ");
			scanf("%f", &celsius);
			kelvin = celsius + 273.15;
			printf("\nConvertido para Kelvin = %.2f\n", kelvin);
			break;
	
			case 2:
			printf("\nDigite a temperatura em Kelvin: ");
			scanf("%f", &kelvin);
			celsius = kelvin - 273.15;
			printf("\nConvertido para Celsius = %.2f\n", celsius);
			break;
	
			case 3:
			printf("\nDigite a temperatura em Celsius: ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("\nConvertido para Fahrenheit = %.2f\n", fahrenheit);
			break;
	
			case 4:
			printf("\nDigite a temperatura em Fahrenheit: ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) / 1.8;
			printf("\nConvertido para Celsius = %.2f\n", celsius);
			break;

			case 5:
			printf("\nDigite a temperatura em Kelvin: ");
			scanf("%f", &kelvin);
			fahrenheit = (kelvin * 1.8) - 459.67;
			printf("\nConvertido para Fahrenheit = %.2f\n", fahrenheit);
			break;

			case 6:
			printf("\nDigite a temperatura em Fahrenheit: ");
			scanf("%f", &fahrenheit);
			kelvin = (fahrenheit + 459.67) / 1.8;
			printf("\nConvertido para Kelvin = %.2f\n", kelvin);
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