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

//generates a random card
Card getRandCard();

//used to generate a seed for rand()
void generateDeckRandSeed();

//generates a card pile with 52 cards
void generateCardPile();

//the card pile
Card cardPile[53];

//picks a random card from cardPile
//subtracting it
Card pickCard();

//sorts a give card, from A to 1
void sortCards(Card c[5]);

//prints a card
void printCard(Card x);

//prints 5 cards in a row
void print5Cards(Card c[5]);
