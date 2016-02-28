#include <stdio.h>

float prod(float x, float y) {
    return(x+y);
}

int main () {
    float value = prod(145.7412, 4.412);
    printf("A soma eh: %f\n", value);
    return(0);
}