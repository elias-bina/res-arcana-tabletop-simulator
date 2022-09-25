#ifndef __BUYABLE_CARD_H__
#define __BUYABLE_CARD_H__

#include <list>

#include "environnement/elements.h"

#include "generic-board-card.h"
#include "victory-control.h"

class GenericBuyableCard : public GenericBoardCard
{
  std::list<Essence> _card_cost;
  VictoryControl _victory_control;
};

#endif //__BUYABLE_CARD_H__
