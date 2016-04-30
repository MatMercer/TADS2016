#include <stdio.h>
#include "deck.h"

int main() {
    int i = 0;
    int f = 0;
    generateDeckRandSeed();
    for(i; i < 100; i++) {
        scanf("%d", &f);
        Card c = getRandCard();
        printf("%d|%d\n", c.suit, c.num);
    }
    return 0;
}
