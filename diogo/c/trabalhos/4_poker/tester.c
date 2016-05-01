#include <stdio.h>
#include "poker_deck.h"

int main() {
    int i = 0;
    generateCardPile();
    generateDeckRandSeed();
    Card c;

    printf("\nGenerated cards:\n");

    for(i = 0; i < 52; i++) {
        if(!(i % 4)) 
            printf("\n");
        printf("\n%d|%d - ", cardPile[i].suit, cardPile[i].num);

        printCard(cardPile[i]);
    }
    printf("\n\nPicked cards from a pile:\n");
    for(i = 0; i < 52; i++) {
        if(!(i % 4)) 
            printf("\n");
        c = pickCard();
        printf("\n%d|%d - ", c.suit, c.num);
        printCard(c);
    }

    return 0;
}
