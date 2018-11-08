#include <Servo.h>
Servo myservo; 

void setup() {
  myservo.attach(10); 
  myservo.write(0);
  delay(1000);
  myservo.write(60);
  delay(1000);
  myservo.write(120);
  delay(1000);
}
void loop() {
}
