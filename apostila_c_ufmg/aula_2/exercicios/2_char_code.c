#include <stdio.h>
int main() {
    char word[100];
    while(word[0] != '\0') {
        printf("Insira algo (Aperte Enter para sair): ");
        gets(word);
        printf("'%c' corresponde a: %d\n", word[0], word[0]);
    }
    printf("Adeus \\ :v /\n");
    return(0);
}