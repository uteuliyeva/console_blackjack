#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

class Card
{
public:
  enum rank {ACE=1,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING};
  enum suit {CLUBS,DIAMONDS,HEARTS,SPADES};
  friend ostream& operator<<(ostream& os, const Card& aCard);
  //ifu means is face up? Is the card visible for players?
  Card(rank r=ACE, suit s=CLUBS, bool ifu=true);
  int GetValue() const;
  //flips the card
  void Flip();
private:
  rank m_Rank;
  suit m_Suit;
  bool m_IsFaceUp;
};

#endif
