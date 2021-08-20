// -- Implementação da Classe LED --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#include "LED-Arduino.h"

LED::LED(uint8_t pin)
{
    _pin = pin;            // Atributo _pin recebe o pino setado
    pinMode(_pin, OUTPUT); // Seta o pino do LED como OUTPUT
    LED::turnOff();        // Inicializa LED desligado
}

void LED::turnOn()
{
    _state = HIGH;              // Atributo _state recebe o estado atual
    digitalWrite(_pin, _state); // LED vai para o nível HIGH
}

void LED::turnOff()
{
    _state = LOW;               // Atributo _state recebe o estado atual
    digitalWrite(_pin, _state); // LED vai para o nível LOW
}

uint8_t LED::getState()
{
    return _state;
}