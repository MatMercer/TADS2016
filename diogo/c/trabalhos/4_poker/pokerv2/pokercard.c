#include <stdio.h>
#include "lists.h"
#include "pokercard.h"

/* 
 * Generates a cardCode based on this
 * method: http://suffe.cool/poker/evaluator.html
*/
int getCardCode(Card c) {
    return ((1 << (c.n - 1)) << 16) | ((1 << c.s) << 12) | (c.n << 8) | (PRIMES[c.n]);
}
