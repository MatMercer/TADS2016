//deck stuff

//as follows:

//1 = Ace | A
//2 = 2
//3 = 3
//4 = 4
//5 = 5
//6 = 6
//7 = 7
//8 = 8
//9 = 9
//10 = 10
//11 = Jack | J
//12 = Queen | Q
//13 = King | K

//1 = Spades
//2 = Clubs
//3 = Heats
//4 = Diamonds


//the card, 3 bits for suit, 4 to number
typedef struct Cards{
    unsigned int suit:3;
    unsigned int num:4;
} Card;
Card getRandCard();
void generateDeckRandSeed();
