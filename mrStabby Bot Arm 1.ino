#include <VarSpeedServo.h>

// Define the number of servos for the arm
#define ARM_SERVOS 4

// Create the servo objects.
VarSpeedServo arm_servos[ARM_SERVOS];

// Assign meaningful names to each servo for clarity
#define SHOULDER_PAN_SERVO arm_servos[0]
#define SHOULDER_TILT_SERVO arm_servos[1]
#define ELBOW_SERVO arm_servos[2]
#define WRIST_SERVO arm_servos[3]

// Define the pins for each servo
int servo_pins[ARM_SERVOS] = {3, 5, 6, 9};

const int desired_speed = 75;

void setup() {
  // Attach servos to digital pins
  for (int i = 0; i < ARM_SERVOS; i++) {
    arm_servos[i].attach(servo_pins[i]);
  }

  // Set initial positions for all servos
  SHOULDER_PAN_SERVO.write(90, desired_speed, true);
  SHOULDER_TILT_SERVO.write(90, desired_speed, true);
  ELBOW_SERVO.write(90, desired_speed, true);
  WRIST_SERVO.write(90, desired_speed, true);

  // Wait for servos to reach their initial positions
  delay(1000);
}

void loop() {
  // Perform a fluid stabbing motion
  performStabMotion();
}

void performStabMotion() {
  // A fluid, coordinated stabbing motion
  // Shoulder moves forward, elbow extends, wrist flexes
  SHOULDER_TILT_SERVO.write(45, desired_speed, false);
  ELBOW_SERVO.write(135, desired_speed, false);
  WRIST_SERVO.write(60, desired_speed, true);
  delay(500);

  // Retract the arm
  SHOULDER_TILT_SERVO.write(90, desired_speed, false);
  ELBOW_SERVO.write(90, desired_speed, false);
  WRIST_SERVO.write(90, desired_speed, true);
  delay(500);
}