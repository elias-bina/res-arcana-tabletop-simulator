#ifndef __PLACE_OF_POWER_CARD_H__
#define __PLACE_OF_POWER_CARD_H__

#include <cstdint>

#include "buyable-card.h"


class PlaceOfPowerCard : public GenericBuyableCard {
  bool _is_solar_side;
  uint32_t _place_of_power_index; // The number of the card since the two sides will be stored at different places
};

#endif //__PLACE_OF_POWER_CARD_H__
