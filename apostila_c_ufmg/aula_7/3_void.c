#include <stdio.h>
void Mensagem (void);
int main () {
    Mensagem();
    printf ("\tDiga de novo:\n");
    Mensagem();
    return 0;
}
void Mensagem (void) {
    printf ("Ola! Eu estou vivo.\n");
    return 0; //Valido pois as func tem por padrao retorno inteiro
}
