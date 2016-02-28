#include <stdio.h>

int forEquivalente(int x) { 
    if(x < 10) {
        printf("%d", x);
        forEquivalente(x + 1);
    }
    else {
        printf("\n");
        return(0);
    }
}

int main() {
    int x = 0;
    forEquivalente(x);

    for (x; x < 10; ++x) {  //++x equivale a x = x + 1 que equivale a x += 1
       printf("%d", x);
    }

    printf("\n");
    return(0);
}