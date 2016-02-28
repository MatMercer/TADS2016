#include <stdio.h>
int main() {
    char str[100];
    printf("Insira uma string: ");
    gets(str);
    printf("%s\n", str);
    int i, count;
    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i] == 'a' || str[i] == 'A') {
            str[i] = '4';
            ++count;
        }
        if(str[i] == 'e' || str[i] == 'E') {
            str[i] = '3';
            ++count;
        }
        if(str[i] == 'i' || str[i] == 'I') {
            str[i] = '1';
            ++count;
        }
        if(str[i] == 's' || str[i] == 'S') {
            str[i] = '5';
            ++count;
        }
        if(str[i] == 't' || str[i] == 'T') {
            str[i] = '7';
            ++count;
        }
        if(str[i] == 'o' || str[i] == 'O') {
            str[i] = '0';
            ++count;
        }
    }
    printf("%s\n", str);
    return(0);
}