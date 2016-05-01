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
    testHand[0].num = 10;
    testHand[1].suit = 1;
    testHand[1].num = 9;
    testHand[2].suit = 1;
    testHand[2].num = 8;
    testHand[3].suit = 1;
    testHand[3].num = 7;
    testHand[4].suit = 1;
    testHand[4].num = 6;

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
