#include <stdio.h>
int main() {
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    printf("%d\n", **q); // O erro estava em '&q', onde faria outro ponteiro em 'q', sendo assim, int ***
    return(0);
} 