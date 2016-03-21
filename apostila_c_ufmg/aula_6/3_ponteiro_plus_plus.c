#include <stdio.h>
int main() {
    char letra = 'g';
    char *ponteiroLetra = &letra;
    double num = 123;
    double *ponteiroNum = &num;

    printf("Valores no começo: %c %lf\n", *ponteiroLetra, *ponteiroNum);
    printf("Locais no começo: %p %p\n", ponteiroLetra, ponteiroNum);

    //pula 500 e 100 posicoes
    ponteiroLetra += 500;
    ponteiroNum += 100;

    printf("\nValores no final: %c %lf\n", *ponteiroLetra, *ponteiroNum);
    printf("Locais no final: %p %p\n", ponteiroLetra, ponteiroNum);

    //Apesar do ponteiroletra ter ficado com 500 posicoes acima
    //o ponteironum eh maior pois para cada vez que anda, sao 8 
    //bytes, ja o de letra sao 100, entao, x + 800 > x + 500 
    if(ponteiroNum > ponteiroLetra) {
        printf("O ponteiro do double é mais alto!\n");
    }

    return(0);
}