#include <stdio.h>

int main(){

	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
	printf("---Digite suas 4 notas de ( 0 - 10 )---");
	printf("\nDigite a primeira nota: ");
	scanf("%f",&nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%f",&nota2);
	printf("\nDigite a terceira nota: ");
	scanf("%f",&nota3);
	printf("\nDigite a quarta nota: ");
	scanf("%f",&nota4);

	float media = (nota1 + nota2 + nota3 + nota4) / 4; 

	if((media > 7.0) && (media <= 10)){
		printf("\nAprovado !\n");
	} else if ((media <= 7) && (media >= 0)){
		printf("\nReprovado !\n");
	} else{
		printf("\nNota inválida\n");
		printf("---Digite suas 4 notas de ( 0 - 10 )---\n");
	}
	return ;
}