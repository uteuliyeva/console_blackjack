#include <iostream>
#include "GenericPlayer.h"

using namespace std;

GenericPlayer::GenericPlayer(const string& name):
  m_Name(name)
{}

GenericPlayer::~GenericPlayer()
{}

//IsBusted() returns whether the player's total is greater than 21
bool GenericPlayer::IsBusted() const{
  return (GetTotal()>21);
}

//Bust() announces that player is busted
void GenericPlayer::Bust() const
{
  cout<<m_Name<<" busts."<<endl;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
  os<<aGenericPlayer.m_Name<<":\t";
  vector<Card*>::const_iterator pCard;
  if(!aGenericPlayer.m_Cards.empty())
  {
    for (pCard=aGenericPlayer.m_Cards.begin();pCard!=aGenericPlayer.m_Cards.end();++pCard)
    {
      os<<*(*pCard)<<"\t";
    }
    if (aGenericPlayer.GetTotal()!=0)
    {
      cout<<"("<<aGenericPlayer.GetTotal()<<")"<<endl;
    }
  }
  else
  {
    os<<"<empty>";
  }
  return os;
}
