#include <stdio.h>

/**
 * Programa que calcula quanto tempo demora para
 * a altura de Cicrano ultrapaçar a altura de
 * Fulano onde o crescimento anual respectivamente
 * é 2 e 4.
 **/

int main() {
    int alturaFulano = 170;
    int alturaCicrano = 150;
    int crescimentoFulano = 2;
    int crescimentoCicrano = 4;
    int anos;

    for(anos = 0; alturaCicrano <= alturaFulano; anos += 1, alturaFulano += crescimentoFulano, alturaCicrano += crescimentoCicrano) {
        printf("--- ano %d ---\n", anos);
        printf("Fulano: %d cm.\n", alturaFulano);
        printf("Cicrano: %d cm.\n", alturaCicrano);
    }

    printf("\nDemora %d anos para Cicrano ficar mais alto que Fulano.\n", anos);
}
