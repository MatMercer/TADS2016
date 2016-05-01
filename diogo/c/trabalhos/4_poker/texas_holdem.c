#include <stdio.h>
#include "poker_deck.h"

//util vars
int w = 0;

//the middle cards
Card middle[5];

//generates new middle cards
void generateMiddleCards() {
    generateCardPile();
    for(w = 0; w < 5; w++) {
        middle[w] = pickCard();
    }
}

//new game
void newGame() {
    generateMiddleCards();
}

//prints the 5 middle cars
void printMiddleCards() {
    for(w = 0; w < 5; w++) {
        printCard(middle[w]);
        printf(" ");
    }
}
