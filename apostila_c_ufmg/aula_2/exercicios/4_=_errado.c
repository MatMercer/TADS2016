#include <stdio.h>
int main() {
    int num = 1;
    if(num = 10) {                  //Esta errado pois if existe com o fim logico
        printf("Wtf: %d\n", num);   //Quando voce faz isso, o console printa 10
    }                               //pois voce atribuiu 10 na variavel num
                                    //e ele passa pelo if porque num é diferente de 0.
    
    if(num = 0) {                   //Aqui a variavel é 0, e nao passa pelo if como true
        printf("Wat: %d\n", num);   //é um teste que sempre dara a mesma coisa,
    }                               //ou seja, inutil.

    return(0);
}