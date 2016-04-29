#include <stdio.h>
int main() {
    double m = 0;

    printf("Insira quantos metros quer converter: ");
    scanf("%lf", &m);

    printf("%.1lf metros sao %lf centimetros.\n", m, m*100);
    return(0);
}