void setup() {
  //Set all display pins to output
  for(int i = 2; i < 10; i=i+1) {
    pinMode(i, OUTPUT);
  }

  //Display the numbers 0-9 with a 500ms delay between them
  for(int i = 0; i < 10; i=i+1) {
    setDisplay(i);
    delay(500);
  }
}

//You can't delete the loop!
void loop() {

}

//Takes a number as a parameter and sets the 7-segment display accordingly
void setDisplay(int number) {
  displayOff() //Start by turning off all the lights
  
  //0
  if(number == 0) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }

  //1
  if(number == 1) {
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
  }

  //2
  if(number == 2) {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
}

//Turns off all of the 7-segment display LEDS
void displayOff() {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
