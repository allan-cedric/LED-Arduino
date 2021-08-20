## LED Library (C/C++)
* Simple library to control a LED on Arduino platform

## How to use ?
* Include the library and call the constructor `LED`
```C++
#include "LED-Arduino.h" // Path example

LED _led(8); //Ex.: Digital Pin 8 on Arduino UNO

void setup()
{
  ...
}

void loop()
{
  ...
  _led.turnOn(); // Turn LED on
  _led.turnOff(); // Turn LED off
  uint8_t state = _led.getState(); // Get LED state
  ...
}
```
