

#include <Servo.h>

Servo smallServo;  // create servo object to control a servo
Servo bigServo;

int pos = 0;    // variable to store the servo position
int pos2=0;
void setup() {
  smallServo.attach(9);// attaches the servo on pin 9 to the servo object
  bigServo.attach(10);
}

void loop() {
  smallServo.write(0);
  bigServo.write(0);
  delay(1000);
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    bigServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  delay(1000);  
  for ( pos2 = 0; pos2 <= 165; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    smallServo.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  delay(20000);
  for (pos2 = 165; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    smallServo.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    bigServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  bigServo.detach();
  smallServo.detach();
  
}

