#include <stdio.h>
#include "mercearia.h"

int main() {
    Venda vendas[MAX_VENDAS];
    Data relatorioDataInicial;
    Data relatorioDataFinal;
    int quantidadeVendas = 0;    
    char opcao = 0;
    
    while(opcao != 's' && opcao != 'S') {
        printf("\nPrograma para controle vendas de uma mercearia\n\nOpcoes:\nv: Registrar uma venda\nr: Relatorio com data inicial e final\ns: Sair\n\nInsira sua opcao: ");
        scanf("%c", &opcao);
        __fpurge(stdin);

        if(opcao == 'v' || opcao == 'V') {
            printf("\nNote que o maximo de vendas que podem ser registradas eh %d.\n", MAX_VENDAS);
            getVendaUsuario(&vendas[quantidadeVendas]);
            quantidadeVendas += 1;
            __fpurge(stdin);
        }

        if(opcao == 'r' || opcao == 'R') {
            printf("\nData Inicial:\n");
            getDataUsuario(&relatorioDataInicial);
            printf("\nData Final:\n");
            getDataUsuario(&relatorioDataFinal);
            __fpurge(stdin);

            relatorioVenda(vendas, relatorioDataInicial, relatorioDataFinal, quantidadeVendas);
        }
    }

    return 0;
}
