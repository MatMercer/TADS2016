#include <stdio.h>

int mult(float a, float b, float c) {
    printf("%f\n", a*b*c);
    return(0);
}

int main() {
    float x, y;
    x = 23.5;
    y = 32.9;
    mult(x, y, (float)7/9); //Conversao, aqui voce diz "quero um float"
    return(0);
}