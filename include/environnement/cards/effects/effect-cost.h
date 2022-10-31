#ifndef __COLLECT_CARD_EFFECT_H__
#define __COLLECT_CARD_EFFECT_H__

#include <list>

#include "elements.h"

class EffectUseCost{
  bool activate;
  std::list<Essence> essences_cost;
  ELEMENT_TYPE_FLAG activate_another;
  ELEMENT_TYPE_FLAG destroy_another;
  bool activate_when_bought;
};

#endif //__COLLECT_CARD_EFFECT_H__
