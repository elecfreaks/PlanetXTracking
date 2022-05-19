#ifndef _PlanetXTRACKING_H_
#define _PlanetXTRACKING_H_

#include "RJPins.h"

enum TrackingType {
  None,
  Right,
  Left,
  All
};

class PlanetXTracking
{
public:
  PlanetXTracking(RJPin pin);
  uint8_t read();
  bool isTracked(TrackingType type);

private:
  uint8_t _leftPin;
  uint8_t _rightPin;
};

#endif
