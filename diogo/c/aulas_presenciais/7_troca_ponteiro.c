#include <stdio.h>

void flip(int *, int *);

int main() {
    unsigned int x = 1147483047;
    int y = 2147483647;
    
    flip(&x, &y);

    printf("%d|%d", x, y);
    return 0;
}

void flip(int *x, int *y) { // 1, 3
    *x += *y; //x = 3 + 1
    *y = *x - *y; //y = 4 - 3
    *x -= *y; //x -= 1
} //3, 1
