#include <stdio.h>
#include "pokercard.h"
#include "texasholdem.h"

int main() {
    Card c;
    Card c1;
    Card c2;
    Card c3;
    Card c4;

    c.n = 8;
    c.s = 3;

    c1.n = 7;
    c1.s = 3;

    c2.n = 6;
    c2.s = 3;

    c3.n = 5;
    c3.s = 3;

    c4.n = 4;
    c4.s = 3;
    printf("%x\n", getFlush(c, c1, c2, c3, c4));

    printf("%x\n", getStraight(c, c1, c2, c3, c4));
    return 0;
}
