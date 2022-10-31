#ifndef __GENERIC_BOARD_CARD_H__
#define __GENERIC_BOARD_CARD_H__

#include <list>
#include <string>
#include <vector>

#include "environnement/elements.h"

#include "effects/collect-effect.h"
#include "effects/effect.h"
#include "effects/react-effect.h"

class GenericBoardCard {
public:
  std::string _card_name;

  std::list<GenericCardEffect> _collect_effects;
  std::list<ReactCardEffect> _react_effects;
  std::list<GenericCardEffect> _effects;
  bool _is_discharged;

  std::list<Essence> _essences_accumulated;
};

#endif //__GENERIC_BOARD_CARD_H__
