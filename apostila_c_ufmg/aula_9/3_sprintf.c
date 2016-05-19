#include <stdio.h>
int main() {
    int i;
    char string1[20];
    printf( " Entre um valor inteiro: ");
    scanf("%d", &i);
    sprintf(string1,"Valor de i = %d", i);
    puts(string1);
    return 0;
}
