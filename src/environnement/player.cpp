

#include "environnement/player.h"

Player *Player::CreateListPlayers(uint32_t nb_players) {
  // TODO: Boundary check
  Player *last = new Player();
  Player *ret = last;
  for (uint32_t i = 1; i < nb_players; i++) {
    ret = (new Player())->setNextPlayer(ret);
  }
  last->setNextPlayer(ret);
  return ret;
}

Player *Player::setNextPlayer(Player *next_player) {
  _next_player = next_player;
  return this;
}
