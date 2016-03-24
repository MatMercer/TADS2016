#include <stdio.h>

int main(){
	int idade = 0;
	printf("Digite sua idade em anos: \n");
	scanf("%d", &idade);

	if ((idade >= 60) && (idade < 130)) {
		printf("Você é um Idoso !\n");
	} else if ((idade >= 30) && (idade < 60)) {
		printf("Você é um Adulto !\n");
	} else if ((idade >= 18) && (idade < 30)) {
		printf("Você é um Jovem !\n");
	} else if ((idade >= 12) && (idade < 18)) {
		printf("Você é um Adolescente !\n");
	} else if ((idade >= 0) && (idade < 12)) {
		printf("Você é uma Criança!\n");
	} else if (idade >= 130){
		printf("Você Faleceu...\n");
	} 
	return 0;
}