#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "GenericPlayer.h"

using namespace std;

class Player: public GenericPlayer
{
public:
  Player(const string& name="");
  virtual ~Player();

  //whether the player wants another card
  virtual bool IsHitting() const;

  //next functions announce that the player wins/loses/pushes
  void Win() const;
  void Lose() const;
  void Push() const;
};
#endif
