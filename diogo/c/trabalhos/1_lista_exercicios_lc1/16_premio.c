#include <stdio.h>

int main(){
	int premioInicial = 50, premio = 0, premioMaximo;
	int curtir = 0, face = 0, whats = 0, twitter = 0, rt = 0; 

	premio = premioInicial;

	//curtir         x2
	if(curtir){
		premio *= 2; 	//premio = premio * 2;
	}

	//seguir face    x3
	if(face){
		premio *= 3;
	}

	//grupo whats    x4
	if(whats){
		premio *= 4;
	}

	//seguir twitter x2
	if(twitter){
		premio *= 2;
	}

	//retweet link   x3
	if(rt){
		premio *= 3;
	}

	premioMaximo = premioInicial * 2 * 3 * 4 * 2 * 3;
	printf("\nO valor máximo possível do prêmio é de R$%d \n", premioMaximo);
	//printf("O valor do seu prêmio é de R$%d \n", premio);	

	return 0;
}