// -- Implementação da classe LED --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#include "LED-Arduino.h"

LED::LED(uint8_t pin)
{
    _pin = pin;
    pinMode(_pin, OUTPUT); // Seta o pino do LED como OUTPUTs
}

void LED::turnOn()
{
    pinMode(_pin, OUTPUT);
    _state = HIGH;
    digitalWrite(_pin, _state);
}

void LED::turnOff()
{
    pinMode(_pin, OUTPUT);
    _state = LOW;
    digitalWrite(_pin, _state);
}

uint8_t LED::getState()
{
    return _state;
}