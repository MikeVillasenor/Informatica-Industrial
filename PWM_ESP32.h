// PWM_ESP32.h

#ifndef _PWM_ESP32_h
#define _PWM_ESP32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class PWM
{
public:
	PWM(); 
	~PWM(); 
	void setUP(uint8_t pin, float frequency, uint8_t channel, uint8_t resolution_bits);
	void setPWM(float duty_cycle);
	void setFrequency(float frequency);
protected:
	uint8_t _pin;
	float _duty_cycle;
	uint16_t _resolution_bits;
	float _frequency;
	uint8_t _channel;
	uint16_t _resolution;
};

#endif

