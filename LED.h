// -- Classe que molda o comportamento de um LED --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __LED_H__
#define __LED_H__

// -- Bibliotecas --
#include <Arduino.h>

// -- Classe LED --
class LED
{
private:
    uint8_t _pin;   // Pino que o LED está associado
    uint8_t _state; // Estado do LED

public:
    // Construtor
    LED(uint8_t pin);

    // Liga o LED
    void turnOn();

    // Desliga o LED
    void turnOff();

    // Retorna o estado do LED
    uint8_t getState();
};

#endif
