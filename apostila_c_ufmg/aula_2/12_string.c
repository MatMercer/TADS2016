#include <stdio.h>
#include <string.h> //Contem varias utilidades para strings, uma delas, strlen() usada abaixo para retornar o tamanho de uma string
int main() {
    char name[11]; // ['u', 'm', 'a', ' ', 's', 't', 'r', 'i', 'n', 'g', '\0'] maximo de 10 letras
    printf("Insira o seu nome: ");
    gets(name);
    printf("Ola %s!\n", name);
    printf("Seu nome comeca com a letra '%c'.\nE termina com a letra '%c'.\n", name[0], name[strlen(name) - 1]);
    return(0);
}