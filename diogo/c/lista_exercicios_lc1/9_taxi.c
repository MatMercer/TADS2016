#include <stdio.h>

int main() {
	
	float precoCombustivel = 1.90, kmInicial = 0, kmFinal = 0, litrosGastos = 0, money = 0;
	float consumo = 0, lucro = 0, gasolina = 0;

	printf("Digite a quilometragem no início do dia: \n");
	scanf("%f", &kmInicial);

	printf("Digite a quilometragem no final do dia: \n");
	scanf("%f", &kmFinal);

	printf("Digite quantos litros de combustível foram gastos: \n");
	scanf("%f", &litrosGastos);

	printf("Digite o total de dinheiro recebido desse dia: \n");
	scanf("%f", &money);

	consumo = (kmFinal - kmInicial) / litrosGastos;
	gasolina = consumo * precoCombustivel;
	lucro = money - gasolina;

	printf("Sua média de consumo do dia = %.2f km/L \n", consumo);
	printf("Seu lucro do dia = %.2f \n", lucro);

	return 0;
}
