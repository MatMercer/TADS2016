#include <stdio.h>
int main() {
    int x, y;
    for(x=0 , y=0 ; x+y < 100 ; ++x , y++) /* Duas
    variáveis de controle: x e y . Foi atribuído o valor zero a
    cada uma delas na inicialização do for e ambas são
    incrementadas na parte de incremento do for */
    printf("\nx: %d y: %d x + y: %d ", x, y, x+y); /* o programa imprimirá os números
    pares de 2 a 98 */
    return(0);
}