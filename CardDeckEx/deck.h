#ifndef DECK_H
#define DECK_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Deck class
 */


#include "id_vector.h"
#include "card.h"

class Deck {
public:
   Deck();
   ~Deck();

   void  shuffle();
   Card* getTopCard();

   int getNumberOfCardsLeft();

   void print();

private:
   int currentTop; // use this index to keep track of the top card
      // TODO Add a data member to keep track of the cards
};

#endif
