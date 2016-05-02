#include <stdio.h>
#include "poker_deck.h"
#include "texas_holdem.h"

//the players card
Card p1Cards[5];
Card p2Cards[5];

//function prototype
void setPlayersHands();

int main() {
    //loop used var
    int o = 0;

    //players scores
    int p1Score = 0;
    int p2Score = 0;

    //rand seed
    generateDeckRandSeed();
    
    //creates 100 games of poker and test
    //the hands
    for(o = 0; o < 100; o++) {
        printf("\vMATCH %d", o + 1);
        
        //creates a new cardPile
        generateCardPile();

        //set the player hands
        //and compare the score
        setPlayersHands();
        printf("\nPlayer1 cards:\n");
        print5Cards(p1Cards);
        p1Score = getHandPower(p1Cards);

        printf("\nPlayer2 cards:\n");
        print5Cards(p2Cards);
        p2Score = getHandPower(p2Cards);

        if(p1Score > p2Score)
            printf("\n* PLAYER 1 WINS WITH %d OF SCORE *\n", p1Score);
        else if(p2Score > p1Score)
            printf("\n* PLAYER 2 WINS WITH %d OF SCORE *\n", p2Score);
        else
            printf("\n* DRAW WITH %d OF SCORE *\n", p1Score);
    }
    return 0;
}

//used to generate 5 cards hand
//to players
void setPlayersHands() {
    int l = 0;
    for(l = 0; l < 5; l++) {
        p1Cards[l] = pickCard();
        p2Cards[l] = pickCard();
    }
}


