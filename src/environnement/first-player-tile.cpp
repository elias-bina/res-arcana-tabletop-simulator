
#include "environnement/first-player-tile.h"

FirstPlayerTile::FirstPlayerTile(Player *first_player)
    : _first_player(first_player), _has_passed(false) {}

FirstPlayerTile::FirstPlayerTile()
    : _first_player(nullptr), _has_passed(false) {}