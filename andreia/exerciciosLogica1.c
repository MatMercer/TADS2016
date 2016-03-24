#include <stdio.h>

int circuloArea(){
	float raio = 0, area = 0, pi = 3.14;

	printf("\nDigite o raio do círculo: ");
	scanf("%f", &raio);

	area = pi * (raio * raio);
	printf("\nÁrea do círculo = %.2f \n", area);

	return 0;
}


int salarioProf(){
	float valorHora = 0, horasTotal = 0, salarioBruto = 0;
	float inss = 0, salarioLiquido = 0;

	printf("\nQuanto você ganha por hora? ");
	scanf("%f", &valorHora);

	printf("\nQuantas horas você trabalhou nesse mês? ");
	scanf("%f", &horasTotal);

	printf("\nDigite o percentual de desconto do inss:");
	scanf("%f", &inss);

	salarioBruto = valorHora * horasTotal;

	salarioLiquido = salarioBruto - (inss/100 * salarioBruto);

	printf("\nSeu salário líquido = %.2f\n", salarioLiquido);

	return 0;
}


int tempConverter(){
	float celsius = 0, fahrenheit = 0;

	printf("\nDigite a temperatura em Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 1.8) + 32;
	printf("\nConvertido para Fahrenheit = %.2f\n", fahrenheit);
	
	return 0;
}


int volumeLata(){
	float volume = 0, raio = 0, altura = 0;

	printf("\nDigite o raio da lata: ");
	scanf("%f", &raio);

	printf("\nDigite a altura da lata: ");
	scanf("%f", &altura);

	volume = 3.14159 * raio * raio * altura;
	printf("\nVolume da Lata: %f\n", volume);
	
	return 0;
}


int trocadeValores(){
	float a = 0, b = 0, temp = 0;

	printf("\nDigite o número A: ");
	scanf("%f", &a);

	printf("\nDigite o número B: ");
	scanf("%f", &b);

	temp = a;
	a = b;
	b = temp;

	printf("\nA = %.2f, B = %.2f\n", a, b);
	
	return 0;
}


int moedasConverter(){
	float dolar = 0, real = 0;

	printf("\nDigite o valor em Dólar: ");
	scanf("%f", &dolar);

	real = dolar * 3.66;
	printf("\nConvertido para Reais = %.2f\n", real);

	return 0;
}


int main(){

	char escolha = 0;
	printf("\n---Exercícios---\n");

	while(escolha != 1){
		printf("\nDigite a- Área de uma circunferência");
		printf("\nDigite b- Salário de um Professor");
		printf("\nDigite c- Converter Celsius em Fahrenheit");
		printf("\nDigite d- Volume de uma Lata de Óleo");
		printf("\nDigite e- Troca os valores de A e B");
		printf("\nDigite f- Converter dólares para reais");
		printf("\nDigite x- Sair\n");
		scanf("%s", &escolha);

		switch (escolha){
			case 'A':
			case 'a':
				circuloArea();
				break;
			case 'B':
			case 'b':
				salarioProf();
				break;
			case 'C':
			case 'c':
				tempConverter();
				break;
			case 'D':
			case 'd':
				volumeLata();
				break;
			case 'E':
			case 'e':
				trocadeValores();
				break;
			case 'F':
			case 'f':
				moedasConverter();
				break;
			case 'X':
			case 'x':
				printf("Saindo... \n");
				escolha = 1;
				break;
			default: 
				printf("Escolha inválida \n");
		}
	}
	return 0;
}