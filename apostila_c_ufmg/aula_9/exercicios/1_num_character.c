#include <stdio.h>
#include <stdlib.h>

int main() {
	//arquivo
	FILE *f;

	//caractere para leitura
	char c;

	//quantidade de caracteres
	//com espaco
	long qce = 0;

	//quantidade de caracteres
	//sem espaco
	long ql = 0;

	//nome do arquivo
	char fn[50];

	printf("Insira o nome do arquivo (com extensao): ");
	gets(fn);

	//abre o arquivo
	f = fopen(fn, "r");

	//verifica se o arquivo foi aberto
	//com sucesso
	if(!f) {
		printf("Erro ao abrir o arquivo! Ele existe?\n");
		exit(0);
	}

	//percorre todo o arquivo, contando
	//todos os caracteres
	while((c = getc(f)) != EOF) {
		switch(c) {
			case '\n':
			case '	':
			case ' ':
				break;
			default:
				ql += 1;
		}

		qce += 1;
	}

	printf("Esse arquivo tem %ld caracteres contando com espacos e %ld letras.\n", qce, ql);

	fclose(f);
	return 0;
}