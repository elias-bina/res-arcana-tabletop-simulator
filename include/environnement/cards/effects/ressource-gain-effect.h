#ifndef __RESSOURCE_GAIN_EFFECT_H__
#define __RESSOURCE_GAIN_EFFECT_H__

#include <cstdint>
#include <list>

#include "elements.h"
#include "effect.h"

class RessourceGainActiveEffect : GenericActiveEffect{
  std::list<Essence> gained_ressources;
};

class GainCostActiveEffect : RessourceGainActiveEffect {
  ELEMENT_TYPE_FLAG type_gained;
  int32_t delta_cost;
  int32_t multiplicator;
  int32_t divisor;
};

class GiveToOtherActiveEffect : RessourceGainActiveEffect {
  ELEMENT_TYPE_FLAG ressource_given;
  int32_t nb_given;
};

class GainSameThanPlayerActiveEffect: RessourceGainActiveEffect {
  ELEMENT_TYPE_FLAG type_gained;
  ELEMENT_TYPE_FLAG type_copied;
};

class PlaceOnAnotherCardActiveEffect : RessourceGainActiveEffect{

};

#endif //__RESSOURCE_GAIN_EFFECT_H__