#include <Stepper.h>

Stepper clock = Stepper(2038, 8, 10, 9, 11);

void setup() {
	clock.setSpeed(1);
}

void loop() {
	clock.step(2038);
}
