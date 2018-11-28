//02 - Center Middle
//03 - Top Left
//04 - Top Middle
//05 - Top Right
//06 - Bottom Left
//07 - Bottom Middle
//08 - Bottom Right
//09 - Dot

void setup() {
  //Set all display pins to output
  for(int i = 2; i < 10; i=i+1) {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);
}

//You can't delete the loop!
void loop() {
  int pot = map(analogRead(A0), 0, 1024, 0, 10);
  setDisplay(pot);
}

//Takes a number as a parameter and sets the 7-segment display accordingly
void setDisplay(int number) {
  displayOff(); //Start by turning off all the lights
  
  //0
  if(number == 0) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }

  //1
  if(number == 1) {
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
  }

  //2
  if(number == 2) {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }

  //3
  if(number == 3) {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }

  //4
  if(number == 4) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
  }

  //5
  if(number == 5) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }

  //6
  if(number == 6) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }

  //7
  if(number == 7) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
  }

  //8
  if(number == 8) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }

  //9
  if(number == 9) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
}

//Turns off all of the 7-segment display LEDS
void displayOff() {
  for(int i = 2; i < 10; i=i+1) {
    digitalWrite(i, HIGH);
  }
}
