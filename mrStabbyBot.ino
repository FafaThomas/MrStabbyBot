
  
#include <VarSpeedServo.h> 
// Define the number of servos
#define SERVOS 2
// Create the servo objects.
VarSpeedServo myservo[SERVOS]; 
 
const int desired_speed = 75;
 
// Attach servos to digital pins on the Arduino
int servo_pins[SERVOS] = {3,5};
 
void setup() {

  myservo[0].attach(servo_pins[0], 544, 2475);  
  myservo[1].attach(servo_pins[1], 500, 2475); 
 
  // Set initial servo positions 
  myservo[0].write(0, desired_speed, true);  
  myservo[1].write(calc_servo_1_angle(90), desired_speed, true);
 
  // Wait one second to let servos get into position
  delay(1000);
}
  
void loop() {  
 
    // To most counterclockwise position
    myservo[0].write(180, desired_speed, true); 
    // Go to clockwise position
    myservo[1].write(calc_servo_1_angle(-90), desired_speed, true); 
    // Go to counterclockwise position
    myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
     myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
      myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
       myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
        myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
         myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
          myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
           myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
            myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
             myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
              myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
               myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
          myservo[1].write(calc_servo_1_angle(90), desired_speed, true); 
         myservo[1].write(calc_servo_1_angle(90), desired_speed, true); .
                 
    // To most clockwise position
    myservo[0].write(0, desired_speed, true); 
    // Wait half a second
    delay(500);
}     
 
int calc_servo_1_angle (int input_angle) {
   
  int result;
 
  result = map(input_angle, -90, 90, 0, 180);
 
  return result;
}  
