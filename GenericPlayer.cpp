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
