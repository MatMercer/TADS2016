#include <stdio.h>

int ehBissexto(ano) {
	if(!(ano % 4) && (ano % 100) || !(ano % 400)) {
		return 1;
	}
	else {
		return 0;
	}
}

int tem31Dias(mes) {
	switch(mes) {
		case 1:
			return 1;	//Janeiro
		break;

		case 2:
			return 0;	//Fevereiro
		break;

		case 3:
			return 1;	//Marco
		break;

		case 4:
			return 0;	//Abril
		break;

		case 5:
			return 1;	//Maio
		break;

		case 6:
			return 0;	//Junho
		break;

		case 7:
			return 1;	//Julho
		break;

		case 8:
			return 1;	//Agosto
		break;

		case 9:
			return 0;	//Setembro
		break;

		case 10:
			return 1;	//Outubro
		break;

		case 11:
			return 0;	//Novembro
		break;

		case 12:
			return 1;	//Dezembro
		break;
	}
}

char *mesParaString(mes) {
	switch(mes) {
		case 1:
			return "Janeiro";
		break;

		case 2:
			return "Fevereiro";
		break;

		case 3:
			return "Marco";
		break;

		case 4:
			return "Abril";
		break;

		case 5:
			return "Maio";
		break;

		case 6:
			return "Junho";
		break;

		case 7:
			return "Julho";
		break;

		case 8:
			return "Agosto";
		break;

		case 9:
			return "Setembro";
		break;

		case 10:
			return "Outubro";
		break;

		case 11:
			return "Novembro";
		break;

		case 12:
			return "Dezembro";
		break;
	}
}

int main() {
	int dia, mes, ano, diaDoAno, i;
	ANO:
		printf("Insira o ano: ");
		scanf("%d", &ano);
		if(ano < 1900 || ano > 2100) {
			printf("Ano invalido! Insira um ano entre 1900 e 2100!\n");
			goto ANO;
		}

	MES:
		printf("Insira o mes: ");
		scanf("%d", &mes);
		if(mes < 1 || mes > 12) {
			printf("Mes invalido! Insira um mes entre 1 e 12!\n");
			goto MES;
		}

	DIA:
		printf("Insira o dia: ");
		scanf("%d", &dia);
		if(dia > 28 && mes == 2 && !(ehBissexto(ano)) ||
			dia > 30 && !(tem31Dias(mes)) ||
			dia > 29 && mes == 2 ||
			dia < 1 ||
			dia > 31) {
			printf("Dia invalido! Talvez esse mes nao tenha esse dia.\n");
			goto DIA;
		}

	diaDoAno = 0;
	for(i = 1; i < mes; i++) {
		if(tem31Dias(i)) {
			diaDoAno += 31;
			continue;
		}
		else if(ehBissexto(ano) && i == 2) {
			diaDoAno += 29;
			continue;
		}
		else {
			diaDoAno += 30;
		}
	}
	diaDoAno += dia;

	printf("O dia %d do mes de %s do ano %d eh o dia %d desse ano.\n", dia, mesParaString(mes), ano, diaDoAno);

    return(0);
}