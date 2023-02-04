#include <LED-Arduino.h>

LED led(LED_BUILTIN);

void setup()
{
}

void loop()
{
    led.turnOn();
    delay(1000);

    led.turnOff();
    delay(1000);
}
