#include <stdio.h>

int main(){
	float percent = 0, nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
	int aprovado = 0;
	printf("\nDigite seu percentual de presença: ");
	scanf("%f", &percent);

	if ((percent < 0) || (percent > 100)){
		printf("Percentual inváido !");
	}
	if (percent >= 75) {
		printf("Digite sua primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite sua segunda nota: \n");
		scanf("%f", &nota2);
		printf("Digite sua terceira nota: \n");
		scanf("%f", &nota3);
		printf("Digite sua quarta nota: \n");
		scanf("%f", &nota4);
		if(nota1 > 7){
			aprovado ++;
		} if(nota2 > 7){
			aprovado ++;
		} if(nota3 > 7){
			aprovado ++;
		} if(nota4 > 7){
			aprovado ++;
		}
		if(aprovado >= 3){
			printf("Aprovado !\n");
		} else{
			printf("Reprovado !\n");
		}
	} else {
		printf("Repovado !\n");
	}
	return 0;
}