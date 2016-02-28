#include <stdio.h>
int main() {
    //verdadeiro
    printf("%d\n", ((10>5)||(5>10)));

    //verdadeiro
    printf("%d\n", (!(5==6)&&(5!=6)&&((2>1)||(5<=4))));
    return(0);
}