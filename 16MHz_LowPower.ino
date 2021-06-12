#include "LowPower.h"

void setup() {

}

void loop() {
	delay(2000);
	LowPower.powerDown(SLEEP_4S, ADC_OFF, BOD_OFF);
}
