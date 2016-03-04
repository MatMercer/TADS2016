#include <stdio.h>
int main() {
    char str[100];
    printf("Insira uma string: ");
    gets(str);
    printf("%s\n", str);
    int i, count;
    for(i = 0; str[i] != '\0'; ++i) {
        switch (str[i]) {
            case 'a':
                str[i] = '4';
            break;

            case 'A':
                str[i] = '4';
            break;

            case 'e':
                str[i] = '3';
            break;

            case 'E':
                str[i] = '3';
            break;

            case 'i':
                str[i] = '1';
            break;

            case 'I':
                str[i] = '1';
            break;

            case 's':
                str[i] = '5';
            break;

            case 'S':
                str[i] = '5';
            break;

            case 't':
                str[i] = '7';
            break;

            case 'T':
                str[i] = '7';
            break;

            case 'o':
                str[i] = '0';
            break;

            case 'O':
                str[i] = '0';
            break;
        }

        //if(str[i] == 'a' || str[i] == 'A') {
        //    str[i] = '4';
        //    ++count;
        //}
        //if(str[i] == 'e' || str[i] == 'E') {
        //    str[i] = '3';
        //    ++count;
        //}
        //if(str[i] == 'i' || str[i] == 'I') {
        //    str[i] = '1';
        //    ++count;
        //}
        //if(str[i] == 's' || str[i] == 'S') {
        //    str[i] = '5';
        //    ++count;
        //}
        //if(str[i] == 't' || str[i] == 'T') {
        //    str[i] = '7';
        //    ++count;
        //}
        //if(str[i] == 'o' || str[i] == 'O') {
        //    str[i] = '0';
        //    ++count;
        //}
    }
    printf("%s\n", str);
    return(0);
}