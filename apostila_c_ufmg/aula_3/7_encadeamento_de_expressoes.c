#include <stdio.h>
int main() {
    int y;
    int x = (y = 2, y + 3); //5

    //Duvida: porque colocando desta forma:
    //int x = (y = 2, y + 3, y*y);
    //retorna 2 * 2 ? (4)
    printf("%d\n", x);
    return(0);
}