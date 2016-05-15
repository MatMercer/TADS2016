/* The poker cards definition, as follows
 * Card | N | Prime
 * A | 12 | 41
 * K | 11 | 37
 * Q | 10 | 31
 * J | 9 | 29
 * T | 8 | 23
 * 9 | 7 | 19
 * 8 | 6 | 17
 * 7 | 5 | 13
 * 6 | 4 | 11
 * 5 | 3 | 7
 * 4 | 2 | 3
 * 3 | 1 | 2
 * 2 | 0 | 1
 *
 * ID | Suit
 * 0 | ♠
 * 1 | ♣
 * 2 | ♥
 * 3 | ♦
*/

typedef struct Cards {
    unsigned int n:4;
    unsigned int s:2;
} Card;

int getCardCode(Card c);
