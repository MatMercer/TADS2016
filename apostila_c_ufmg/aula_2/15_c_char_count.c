#include <stdio.h>
int main() {
    char string[100];
    char compare;
    int i, count;

    printf("Insira uma string: ");
    gets(string);
    printf("Insira qual letra voce quer procurar nessa string: ");
    scanf("%c", &compare);
    count = 0;
    for(i = 0; string[i] != '\0'; ++i) { //Uma forma de encontrar o tamanho de uma string tambem.
        if(string[i] == compare) {
            ++count;
        }
    }
    printf("A string:\n%s\nTem %d ocorrencias da letra '%c'.\n", string, count, compare);
    return(0);
}