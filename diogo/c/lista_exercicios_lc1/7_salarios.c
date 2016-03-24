#include <stdio.h>

int main() {
	
	float valorHora = 0, horasTotal = 0, salarioBruto = 0;
	float inss = 0, contribuicao = 0, salarioLiquido = 0;

	printf("Quanto você ganha por hora? \n");
	scanf("%f", &valorHora);

	printf("Quantas horas você trabalhou nesse mês? \n");
	scanf("%f", &horasTotal);

	salarioBruto = valorHora * horasTotal;

	inss = salarioBruto * 0.11;		// 11%
	contribuicao = salarioBruto * 0.05;		// 5%

	salarioLiquido = salarioBruto - (inss + contribuicao);

	printf("Seu salário líquido = %.2f", salarioLiquido);
	
	return 0;
}
