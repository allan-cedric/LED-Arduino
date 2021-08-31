// -- Classe que molda o comportamento de um LED --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __LED_ARDUINO_H__
#define __LED_ARDUINO_H__

// -- Bibliotecas --
#include <Arduino.h>

// -- Classe LED --
class LED
{
private:
    uint8_t _pin;   // Pino do LED
    uint8_t _state; // Estado do LED

public:
    /*!
        @brief  Construtor

        @param  pin Pino do LED
    */
    LED(uint8_t pin);

    /*!
        @brief  Liga o LED
    */
    void turnOn();

    /*!
        @brief  Desliga o LED
    */
    void turnOff();

    /*!
        @brief  Retorna o estado do LED

        @return 1 se estiver ligado, senão 0
    */
    uint8_t getState();
};

#endif
