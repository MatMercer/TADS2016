#include <stdio.h>

// Intervalos baseados na tabela ASCII
#define INICIO_MAIUSCULA 65
#define FIM_MAIUSCULA 90

#define INICIO_MINUSCULA 97
#define FIM_MINUSCULA 122

int estaNoIntervalo(int valor, int min, int max);

/**
 * Um programa mostra quantas letras uma frase
 * tem.
**/

int main() {
    char frase[100] = {'\0'};
    int letras[26] = {0};
    int i = 0;
    char aux;

    gets(frase);

    while(frase[i] != '\0') {
        aux = frase[i];

        if(estaNoIntervalo(aux, INICIO_MINUSCULA, FIM_MINUSCULA)) {
            aux -= 32;        
        }

        if(estaNoIntervalo(aux, INICIO_MAIUSCULA, FIM_MAIUSCULA)) {
            letras[aux - INICIO_MAIUSCULA] += 1;    
        }

        i += 1;
    }

    for(i = 0; i < 26; i++) {
        if(letras[i] != 0) {
            printf("%c repetiu %d vez(es).\n", INICIO_MAIUSCULA + i, letras[i]);
        }
    }

    return 0;
}

int estaNoIntervalo(int valor, int min, int max) {
    if(valor >= min && valor <= max) {
        return 1;
    }
    else {
        return 0;
    }
}
