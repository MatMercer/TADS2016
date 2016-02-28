#include <stdio.h>
int main() {
    char letra;
    for(letra = 'A'; letra <= 'z'; ++letra) {
        printf("%c ", letra);
    }
    printf("\n");
    return(0);
}