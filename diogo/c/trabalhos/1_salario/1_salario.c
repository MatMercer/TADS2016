#include <stdio.h>
int main() {
	/**************************************
		Declaracoes
	**************************************/
	//Dados sobre o usuario
	char nome[32];
	char sobreNome[32];
	char cargo[32];
	char empresa[32];
	//Constantes usadas no calculo
	const float inss = (11) / 100; //(D%) / 100
	const float contrSind = (1) / 100;
	const float impostoRenda = (27) / 100;
	//Variaveis usadas no calculo

	/*********************
		Inicio
	*********************/

	/**************************************
		Pede o nome e sobrenome ao usuario, 
		deixando a primeira letra em maiusculo
	***************************************/

	printf("\nQual o seu nome? ");
	scanf("%s", nome);
	nome[0] = toupper(nome[0]); //Deixa a primeira letra em maiusculo
	__fpurge(stdin);

	printf("Qual o seu sobrenome? ");
	scanf("%s", sobreNome);
	sobreNome[0] = toupper(sobreNome[0]);
	__fpurge(stdin);

	/**************************************
		Gera uma mensagem de boas vindas
	***************************************/
	printf("\nBem vindo %s %s!", nome, sobreNome);
	printf("\nEsse programa serve para calcular seu salario anual bruto,");
	printf("\nseu INSS anual, seu IR anual e seu salario anual liquido.\n");

	/**************************************
		Pede informacoes sobre a carreira
		do usuario
	***************************************/
	printf("\nPara isso, insira seu cargo: ");
	scanf("%s", cargo);
	cargo[0] = toupper(cargo[0]);
	__fpurge(stdin);

	printf("\nO nome da empresa em que voce trabalha: ");
	scanf("%s", empresa);
	empresa[0] = toupper(empresa[0]);
	__fpurge(stdin);


    return(0);
}