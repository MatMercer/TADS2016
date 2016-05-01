#include <stdio.h>
#include "poker_deck.h"
#include "texas_holdem.h"

int main() {
    int i = 0;
    generateCardPile();
    generateDeckRandSeed();
    Card c;
    Card testHand[5];
    testHand[0].suit = 1;
    testHand[0].num = 2;
    testHand[1].suit = 2;
    testHand[1].num = 2;
    testHand[2].suit = 3;
    testHand[2].num = 2;
    testHand[3].suit = 2;
    testHand[3].num = 8;
    testHand[4].suit = 4;
    testHand[4].num = 5;

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


    newGame();

    printf("\n\n");
    print5Cards(testHand);

    printf("\nPower: %d", getHandPower(testHand));
    return 0;
}
