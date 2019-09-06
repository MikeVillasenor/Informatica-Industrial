// LED_Handler.h

#ifndef _LED_HANDLER_h
#define _LED_HANDLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#define ON 1
#define OFF 0

class LED
{
public:
	LED(uint8_t pin, bool on_state);
	LED(uint8_t pin); //overloading
	~LED();
	void toggleLED();
	void setLED(bool state);
protected:
	bool _LED_state;
	uint8_t _pin;
	bool _on_state;

};

#endif

