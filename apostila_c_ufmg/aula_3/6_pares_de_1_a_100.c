#include <stdio.h>
int main() {
    int i;
    for(i=1; i<=100; i++) {
        //if(!(i%2)) printf("%d\n",i);
        /* o operador de
        resto dará falso (zero) */
        if(!(i&1)) printf("%d\n",i);
        /* isso eh equivalente */
    }
    /* quando usada c/
    número par. Esse resultado*/
    /* é invertido pelo !
    */
    return(0);
}