#include <stdio.h>
#include "poker_deck.h"

//util vars
int w = 0;
int p;
int sum;

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


int sumCardNums(Card c[5]) {
    sum = 0;
    for(w = 0; w < 5; w++) {
        sum += c[w].num;
    }
    return sum;
}

//get the card power, as follow:
//royal flush: 900 + all the cards values
//straight flush: 800 + all the cards values
//four of a kind: 700 + all the cards values
//full house: 600 + all the cards values
//flush: 500 + all the cards values
//straight: 400 + all the cards values
//three of a kind: 300 + all the cards values
//two pairs: 200 + all the cards values
//pair: 100 + all the cards values
//high card: sum of all the cards value (5 * 13 will never be more than 100 so...)
int getHandPower(Card c[5]) {
    p = sumCardNums(c);
    sortCards(c);

    if(royalFlush(c)) {
        p += 900;
        return p;
    }
    return p; 
}

//checks for a royal flush
int royalFlush(Card c[5]) {
    int pivotSuit = c[0].suit;
    
    for(w = 0; w < 5; w++) {
        //if suit is always the same and num is in the sequence
        if(c[w].suit == pivotSuit && c[w].num == 13 - w)
            continue;
        else 
            return 0;
    }
    return 1;
}
