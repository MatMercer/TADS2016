#include <stdio.h>
#include "poker_deck.h"

//util vars
int w = 0;
int g = 0;
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
    if(straightFlush(c)) {
        p += 800;
        return p;
    }
    if(fourOfAKind(c)) {
        p += 700;
        return p;
    }
    if(fullHouse(c)) {
        p += 600;
        return p;
    }
    if(flush(c)) {
        p += 500;
        return p;
    }
    if(straight(c)) {
        p += 400;
        return p;
    }
    if(threeOfAKind(c)) {
        p += 300;
        return p;
    }
    if(twoPairs(c)) {
        p += 200;
        return p;
    }
    if(pair(c)) {
        p += 100;
        return p;
    }
    return p; 
}

//checks for a royal flush
int royalFlush(Card c[5]) {
    for(w = 0; w < 5; w++) {
        //if suit is always the same and num is in the sequence
        if(c[w].suit == c[0].suit && c[w].num == 13 - w)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a straightFlush
int straightFlush(Card c[5]) {
    for(w = 1; w < 5; w++) {
        //if suit is always the same and num is in the sequence
        if(c[w].suit == c[0].suit && c[w].num == c[0].num - w)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a four of a kind
int fourOfAKind(Card c[5]) {
    for(w = 1; w < 4; w++) {
        if(c[w].num == c[0].num)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a full house
int fullHouse(Card c[5]) {
    if(c[0].num == c[2].num)
        g = 1;
    else
        g = 0;

    //checks the first part
    for(w = 1; w < 2 + g; w++) {
        if(c[w].num == c[0].num)
            continue;
        else 
            return 0;
    }

    //checks the second part
    for(w = 2 + g; w < 5; w++) {
        if(c[w].num == c[2 + g].num)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a flush
int flush(Card c[5]) {
    for(w = 1; w < 5; w++) {
        if(c[w].suit == c[0].suit)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a straight
int straight(Card c[5]) {
    for(w = 1; w < 5; w++) {
        if(c[w].num == c[0].num - w)
            continue;
        else 
            return 0;
    }
    return 1;
}

//checks for a three of a kind
int threeOfAKind(Card c[5]) {
    if(c[0].num == c[2].num)
        g = 0;
    else if(c[1].num == c[3].num)
        g = 1;
    else if(c[2].num == c[4].num)
        g = 2;
    else
        return 0;
    
    for(w = g; w < 5 - g; w++) {
        if(c[w].num == c[g].num)
            continue;
        else 
            return 0;
    }

    return 1;
}

int twoPairs(Card c[5]) {
    if(c[0].num == c[1].num)
        g = 0;
    else
        g = 1;

    for(w = g; w < 2 + g; w++) {
        if(c[w].num == c[g].num)
            continue;
        else 
            return 0;
    }

    for(w = 2 + g; w < 4 + g; w++) {
        if(c[w].num == c[2 + g].num)
            continue;
        else {
            if(c[3].num == c[4].num)
                continue;
            return 0;
        }
    }

    return 1;
}

int pair(Card c[5]) {
    for(w = 0; w < 4; w++) {
        for(g = w + 1; g < 5; g++) {
            if(c[w].num == c[g].num)
                return 1;
        }
    }
    return 0;
}
