#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "poker_deck.h"

//'util use' vars
int i = 0;
int j = 0;
int z = 0;

//a rand var, used as random percentage
double randVar = 0;

//a single card var for storage
Card c;

//card count in cardPile
short cardCount;

//generates a random card
Card getRandCard() {
    //the randvar as percentage
    randVar = (double)rand()/RAND_MAX;
    c.num = (13 * randVar) + 1;

    randVar = (double)rand()/RAND_MAX;
    c.suit = (4 * randVar) + 1;
    return c;
}

//generates the card pile
//can be used to reset the pile
void generateCardPile() {
    //z is the array index
    //i is the number (1 - 13)
    //j is the suit (1 - 4)
    for(z = 0, i = 1; i < 14; i++) {
        for(j = 1; j < 5; j++, z++) {
            cardPile[z].num = i;
            cardPile[z].suit = j;
        }
    }

    //the index in the cardPile array
    //since the pile is full, the index
    //will be 51
    cardCount = z;
}

//pick a random card
//from the card pile
Card pickCard() {

    //select a random card
    //based in the cardPile
    //size
    randVar = (double)rand()/RAND_MAX;
    i = cardCount * randVar;
    c = cardPile[i];

    //shift all the cards to the left from
    //the choosen one
    for(j = i + 1; j <= cardCount; j++) {
        cardPile[j - 1] = cardPile[j];
    }

    //decrement the cardPile
    //preventing dupe cards
    cardCount -= 1;

    //warnings that the cardPile is empty
    if(!cardCount) {
        printf("\nThe cardPile is empty!");
    }

    //return the picked card
    return c;
}

//generates a seed for rand
void generateDeckRandSeed() {
    srand(time(NULL));
}

//insertion sort implement
//to sort the cards
void sortCards(Card c[5]) {
    Card pivot;
    for(i = 1; i < 5; i++) {
        pivot = c[i];
        j = i - 1;
        while(j >= 0 && c[j].num < pivot.num) {
            c[j + 1] = c[j];
            j -= 1;
        }
        c[j + 1] = pivot;
    }
}


//prints 5 cards
void print5Cards(Card c[5]) {
    for(i = 0; i < 5; i++) {
        printCard(c[i]);
        printf(" ");
    }
}

//prints a given card
void printCard(Card x) {
    switch (x.suit) {
        case 1:
            switch (x.num) {
                case 1:
                    printf("🂢");
                    break;
                case 2:
                    printf("🂣");
                    break;
                case 3:
                    printf("🂤");
                    break;
                case 4:
                    printf("🂥");
                    break;
                case 5:
                    printf("🂦");
                    break;
                case 6:
                    printf("🂧");
                    break;
                case 7:
                    printf("🂨");
                    break;
                case 8:
                    printf("🂩");
                    break;
                case 9:
                    printf("🂪");
                    break;
                case 10:
                    printf("🂫");
                    break;
                case 11:
                    printf("🂭");
                    break;
                case 12:
                    printf("🂮");
                    break;
                case 13:
                    printf("🂡");
                    break;
                default:
                    break;
            }
            break;
        case 2:
            switch (x.num) {
                case 1:
                    printf("🃒");
                    break;
                case 2:
                    printf("🃓");
                    break;
                case 3:
                    printf("🃔");
                    break;
                case 4:
                    printf("🃕");
                    break;
                case 5:
                    printf("🃖");
                    break;
                case 6:
                    printf("🃗");
                    break;
                case 7:
                    printf("🃘");
                    break;
                case 8:
                    printf("🃙");
                    break;
                case 9:
                    printf("🃚");
                    break;
                case 10:
                    printf("🃛");
                    break;
                case 11:
                    printf("🃝");
                    break;
                case 12:
                    printf("🃞");
                    break;
                case 13:
                    printf("🃑");
                    break;
                default:
                    break;
            }
            break;
        case 3:
            switch (x.num) {
                case 1:
                    printf("🂲");
                    break;
                case 2:
                    printf("🂳");
                    break;
                case 3:
                    printf("🂴");
                    break;
                case 4:
                    printf("🂵");
                    break;
                case 5:
                    printf("🂶");
                    break;
                case 6:
                    printf("🂷");
                    break;
                case 7:
                    printf("🂸");
                    break;
                case 8:
                    printf("🂹");
                    break;
                case 9:
                    printf("🂺");
                    break;
                case 10:
                    printf("🂻");
                    break;
                case 11:
                    printf("🂽");
                    break;
                case 12:
                    printf("🂾");
                    break;
                case 13:
                    printf("🂱");
                    break;
                default:
                    break;
            }
            break;
        case 4:
            switch (x.num) {
                case 1:
                    printf("🃂");
                    break;
                case 2:
                    printf("🃃");
                    break;
                case 3:
                    printf("🃄");
                    break;
                case 4:
                    printf("🃅");
                    break;
                case 5:
                    printf("🃆");
                    break;
                case 6:
                    printf("🃇");
                    break;
                case 7:
                    printf("🃈");
                    break;
                case 8:
                    printf("🃉");
                    break;
                case 9:
                    printf("🃊");
                    break;
                case 10:
                    printf("🃋");
                    break;
                case 11:
                    printf("🃍");
                    break;
                case 12:
                    printf("🃎");
                    break;
                case 13:
                    printf("🃁");
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}
