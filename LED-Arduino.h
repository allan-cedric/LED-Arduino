// -- LED Class --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#ifndef __LED_ARDUINO_H__
#define __LED_ARDUINO_H__

// -- Libraries --
#include <Arduino.h>

// -- LED Class --
class LED
{
private:
    uint8_t _pin;   // LED pin
    uint8_t _state; // LED state

public:
    /*!
        @brief  Constructor

        @param  pin LED pin
    */
    LED(uint8_t pin);

    /*!
        @brief  Turn the LED on
    */
    void turnOn();

    /*!
        @brief  Turn the LED off
    */
    void turnOff();

    /*!
        @brief  Current LED state

        @return 1 if LED is on, otherwise 0
    */
    uint8_t getState();
};

#endif
