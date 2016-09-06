#include <stdio.h>
#include <stdlib.h>

#define NUM_NOTAS 4
#define NOTA_EXAME 7

float getNotaRand();

/**
 * Programa que calcula a media de 4
 * notas randômicas e diz se o aluno
 * foi reprovado ou não.
**/

int main() {
    time_t t;
    float nota = 0;
    float media = 0;
    int i;
    
    /**
     * A função time pega a data da maquina e
     * inicializa a variavel 't' assim, transforma
     * em um valor positivo e joga na seed para
     * geração de números pseudo-randômicos.
    **/

    srand((unsigned) time(&t));

    for(i = 0; i < NUM_NOTAS; i += 1) {
        nota = getNotaRand();
        media += nota; 
        printf("Nota %d: %0.2f\n", i + 1, nota);
    }

    media /= NUM_NOTAS;

    printf("\nA media é %0.2f\n", media);

    if(media >= NOTA_EXAME) {
        printf("\nO aluno foi para o exame.\n");
    }
    else {
        printf("\nO aluno foi reprovado\n");
    }
}

/**
 * Gera uma nota randomica entre 0.0 a 10.0
 * note que o rand deve estar com uma seed
 * ja inicializada.
**/

float getNotaRand() {
    return (float) (rand() % 100) / 10; 
}
