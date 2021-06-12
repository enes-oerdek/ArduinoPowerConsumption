#include "LowPower.h"

void setup() {
	CLKPR = 0x80;
	CLKPR = 0x03;
}

void loop() {
	delay(2000);
	LowPower.powerDown(SLEEP_4S, ADC_OFF, BOD_OFF);
}
