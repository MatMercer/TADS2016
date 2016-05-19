#include <stdio.h>

int main() {
    int a;
    int * pa;
    int * pi; 

    pa = &a;

    *pa = 12;
    
    for(a = 100; a > 0; a--) {
        int i = a + 100 - a;
        pi = &i;
        printf("Endereço: %p | Valor: %d\n", (void *)pi, *pi);
    }
    return 0;
}
