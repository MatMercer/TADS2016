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
        printf("Insira o dia: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->dia) != 1 || data->dia > 31 || data->dia <= 0);

    do {
        printf("Insira o mes: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->mes) != 1 || data->mes > 12 || data->mes <= 0);

    do {
        printf("Insira o ano: ");
        __fpurge(stdin);
    }
    while(scanf("%d", &data->ano) != 1 || data->ano <= 0);
}

void printVenda(Venda venda) {
    printf("\nData da venda: %02d/%02d/%04d\n", venda.data.dia, venda.data.mes, venda.data.ano);
    printf("Nome do produto: %s\n", venda.nome);
    printf("Valor da venda sem desconto: $%.2f\n", venda.valor);
    printf("Desconto: %.2f\%%\n", venda.desconto);
    printf("Valor da venda com desconto: $%.2f\n", venda.valor - (venda.valor * (venda.desconto / 100)));
}

void relatorioVenda(Venda *vendas, Data dataInicial, Data dataFinal, int quantidade) {
    int i = 0;

    for(i = 0; i < quantidade; i++) {
        if(intervalo(dataInicial, vendas[i].data, dataFinal)) {
            printVenda(vendas[i]);
        }
    }
}

int dataValor(Data data) {
    return (data.ano * 10000) + (data.mes * 100) + data.dia;
}

int intervalo(Data min, Data x, Data max) {
    int minValor = dataValor(min);
    int xValor = dataValor(x);
    int maxValor = dataValor(max);

    if(minValor <= xValor && maxValor >= xValor) {
        return 1;
    }
    else {
        return 0;
    }
}
