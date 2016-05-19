#include <stdio.h>

int main() {
    int x = 4;
    int in = 1976835124;
    char c = 'l';
    float pi = 3.14159265359;

    printf("%05d\n", x);

    printf("%10.4f\n", pi);

    printf("%5.8d\n", in);

    printf("%d\n", c);
    return 0;
}
