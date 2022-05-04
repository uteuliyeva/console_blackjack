#ifndef DECK_H
#define DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

using namespace std;

class Deck: public Hand
{
public:
  Deck();
  virtual ~Deck();
  //creates a deck of 52 cards
  void Populate();
  void Shuffle();
  void Deal(Hand& aHand);
  void AdditionalCards(GenericPlayer& aGenericPlayer);
};
#endif
