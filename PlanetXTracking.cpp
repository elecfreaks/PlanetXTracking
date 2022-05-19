#include "PlanetXTracking.h"

PlanetXTracking::PlanetXTracking(RJPin pin)
{
  _leftPin = pins[pin][0];
  _rightPin = pins[pin][1];
  pinMode(_leftPin, INPUT);
  pinMode(_rightPin, INPUT);
}

uint8_t PlanetXTracking::read()
{
  return  (!digitalRead(_leftPin) << 1) | !digitalRead(_rightPin);
}

bool PlanetXTracking::isTracked(TrackingType type)
{
  return read() == type;
}
