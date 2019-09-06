// 
// 
// 

#include "NiMU_ESP32.h"


NiMU::NiMU():battery(BATTERY_PIN, 12, 3.3f), led(LED_BUILTIN, LOW)
{
	led.setLED(ON);
}

NiMU::~NiMU()
{
}


uint8_t NiMU::readBattery()
{
	uint8_t battery_level = (battery.readRaw() - 1940) / 6;
	return battery_level;
}