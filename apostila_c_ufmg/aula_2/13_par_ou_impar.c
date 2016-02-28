#include <stdio.h>
int main() {
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    /*
    Operacao em nivel binario (bitwise)
    Operador AND (&):
    2 = 10 (binario)
    3 = 11 (binario)

    10
    AND
    01
    --
    00

    11
    AND
    01
    --
    01

    */                               
    //duvida, porque nao funciona dessa maneira:
    //if(num & 1 < 1) {
    //colocando dessa forma sempre resulta em true
    if(num & 1) {   //tudo diferente de 0 eh validado com true em C
        printf("%d eh impar.\n", num);    
    }
    else {
        printf("%d eh par.\n", num);
    }
    return(0);
}