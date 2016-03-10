#include <stdio.h>
int main() {
    char str[100];
    printf("Insira uma string: ");
    gets(str);
    printf("%s\n", str);
    int i, count;
    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i] == 'a') {
            str[i] = 'b';
            ++count;
        }
        else if(str[i] == 'A') {
            str[i] = 'B';
            ++count;
        }
    }
    printf("%s\n", str);
    printf("%d modificacoes\n", count);
    return(0);
}