#ifndef __ENV_PLAYER_H__
#define __ENV_PLAYER_H__

#include <cstdint>

class Player {
public:
  static Player *CreateListPlayers(uint32_t nb_players);
  Player* setNextPlayer(Player* next_player);

protected:
  Player* _next_player;
};

#endif //__ENV_PLAYER_H__