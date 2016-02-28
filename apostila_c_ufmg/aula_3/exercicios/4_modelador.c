#include <stdio.h>
int main() {
    int num;
    float f;
    num=10;
    f=(float)num/7; /* Uso do modelador . Força a transformação de num
    em um float */
    printf ("%f\n",f);

    //sem modelador:
    //1.000000
    //com modelador:
    //1.428571
    return(0);
}