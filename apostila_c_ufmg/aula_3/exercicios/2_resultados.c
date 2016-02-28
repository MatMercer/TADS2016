#include <stdio.h>
int main() {
    int x,y,z;
    x=y=10;
    z=++x;
    x=-x;
    y++;
    x=x+y-(z--);

    //x = -11
    //y = 11
    //z = 10

    printf("x: %d y: %d z: %d \n", x, y, z);
    return(0);
}