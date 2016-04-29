#include <stdio.h>
float sqr (float num);
void main () {
    float num,sq;
    printf ("Entre com um numero: ");
    scanf ("%f",&num);
    sq=sqr(num);
    printf ("\n\nO numero original e: %f\n",num);
    printf ("O seu quadrado vale: %f\n",sq);
}
float sqr (float num) {
    num=num*num;
    return num;
}
