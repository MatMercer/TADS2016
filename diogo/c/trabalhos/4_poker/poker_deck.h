/*
 * the card numbers are in
 * poker "strength" order
 * since Ace is the higher one
 * it gets the higher number
 */

/*
 * 1 = 2
 * 2 = 3
 * 3 = 4
 * 4 = 5
 * 5 = 6
 * 6 = 7
 * 7 = 8
 * 8 = 9
 * 9 = 10
 * 10 = Jack | J
 * 11 = Queen | Q
 * 12 = King | K
 * 13 = Ace | A
 *
 * 1 = Spades
 * 2 = Clubs
 * 3 = Heats
 * 4 = Diamonds
 */

//the card, 3 bits for suit, 4 to number
typedef struct Cards{
    unsigned int suit:3;
    unsigned int num:4;
} Card;
Card getRandCard();
void generateDeckRandSeed();
void generateCardPile();
Card cardPile[53];
Card pickCard();
void sortCards(Card c[5]);
void printCard(Card x);
void print5Cards(Card c[5]);
