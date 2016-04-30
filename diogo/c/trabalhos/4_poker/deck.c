#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

//'util use' vars
int i = 0;
int j = 0;
int z = 0;

//a rand var, used as random percentage
double randVar = 0;

//a single card var for storage
Card c;

//the cardPile
Card cardPile[53];

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
    for(z = 0, i = 1; i < 14; i++) {
        for(z, j = 1; j < 5; j++, z++) {
            cardPile[z].num = i;
            cardPile[z].suit = j;
        }
    }
    cardCount = z;
}

//pick a random card of
//from card pile
Card pickCard() {
    randVar = (double)rand()/RAND_MAX;
    i = cardCount * randVar;
    c = cardPile[i];

    for(j = i + 1; j <= cardCount; j++) {
        cardPile[j - 1] = cardPile[j];
    }

    cardCount -= 1;

    return c;
}

//generates a seed for rand
void generateDeckRandSeed() {
    srand(time(NULL));
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
