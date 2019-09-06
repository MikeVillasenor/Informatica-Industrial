// ADC_Read.h

#ifndef _ADC_READ_h
#define _ADC_READ_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

class ADCRead
{
public:
	ADCRead(uint8_t pin, uint8_t bit_resolution, float ref_voltage);
	~ADCRead();
	uint16_t readRaw();
	float readVoltage();
protected: 
	uint8_t _pin;
	float _conversion;
};

