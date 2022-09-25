#ifndef __ARTIFACT_CARD_H__
#define __ARTIFACT_CARD_H__

#include "buyable-card.h"

class ArtifactCard : public GenericBuyableCard {
public:
  bool _visible_in_deck;
};

#endif //__ARTIFACT_CARD_H__
