#include <stdio.h>
#include "pokercard.h"

/*
 * Checks for a flush, if false, returns
 * 0, if true, returns the suit binary code
*/
int getFlush(Card c1, Card c2, Card c3, Card c4, Card c5) {
    return (getCardCode(c1) & getCardCode(c2) & getCardCode(c3) & getCardCode(c4) & getCardCode(c5) & 0xF000);
}

/*
 * Checks for a straight, if false, returns
 * 0, if true, returns the straight power
*/
int getStraight(Card c1, Card c2, Card c3, Card c4, Card c5) {
    int i = 0;

    /*
     * Get only the card number
    */
    int n = (((getCardCode(c1) | getCardCode(c2) | getCardCode(c3) | getCardCode(c4) | getCardCode(c5)) & 0xFFFF0000) >> 16);
    int res = n;
   
    /*
     * Removes all the right zeros
    */
    while((res & 0x1) == 0) {
        res >>= 1;
        i++;
    }
    
    /* 
     * Checks for consecutive 1's
     * until res is equals 1
    */
    while((res & 0x1) == 1) {
        if(res == 1)
            return n;
        else
            res >>= 1;
    }

    return 0;
}
