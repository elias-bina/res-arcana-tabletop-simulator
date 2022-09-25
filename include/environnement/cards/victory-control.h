#ifndef __VICTORY_CONTROL_H__
#define __VICTORY_CONTROL_H__

#include <cstdint>
#include <list>

#include "elements.h"

class VictoryControl {
public:
  uint32_t points;
  std::list<VariablePoints> _variable_points;
};

class VariablePoints {
  ELEMENT_TYPE_FLAG _element_counted;
  uint32_t _points_per_elements;
};

#endif //__VICTORY_CONTROL_H__
