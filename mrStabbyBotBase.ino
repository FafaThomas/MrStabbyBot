#include <VarSpeedServo.h>

// Define the number of servos for the base
#define BASE_SERVOS 2

// Create the servo objects.
VarSpeedServo base_servos[BASE_SERVOS];

// Assign meaningful names to each servo for clarity
#define BASE_PAN_SERVO base_servos[0]
#define BASE_TILT_SERVO base_servos[1]

// Define the pins for each servo
int servo_pins[BASE_SERVOS] = {3, 5};

const int desired_speed = 75;

void setup() {
  // Attach servos to digital pins
  for (int i = 0; i < BASE_SERVOS; i++) {
    base_servos[i].attach(servo_pins[i]);
  }

  // Set initial positions for both base servos
  BASE_PAN_SERVO.write(90, desired_speed, true);
  BASE_TILT_SERVO.write(90, desired_speed, true);

  // Wait for servos to reach their initial positions
  delay(1000);
}

void loop() {
  // Perform a maniacal waving motion
  performManiacalMotion();
}

void performManiacalMotion() {
  // Rapid, back-and-forth movement to emulate a "maniacal" wave
  for (int i = 0; i < 5; i++) {
    BASE_PAN_SERVO.write(45, desired_speed, true);
    BASE_PAN_SERVO.write(135, desired_speed, true);
  }
}