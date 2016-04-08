#include <stdio.h>

//Constantes usadas no calculo
#define FAIXA_MENSAL_2 1903.99
#define FAIXA_MENSAL_3 2826.66
#define FAIXA_MENSAL_4 3751.06
#define FAIXA_MENSAL_5 4664.68
#define FAIXA_ANUAL_2 22499.13
#define FAIXA_ANUAL_3 33477.72
#define FAIXA_ANUAL_4 44476.74
#define FAIXA_ANUAL_5 55373.55
#define PORC_FAIXA_2 0.075
#define PORC_FAIXA_3 0.15
#define PORC_FAIXA_4 0.225
#define PORC_FAIXA_5 0.275
#define MESES_RECEBIDOS 13
#define MAX_DEPENDENTES 12
#define DESC_DEP_MENSAL 189.59
#define DESC_DEP_ANUAL 2275.08

int main() {
    /**************************************
      Declaracoes
     **************************************/
    //Variaveis usadas no calculo e resultado
    short horaMes = 0;
    short dependentes = 0;
    float impostoRenda = 0;
    float valHora = 0;
    float salBruto = 0;
    float salLiquido = 0;
    float desconto = 0;

    /*********************
      Inicio
     *********************/

    /**************************************
      Pede informacoes sobre a carreira
      do usuario
     ***************************************/
    printf("Insira o seu valor hora: ");
    scanf("%f", &valHora);

    printf("Quantas horas voce trabalha em um mes: ");
    scanf("%hd", &horaMes);

    printf("Quantos dependentes: \n");
    scanf("%hd", &dependentes);

    if(dependentes > MAX_DEPENDENTES) {
        dependentes = MAX_DEPENDENTES;
    }

    /**************************************
      Calculos e resultados
     ***************************************/

    //Calculos mensais
    desconto = dependentes * DESC_DEP_MENSAL;
    salBruto = horaMes * valHora - desconto;

    if(salBruto > FAIXA_MENSAL_2) {
        if(salBruto > FAIXA_MENSAL_3) {
            impostoRenda += (FAIXA_MENSAL_3 - FAIXA_MENSAL_2) * PORC_FAIXA_2;
        }
        else {
            impostoRenda += (salBruto - FAIXA_MENSAL_2) * PORC_FAIXA_2;
            goto anual;
        }
    }
    else {
        salLiquido = salBruto;
        goto anual;
    }

    if(salBruto > FAIXA_MENSAL_3) {
        if(salBruto > FAIXA_MENSAL_4) {
            impostoRenda += (FAIXA_MENSAL_4 - FAIXA_MENSAL_3) * PORC_FAIXA_3;
        }
        else {
            impostoRenda += (salBruto - FAIXA_MENSAL_3) * PORC_FAIXA_3;
            goto anual;
        }
    }

    if(salBruto > FAIXA_MENSAL_4) {
        if(salBruto > FAIXA_MENSAL_5) {
            impostoRenda += (FAIXA_MENSAL_5 - FAIXA_MENSAL_4) * PORC_FAIXA_4;
        }
        else {
            impostoRenda += (salBruto - FAIXA_MENSAL_3) * PORC_FAIXA_3;
            goto anual;
        }
    }

    if(salBruto > FAIXA_MENSAL_5) {
         impostoRenda += (salBruto - FAIXA_MENSAL_5) * PORC_FAIXA_5;
    }
anual:

    salLiquido = salBruto - impostoRenda;
    printf("\n\nValores Mensais:\n");
    printf("\nSalário Mensal Bruto: %.2f\n", horaMes * valHora);
    printf("\nIR: %.2f\n", impostoRenda);
    printf("\nSalário Mensal Líquido: %.2f\n", horaMes * valHora - impostoRenda);

    //Calculos anuais
    impostoRenda = 0;
    desconto = dependentes * DESC_DEP_ANUAL;
    salBruto = horaMes * valHora * MESES_RECEBIDOS;
    salBruto -= desconto;
    
    if(salBruto > FAIXA_ANUAL_2) {
        if(salBruto > FAIXA_ANUAL_3) {
            impostoRenda += (FAIXA_ANUAL_3 - FAIXA_ANUAL_2) * PORC_FAIXA_2;
        }
        else {
            impostoRenda += (salBruto - FAIXA_ANUAL_2) * PORC_FAIXA_2;
            goto fim;
        }
    }
    else {
        salLiquido = salBruto;
        goto fim;
    }

    if(salBruto > FAIXA_ANUAL_3) {
        if(salBruto > FAIXA_ANUAL_4) {
            impostoRenda += (FAIXA_ANUAL_4 - FAIXA_ANUAL_3) * PORC_FAIXA_3;
        }
        else {
            impostoRenda += (salBruto - FAIXA_ANUAL_3) * PORC_FAIXA_3;
            goto fim;
        }
    }

    if(salBruto > FAIXA_ANUAL_4) {
        if(salBruto > FAIXA_ANUAL_5) {
            impostoRenda += (FAIXA_ANUAL_5 - FAIXA_ANUAL_4) * PORC_FAIXA_4;
        }
        else {
            impostoRenda += (salBruto - FAIXA_ANUAL_3) * PORC_FAIXA_3;
            goto fim;
        }
    }

    if(salBruto > FAIXA_ANUAL_5) {
         impostoRenda += (salBruto - FAIXA_ANUAL_5) * PORC_FAIXA_5;
    }

fim:

    salLiquido = salBruto - impostoRenda;

    printf("\n\nValores Anuais:\n");
    printf("\nSalário Anual Bruto: %.2f\n", horaMes * valHora * MESES_RECEBIDOS);
    printf("\nIR: %.2f\n", impostoRenda);
    printf("\nSalário Anual Líquido: %.2f\n", horaMes * valHora * MESES_RECEBIDOS - impostoRenda);

    return(0);
}
