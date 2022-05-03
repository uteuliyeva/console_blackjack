#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include "GenericPlayer.h"

class House: public GenericPlayer
{
public:
  House(const string& name="House");
  virtual ~House();

  //whether the House adds new card to the hand
  virtual bool IsHitting() const;

  //reveal first card to players when hitting is over
  void FlipFirstCard();
};
#endif
