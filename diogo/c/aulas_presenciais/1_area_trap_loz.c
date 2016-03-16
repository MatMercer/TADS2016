#include <stdio.h>

int msg(char * m) {
	printf("> %s", m);
}

int main() {
	int escolha = 0;
	double area = 0, menor = 0, maior = 0, altura = 0;

	msg("Esse programa calcula a area de trapezio ou lozango.\n");
	
	while(1) {
		msg("O que voce quer calcular? [0 | loz.] [1 | trap.] [-1 | sair]\n");
		scanf("%d", &escolha);

		if(escolha == -1) {
			msg("Ate mais!\n");
			break;
		}

		if(escolha) {
			msg("Insira a base menor: ");
			scanf("%lf", &menor);

			msg("Insira a base maior: ");
			scanf("%lf", &maior);

			msg("Insira a altura: ");
			scanf("%lf", &altura);

			area = ((maior * menor) * altura) / 2;

			msg("");
			printf("((%lf * %lf) * %lf) / 2\n\n", maior, menor, altura);

			msg("");
			printf("A area equivale a %lf\n", area);
			continue;
		}
		else {
			msg("Insira a diagonal menor: ");
			scanf("%lf", &menor);

			msg("Insira a diagonal maior: ");
			scanf("%lf", &maior);

			area = (maior * menor) / 2;

			msg("");
			printf("(%lf * %lf) / 2\n\n", maior, menor);

			msg("");
			printf("A area equivale a %lf\n", area);
		}

	}
    return(0);
}