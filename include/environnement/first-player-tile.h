#ifndef __FIRST_PLAYER_TILE_H_
#define __FIRST_PLAYER_TILE_H_

#include "player.h"

class FirstPlayerTile {

public:
  FirstPlayerTile(Player *firstPLayer);
  FirstPlayerTile();

protected:
  Player *_first_player;
  bool _has_passed;
};

#endif //__FIRST_PLAYER_TILE_H_