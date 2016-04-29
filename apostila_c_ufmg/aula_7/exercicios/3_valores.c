#include <stdio.h>
int num;
int func(int a, int b) {
    a = (a+b)/2; //25 
    num -= a; // num = 10 - 25 = -15
    return a;
}
main() {
    int first = 0, sec = 50;
    num = 10;
    num += func(first, sec); //0, 50
    //= 10
    //num = 10, first = 0, sec = 50
    printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d",num, first, sec);
}
