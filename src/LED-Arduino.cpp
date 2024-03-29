// -- Implementation of LED Class --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#include "LED-Arduino.h"

LED::LED(uint8_t pin)
{
    _pin = pin;
    _state = LOW;
    pinMode(_pin, OUTPUT);
}

void LED::turnOn()
{
    _state = HIGH;
    digitalWrite(_pin, _state);
}

void LED::turnOff()
{
    _state = LOW;
    digitalWrite(_pin, _state);
}

uint8_t LED::getState()
{
    return _state;
}
