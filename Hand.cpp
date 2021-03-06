#include <iostream>
#include <vector>

#include "Hand.h"

using namespace std;

Hand::Hand()
{
  m_Cards.reserve(7);
}

Hand::~Hand()
{
  Clear();
}

void Hand::Add(Card* pCard)
{
  m_Cards.push_back(pCard);
}

void Hand::Clear()
{
  //clearing the hand, freeing the memory on the heap
  vector<Card*>::iterator iter=m_Cards.begin();
  for (iter=m_Cards.begin();iter!=m_Cards.end();++iter)
  {
    delete *iter;
    *iter=0;
  }
  m_Cards.clear();
}

int Hand::GetTotal() const
{
  if(m_Cards.empty())
  {
    return 0;
  }
  //if house's first card is faced down, then its value is 0, return 0
  if (m_Cards[0]->GetValue()==0)
  {
    return 0;
  }

  int total=0;
  vector<Card*>::const_iterator iter;
  for(iter=m_Cards.begin();iter!=m_Cards.end();++iter)
    {
      total+=(*iter)->GetValue();
    }

  //in blackjack ace can have value 1 or 11
  //next part determines whether the hand contains an ace
  bool containsAce=false;
  for(iter=m_Cards.begin();iter!=m_Cards.end();++iter)
    {
      if ((*iter)->GetValue()==Card::ACE)
      {
        containsAce=true;
      }
    }

  //next part treats ace as 11 if total is not greater than 11
  if (containsAce&&total<=11)
  {
    total+=10;
  }
  return total;
}
