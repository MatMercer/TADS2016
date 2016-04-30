#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

//a rand var, used as random percentage
double randVar = 0;
//a single card var for storage
Card c;

//generates a random card
Card getRandCard() {
    //the randvar as percentage
    randVar = (double)rand()/RAND_MAX;
    c.num = (13 * randVar) + 1;

    randVar = (double)rand()/RAND_MAX;
    c.suit = (4 * randVar) + 1;
    return c;
}

//generates a seed for rand
void generateDeckRandSeed() {
    srand(time(NULL));
}
