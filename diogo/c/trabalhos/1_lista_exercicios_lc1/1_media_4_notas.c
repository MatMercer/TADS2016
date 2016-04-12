#include <stdio.h>
int main() {
    const int MAX_NOTAS = 4;
    int i = 0;
    double nota = 0;
    double montante = 0;

    for (i; i < MAX_NOTAS; i++) {
        printf("Insira uma nota: ");
        scanf("%lf", &nota);
        montante += nota;
    }

    printf("A media eh: %.2lf\n", montante/MAX_NOTAS);
    return(0);
}