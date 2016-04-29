#include <stdio.h>
int Square (int a) {
    return (a*a);
}
int main () {
    int num;
    printf ("Entre com um numero: ");
    scanf ("%d",&num);
    num=Square(num);
    printf ("\n\nO seu quadrado vale: %d\n",num);
    return 0;
}
int EPar (int a) {
    if (a%2)
        /* Verifica se a e divisivel por
           dois */
        return 0;
    /* Retorna 0 se nao for divisivel
     */
    else
        return 1;
    /* Retorna 1 se for divisivel */
}
