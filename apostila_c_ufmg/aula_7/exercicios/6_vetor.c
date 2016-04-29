#include <stdio.h>

void levetor(int *vet, int dimensao);

int main() {
    int tam;
    int i = 0;

    printf("Quantos numeros voce quer inserir? ");
    scanf("%d", &tam);

    int x[tam];

    levetor(x, tam);
    
    printf("\n[");
    for(i; i < tam; i++) {
        if(i + 1 != tam)
            printf("%d, ", x[i]);
        else    
            printf("%d", x[i]);
    }
    printf("]\n");
    return 0;
}

void levetor(int *vet, int dimensao) {
    int control = 0;

    for(control; control < dimensao; control++, *vet++) {
        printf("Insira um numero: ");
        scanf("%d", vet);
    }
}
