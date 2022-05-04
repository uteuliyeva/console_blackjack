//Blackjack
//Computer takes the role of the House and plays a simple version of Blackjack with 1-7 players

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#include "Game.h"

using namespace std;

int main() {
  cout<<"--------Welcome to Blackjack!--------\n\n";
  int numPlayers=0;
  while(numPlayers<1||numPlayers>7)
    {
      cout<<"Enter the number of players (1-7): ";
      cin>>numPlayers;
    }

  vector<string> names;
  string name;
  for (int i=0; i<numPlayers;++i)
    {
      cout<<"Enter player name: ";
      cin>>name;
      names.push_back(name);
    }
  cout<<endl;

  Game aGame(names);
  char response='y';
  while (response!='n'&&response!='N')
    {
      aGame.Play();
      cout<<"\nDo you want to play again? (y/n): ";
      cin>>response;
      cout<<endl;
    }
  return 0;
}
