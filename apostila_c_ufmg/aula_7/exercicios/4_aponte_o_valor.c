#include <stdio.h>
int num;
int func(int a, int b) {
    a = (a+b)/2; /* Qual e o valor de a apos a
                    atribuicao? */
                    //(0 + 50)/2
                    //a = 25
    num -= a;       //num = 10 - 25
                    //num = -15
    return a;       
}

main() {
    int first = 0, sec = 50;
    num = 10;
    num += func(first, sec); //func(0, 50) == 25
    //num = 10
    /* Qual e o valor de num,
    antes e depois da
    atribuicao?
    */
    printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d",num, first, sec);
}
