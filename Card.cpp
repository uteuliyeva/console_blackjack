#include <iostream>

#include "Card.h"

using namespace std;

ostream& operator<<(ostream& os, const Card& aCard);

Card::Card(rank r, suit s, bool ifu):
  m_Rank(r),
  m_Suit(s),
  m_IsFaceUp(ifu)
{}

int Card::GetValue() const
{
  //if a card is face down, then value is 0
  int value=0;
  if (m_IsFaceUp)
  {
    value=m_Rank;
    //value is 10 if figure card
    if (value>10)
    {
      value=10;
    }
  }
  return value;
}

void Card::Flip()
{
  m_IsFaceUp=!(m_IsFaceUp);
}
