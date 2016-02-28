#include <stdio.h>
int main() {
    char primeiroNome[100];
    char segundoNome[100];
    printf("Insira o seu nome: ");
    gets(primeiroNome);
    printf("Insira o seu sobrenome: ");
    gets(segundoNome);

    printf("Ola %s %s...\n", primeiroNome, segundoNome);
    printf("] %c [\n] %c [\n", primeiroNome[1], segundoNome[1]);
    return(0);
}