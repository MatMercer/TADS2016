#include <stdio.h>

//variavel global
int x = 2;

int main() {
    int y = 5;

    for(x; x < 10; x++) {
        int y = -x + (3 * (x + 3)); //variavel local
        printf("|%d|", x*y);
    }

    printf("\n|%d|\n", x*y); //y = 5, diferente do acima
    return 0;
}
