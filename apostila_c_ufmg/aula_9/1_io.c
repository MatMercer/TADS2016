#include <stdio.h>

int main() {
    char buffer[10];
    printf("Entre com o seu nome: ");
    gets(buffer);
    printf("O nome é: ");
    buffer[9] = '\n';
    puts(buffer);

    return 0;
}
