#include <stdio.h>
#include "mercearia.h"

int main() {
    Venda venda[100];
    int quantidadeVendas = 0;
    char opcao = 0;
    
    while(opcao != 's' && opcao != 'S') {
        printf("Programa para controle vendas de uma mercearia\nOpcoes:\nv: Registrar uma venda\ns: Sair\nInsira sua opcao: ");
        scanf("%c", &opcao);
        __fpurge(stdin);

        if(opcao == 'v' || opcao == 'V') {
            printf("Note que o maximo de vendas que podem ser registradas eh 100.\n");
            getVendaUsuario(&venda[quantidadeVendas]);
            quantidadeVendas += 1;
            __fpurge(stdin);
        }
    }

    printf("%d\n", venda[0].data.dia);
    return 0;
}
