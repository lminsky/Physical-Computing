void setup() {
  //Set all the LED pins to OUTPUT
  for(int i = 13; i > 8; i = i - 1) { 
    pinMode(i, OUTPUT);
  }
  pinMode(2, INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH) {
    for(int i = 13; i > 8; i = i - 1) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
    }
  }
}
