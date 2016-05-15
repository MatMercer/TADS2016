#include <stdio.h>
#include "pokercard.h"

int main() {
    Card c;

    c.n = 11;
    c.s = 3;

    printf("%x", getCardCode(c));
    return 0;
}
