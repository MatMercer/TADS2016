#include <stdio.h>

float prod(float x, float y) {
    return(x*y);
}

int main () {
    float value = prod(5.71, 3.23);
    printf("O valor eh: %f\n", value);
    return(0);
}