// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Clase6.ino
    Created:	30/08/2019 04:15:48 p. m.
    Author:     HP-OMEN-MIGUEL\Miguel VJ
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
#include "NiMU_ESP32.h"
#include "PWM_ESP32.h"

NiMU miguel;
PWM pwm;
ulong start_time;
uint16_t delay_period = 500;

void setup()
{
	pwm.setUP(LED_BUILTIN, 1000, 0, 16);
	Serial.begin(115200);
	start_time = millis();

}

// Add the main program code into the continuous loop() function
uint8_t i;
void loop()
{
	/*if (millis() - start_time >= delay_period) //duda
	{
		start_time = millis();
		miguel.led.toggleLED();
	}*/

	for (i = 0; i < 100; i++)
	{
		pwm.setPWM(i);
		Serial.println(i);
		delay(40);
	}
	delay(3000);
	for (i = 100; i > 0; i--)
	{
		pwm.setPWM(i);
		Serial.println(i);
		delay(40);
	}
	delay(3000);

}
