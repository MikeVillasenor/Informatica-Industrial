// 
// 
// 

#include "LED_Handler.h"

LED::LED(uint8_t pin, bool on_state)
{
	_pin = pin;
	_on_state = on_state;
	pinMode(_pin, OUTPUT);
}

LED::LED(uint8_t pin)
{
	_pin = pin;
	_on_state = HIGH;
	pinMode(_pin, OUTPUT);
}

LED::~LED()
{
}

void LED::toggleLED()
{
	digitalWrite(_pin, !digitalRead(_pin));
}

void LED::setLED(bool state)
{
	if (state == ON)
	{
		digitalWrite(_pin, _on_state); //duda, por qu es on
	}
	else if (state == OFF)
	{
			digitalWrite(_pin, !_on_state);
	}
}
