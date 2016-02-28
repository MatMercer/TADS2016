#include <stdio.h>
int global = 10;

int main() {
    int local1 = 20;
    int local2 = 30;
    int local3 = 40;
    int local4 = 50;
    int local5 = 60;

    char caractere1 = 'C';
    char caractere2 = 'O';
    char caractere3 = 'E';
    char caractere4 = 'L';
    char caractere5 = 'H';
    char caractere6 = 'A';

    printf("%d%d%d%d%d%d\n", global, local1, local2, local3, local4, local5);
    printf("%c%c%c%c%c%c\n", caractere1, caractere2, caractere3, caractere4, caractere5, caractere6);
    return(0);
}