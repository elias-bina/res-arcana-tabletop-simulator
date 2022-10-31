#ifndef __REACT_CARD_EFFECT_H__
#define __REACT_CARD_EFFECT_H__

#include "effect.h"

enum REACT_TYPE_FLAG {
  LIFE_LOSS_REACT_FLAG       = 1 << 0,
  DRAGON_POWER_REACT_FLAG    = 1 << 1,
  VICTORY_CONTROL_REACT_FLAG = 1 << 2
};

class ReactCardEffect : public GenericCardEffect {
  REACT_TYPE_FLAG react_type;
 };

#endif //__REACT_CARD_EFFECT_H__
