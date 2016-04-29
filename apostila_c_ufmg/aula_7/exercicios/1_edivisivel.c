#include <stdio.h>

int EDivisivel(int a, int b) {
    if(a % b)
        return 0;
    return 1;
}


int main() {
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);   
    printf("%d", EDivisivel(x, y));
    return(0);
}
