// Arduino library for controlling steppers
#include <Stepper.h> 

// initializes a stepper named clock
// with 2038 steps per revolution
// and stepper driver connected on pins 8-11
Stepper clock = Stepper(2038, 8, 10, 9, 11); 

void setup() {
	// sets the stepper to 1 rpm
	clock.setSpeed(1);
}

void loop() {
	// makes the stepper spin indefinitely 
	clock.step(2038);
}
