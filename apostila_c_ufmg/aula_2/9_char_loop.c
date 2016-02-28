#include <stdio.h>
int main() {
    char c;
    short i = 0;

    while(i <= 255) {
        printf("%d: ] %c [\n", i, i); //inteiro como char
        i++;
    }
    return(0);
}