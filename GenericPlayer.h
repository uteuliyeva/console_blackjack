#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#include <iostream>
#include <string>
#include "Hand.h"

using namespace std;

class GenericPlayer: public Hand
{
  friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
public:
  GenericPlayer(const string& name="");
  virtual ~GenericPlayer();
  virtual bool IsHitting() const=0;
  //IsBusted() returns whether the player's total is greater than 21
  bool IsBusted() const;
  //Bust() announces that player is busted
  void Bust() const;
protected:
  string m_Name;
};
#endif
