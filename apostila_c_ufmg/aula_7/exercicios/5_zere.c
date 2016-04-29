#include <stdio.h>

void zere(int *x, int *y);

int main() {
    int y = 7;
    int x = 3;

    zere(&y, &x);
    printf("\n%d|%d\n", x, y);
    return 0;
}

void zere(int *x, int *y) {
    *x = 0;
    *y = 0;
}
