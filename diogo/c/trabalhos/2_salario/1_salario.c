#include <stdio.h>

//Constantes usadas no calculo
#define INSS 0.11;
#define CONTRIB_SINDICAL 0.01;
#define IMPOSTO_RENDA 0.27;
#define MESES_RECEBIDOS 13;

int main() {
	/**************************************
		Declaracoes
	**************************************/
	//Dados sobre o usuario
	char nome[32];
	char sobrenome[32];
	char cargo[32];
	char empresa[32];
	//Variaveis usadas no calculo e resultado
	short horaMes = 0;
	int i = 0;
	float inss;
	float contrSind;
	float impostoRenda;
	float valHora = 0;
	float salBruto = 0;
	float salLiquido = 0;

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
	scanf("%s", sobrenome);
	sobrenome[0] = toupper(sobrenome[0]);
	__fpurge(stdin);

	/**************************************
		Pede informacoes sobre a carreira
		do usuario
	***************************************/
	printf("Insira o seu cargo: ");
	scanf("%s", cargo);
	cargo[0] = toupper(cargo[0]);
	__fpurge(stdin);

	printf("O nome da empresa em que voce trabalha: ");
	scanf("%s", empresa);
	empresa[0] = toupper(empresa[0]);
	__fpurge(stdin);

	printf("O seu valor hora: ");
	scanf("%f", &valHora);

	printf("Quantas horas voce trabalha em um mes: ");
	scanf("%hd", &horaMes);

	/**************************************
		Calculos e resultados
	***************************************/

	salBruto = valHora*horaMes;
	inss = salBruto * INSS;
	contrSind = salBruto * CONTRIB_SINDICAL;
	impostoRenda = salBruto * IMPOSTO_RENDA;
	salLiquido = salBruto - inss - contrSind - impostoRenda;

	//Limpa o console
	for (i = 0; i < 50; ++i){
		printf("\n");
	}

	printf("\nEMPRESA: %s\n", empresa);
	printf("\nFUNCIONÁRIO: %s %s\n", nome, sobrenome);
	printf("\nCARGO: %s\n", cargo);
	printf("\n\nValores Mensais:\n");
	printf("\nHoras Trabalhadas: %hd\n", horaMes);
	printf("\nSalário Mensal Bruto: %.2f\n", salBruto);
	printf("\nINSS: %.2f\n", inss);
	printf("\nContribuição Sindical: %.2f\n", contrSind);
	printf("\nIR: %.2f\n", impostoRenda);
	printf("\nSalário Mensal Líquido: %.2f\n", salLiquido);

	salBruto *= MESES_RECEBIDOS;
	inss *= MESES_RECEBIDOS;
	contrSind *= MESES_RECEBIDOS;
	impostoRenda *= MESES_RECEBIDOS;
	salLiquido *= MESES_RECEBIDOS;

	printf("\n\nValores Anuais:\n");
	printf("\nSalário Anual Bruto: %.2f\n", salBruto);
	printf("\nINSS: %.2f\n", inss);
	printf("\nIR: %.2f\n", impostoRenda);
	printf("\nSalário Anual Líquido: %.2f\n", salLiquido);

    return(0);
}
