#include <stdio.h>
int main() {
    int x = 2; //binario
    int y = 2*x; //binario
    int z = -y; //unario
    int w = y % 2;
    int i = y / 2;
    int b = ++x; //x agora vale 3 e b tambem
    int c = x++; //x muda para 4 mas c fica com o antigo valor (3) pois x++ nao retorna o novo valor
    c *= c;

    printf("x: %d y: %d z: %d w: %d i: %d b: %d c: %d \n", x, y, z, w, i, b, c);
    return(0);
}