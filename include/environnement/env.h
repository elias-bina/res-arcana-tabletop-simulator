#ifndef __ENVIRONNEMENT_H__
#define __ENVIRONNEMENT_H__

#include <iostream>
#include <string>
#include <list>

#include "cards/magic-item.h"
#include "cards/place-of-power.h"

#include "first-player-tile.h"
#include "player.h"

class Environnement {
public:
  Environnement(int nb);
  void print_players();

protected:
  int _nb_players;

  std::list<GenericBuyableCard> _deck_of_monuments;
  std::list<GenericBuyableCard> _revealed_monuments;
  std::list<MagicItemCard> _magic_items_availables;
  std::list<PlaceOfPowerCard> _places_of_power;

  Player* _list_players;
  FirstPlayerTile _first_player_tile;
};

#endif //__ENVIRONNEMENT_H__