#include <stdio.h>
//regras de escopo
char global = 'O';

char L() {
    char local = 'L';
    return local;
}

int main() {
    int i;
    char local = global;
    printf("%c%c%c\n", L(), local, L());
    for (i = 1; i <= 5; ++i) {
        int local = i;
        printf("%d\n", local);
    }
    printf("%c\n", local);
    return(0);
}