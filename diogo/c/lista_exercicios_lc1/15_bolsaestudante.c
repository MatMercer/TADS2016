#include <stdio.h>
#include <stdlib.h> //Clearscreen

int main(){

	int disciplinas = 0, familia = 0, idade = 0, ok = 0, loop = 0;
	float nota1 = 0, nota2 = 0, nota3 = 0, renda = 0, rendaIndividual = 0;
	char orient = ' ';

	printf("\nQuantas disciplinas você está matriculado: ");
	scanf("%d", &disciplinas);

	printf("\nInforme o número de pessoas da sua família: ");
	scanf("%d", &familia);

	printf("\nInforme a renda bruta da sua família: ");
	scanf("%f", &renda);

	printf("\nInforme sua idade: ");
	scanf("%d", &idade);

	printf("\nInforme a nota da disciplina 1 de [0 - 10]: ");
	scanf("%f", &nota1);

	printf("\nInforme a nota da disciplina 2 de [0 - 10]: ");
	scanf("%f", &nota2);

	printf("\nInforme a nota da disciplina 3 de [0 - 10]: ");
	scanf("%f", &nota3);

	rendaIndividual = renda / familia;
	
	while(loop == 0){	
		printf("\nVocê possui um orientador? [s/n]: ");
		__fpurge(stdin);
		scanf("%c", &orient);

		if ((orient == 's') || (orient == 'S')){
			ok++;
			break;
		} else if ((orient == 'n') || (orient == 'N')){
			break;
		} else {
			system("clear");
			printf("\nPor favor, digite 's' - sim / 'n' - não.\n");
			continue; 
		}
	}


	if (disciplinas >= 3){
		ok++;
	} else {
		printf("\n*Reprovado, pois cursa menos de 3 disciplinas.\n");
	}


	if (rendaIndividual < 1000){
		ok++;
	} else {
		printf("\n*Reprovado, pois possui renda familiar acima de R$ 1000 por pessoa.\n");
	}


	if (idade >= 18){
		if((nota1 > 7) && (nota2 > 7) && (nota3 > 7)){
			ok++;
		} else {
			printf("\n*Reprovado, pois possui notas abaixo de 7.\n");
		}
	} else {
		if((nota1 > 5) && (nota2 > 5) && (nota3 > 5)){
			ok++;
		} else {
			printf("\n*Reprovado, pois possui notas abaixo de 5.\n");
		}
	}

	//SE todas as 4 condições forem aceitas e tem orientador:

	if (ok == 4){ 		
		printf("\n*Aprovado, você receberá bolsa estudantil !\n");
	} else if ((orient == 'n') || (orient == 'N')) {
		printf("\n*Reprovado, pois não possui um orientador.\n");
    }

	return 0;
}