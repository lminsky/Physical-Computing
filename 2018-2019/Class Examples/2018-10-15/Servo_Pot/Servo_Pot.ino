#include <Servo.h>  //Import the servo library
Servo myservo;      //Create the myservo object

void setup() {
  pinMode(A0, INPUT);  //Setup the A0 pin as input
  Serial.begin(9600);  //Initialize serial communication
  myservo.attach(10);  //Setup the servo on pin 10
}

void loop() {
  int pot = analogRead(A0);               //Get the value from the potentiometer
  int val = map(pot, 0, 1023, 0, 180);    //Scale the number to an appropriate size for a servo
  Serial.println(pot + " -> " + val); //Print the two numbers
  myservo.write(val);                 //Move the servo to the specified position
  delay(50);                          //Insert a slight delay
}
