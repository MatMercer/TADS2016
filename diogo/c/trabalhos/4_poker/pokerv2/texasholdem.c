#include <stdio.h>
#include "pokercard.h"

int getFlush(Card c1, Card c2, Card c3, Card c4, Card c5) {
    return (getCardCode(c1) & getCardCode(c2) & getCardCode(c3) & getCardCode(c4) & getCardCode(c5) & 0xF000);
}
