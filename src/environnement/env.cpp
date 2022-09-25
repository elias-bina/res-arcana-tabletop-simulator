
#include "environnement/env.h"

Environnement::Environnement(int nb_players): _nb_players(nb_players) {
  _list_players = Player::CreateListPlayers(nb_players);

  FirstPlayerTile(_list_players);
}

void Environnement::print_players() {
  std::cout << "HEHE BOOOOOI :" << _nb_players << std::endl;
}