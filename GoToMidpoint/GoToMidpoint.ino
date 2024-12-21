#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9, 500, 2500);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  myservo.writeMicroseconds(1500);
  delay(2000);
}