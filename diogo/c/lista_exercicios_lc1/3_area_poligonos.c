#include <stdio.h>
#include <math.h>

void calcTriangulo(double *result, double *arg0) {
    printf("\nInsira a base: ");
    scanf("%lf", &*result);
    printf("Insira a altura: ");
    scanf("%lf", &*arg0);
    *result = (*result) * (*arg0)/2;
}

void calcQuadrado(double *result) {
    printf("\nInsira a o tamanho do lado: ");
    scanf("%lf", &*result);
    *result *= *result;
}

void calcRetangulo(double *result, double *arg0) {
    printf("\nInsira a base: ");
    scanf("%lf", &*result);
    printf("Insira a altura: ");
    scanf("%lf", &*arg0);
    *result = (*result) * (*arg0);
}

void calcTrapezio(double *result, double *arg0) {
    printf("\nInsira a base menor: ");
    scanf("%lf", &*result);
    printf("Insira a base maior: ");
    scanf("%lf", &*arg0);
    *result += *arg0;
    printf("Insira a altura: ");
    scanf("%lf", &*arg0);
    *result = (*result) * (*arg0) / 2;
}

void calcLosango(double *result, double *arg0) {
    printf("\nInsira uma diagonal: ");
    scanf("%lf", &*result);
    printf("Insira outra: ");
    scanf("%lf", &*arg0);
    *result = (*result) * (*arg0) / 2;
}

void calcCirculo(double *result) {
    printf("\nInsira o raio: ");
    scanf("%lf", &*result);
    *result = (*result * *result) * M_PI;
}

int main() {
    int escolha;
    double area, arg0;

    printf("Esse programa calcula a area de diversos poligonos.\n[0]Sair\n[1]Triangulo\n[2]Quadrado\n[3]Retangulo\n[4]Trapezio\n[5]Losango\n[6]Circulo\n");

    while(1) {
        area = arg0 = escolha = 0;
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                calcTriangulo(&area, &arg0);
                printf("\nA area desse triangulo eh: %.3lf\n", area);
            break;
    
            case 2:
                calcQuadrado(&area);
                printf("\nA area desse quadrado eh: %.3lf\n", area);
            break;
    
            case 3:
                calcRetangulo(&area, &arg0);
                printf("\nA area desse retangulo eh: %.3lf\n", area);
            break;
    
            case 4:
                calcTrapezio(&area, &arg0);
                printf("\nA area desse trapezio eh: %.3lf\n", area);
            break;
    
            case 5:
                calcLosango(&area, &arg0);
                printf("\nA area desse losango eh: %.3lf\n", area);
            break;
    
            case 6:
                calcCirculo(&area);
                printf("\nA area desse circulo eh: %.3lf\n", area);
            break;

            default:
                return(0);
                break;
        }
    }
    
}