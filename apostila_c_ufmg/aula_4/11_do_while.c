#include <stdio.h>
int main () {
	int i;
	do {
		printf ("\n\nEscolha a fruta pelo numero:\n\n");
		printf ("\t(1)...Mamao\n");
		printf ("\t(2)...Abacaxi\n");
		printf ("\t(3)...Laranja\n\n");
		scanf("%d", &i);
	} while ((i < 1) || (i > 3));
	switch (i) {
		case 1:
		printf ("\t\tVoce escolheu Mamao.\n");
		break;
		case 2:
		printf ("\t\tVoce escolheu Abacaxi.\n");
		break;
		case 3:
		printf ("\t\tVoce escolheu Laranja.\n");
		break;
	}
	return(0);
} 