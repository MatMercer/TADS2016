#include <stdio.h>
#include "mercearia.h"

void getVendaUsuario(Venda *venda) {
    getNomeProdutoUsuario(venda);
    getPrecoProdutoUsuario(venda);
    getDescontoUsuario(venda);
    getDataUsuario(&venda->data);
}

void getNomeProdutoUsuario(Venda *venda) {
    printf("Insira o nome do produto vendido: ");
    fgets(venda->nome, 20, stdin);
}

void getPrecoProdutoUsuario(Venda *venda) {
    do {
        printf("Insira o preco do produto: ");
        __fpurge(stdin);
    }
    while(scanf("%f", &venda->valor) != 1 || venda->valor < 0);
}

void getDescontoUsuario(Venda *venda) {
    do {
        printf("Insira o desconto do produto: ");
        __fpurge(stdin);
    }
    while(scanf("%f", &venda->desconto) != 1 || venda->desconto < 0 || venda->desconto > 100);
}

void getDataUsuario(Data *data) {
    do {
        printf("Insira o dia da venda: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->dia) != 1 || data->dia > 31 || data->dia <= 0);
    
    do {
        printf("Insira o mes da venda: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->mes) != 1 || data->mes > 12 || data->mes <= 0);
    
    do {
        printf("Insira o ano da venda: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->ano) != 1 || data->ano <= 0);
}
