#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>
#include "Deck.h"
#include "House.h"
#include "Player.h"
#include "GenericPlayer.h"

using namespace std;

class Game
{
public:
  Game(const vector<string>& names);
  ~Game();
  void Play();
private:
  Deck m_Deck;
  House m_House;
  vector<Player> m_Players;
};
#endif
