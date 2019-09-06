// 
// 
// 

#include "PWM_ESP32.h"


PWM::PWM()
{
}

PWM::~PWM()
{
}

void PWM::setUP(uint8_t pin, float frequency, uint8_t channel, uint8_t resolution_bits)
{
	_pin = pin;
	_channel = channel;
	_frequency = frequency;
	_resolution_bits = resolution_bits;
	_resolution = pow(2, _resolution_bits);
	pinMode(_pin, OUTPUT);
	ledcSetup(_channel, _frequency, _resolution_bits);
	ledcAttachPin(_pin, _channel);

}

void PWM::setPWM(float duty_cycle)
{
	if (duty_cycle > 100)
		duty_cycle = 100;
	if (duty_cycle < 0)
		duty_cycle = 100;
	_duty_cycle = duty_cycle;
	ledcWrite(_channel, _resolution * _duty_cycle / 100);

}

void PWM::setFrequency(float frequency)
{
	_frequency = frequency;
	ledcWriteTone(_channel, _frequency);

}
