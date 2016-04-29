#include <stdio.h>
#include "2_func.h"
int main() {
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);   
    printf("%d\n", EDivisivel(x, y));
    return(0);
}
