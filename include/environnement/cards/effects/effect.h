#ifndef __GENERIC_CARD_EFFECT__
#define __GENERIC_CARD_EFFECT__

enum SUMMON_PLACE_ENUM {
  HAND_SUMMON_PLACE,
  OWN_DISCARD_SUMMON_PLACE,
  EVERY_DISCARD_SUMMON_PLACE
};

// TODO: Add environnement to effect / Player that triggered it ?
class GenericActiveEffect{

};

class DrawCardEffect : GenericActiveEffect {
  int32_t cards_count;
  bool does_discard_after;
};

class ReorderDeckEffect : GenericActiveEffect {
  int32_t cards_count;
};

class PointsOnVictoryControl : GenericActiveEffect {
  int32_t nb_points;
};

class PreventReactEffect: GenericActiveEffect{

};

class ReengageCardEffect : GenericActiveEffect{
  bool itself;
  ELEMENT_TYPE_FLAG type;
};

class AttackEffect : GenericActiveEffect{
  int32_t nb_damage;
};

class VictoryControlProcEffect : GenericActiveEffect{

};

class SummonCardReactEffect : GenericActiveEffect{
  std::list<Essence> list_reduction;
  ELEMENT_TYPE_FLAG type_summoned;
  SUMMON_PLACE_ENUM summon_place;
};


class GenericCardEffect{
  EffectUseCost* collect_effect;
  std::list<std::list<GenericActiveEffect>> active_effects_list;
};

#endif //__GENERIC_CARD_EFFECT__
