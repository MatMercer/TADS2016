#include <stdio.h>
#include "pokercard.h"

const short PRIMES[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};

/* 
 * Generates a cardCode based on this
 * method: http://suffe.cool/poker/evaluator.html
*/
int getCardCode(Card c) {
    return ((1 << (c.n - 1)) << 16) | ((1 << c.s) << 12) | (c.n << 8) | (PRIMES[c.n]);
}
