#include <stdio.h>
int main() {
    int i, j, x;
    
    printf("Insira a tabuada que voce quer (exemplo: 10): \n");
    scanf("%d", &x);

    for (i = 1; i <= x; ++i) {
        printf("# %d #", i);
    }

    printf("\n");
    for(j = 1; j <= x; j++) {   //printa as linhas
        for(i = 1; i <= x; ++i) {   //preenche a tabuada com o numero da linha (j) vezes a posicao (i)
            printf("| %d |", j * i);
        }
        printf("\n");
    }
    return(0);
}