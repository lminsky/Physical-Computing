void setup() {
  //Set all the LED pins to OUTPUT
  for(int i = 13; i > 8; i = i - 1) { 
    pinMode(i, OUTPUT);
  }
}

void loop() {

  //Loop through each LED pin and turn it on and then off
  for(int i = 13; i > 8; i = i - 1) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
  
}
