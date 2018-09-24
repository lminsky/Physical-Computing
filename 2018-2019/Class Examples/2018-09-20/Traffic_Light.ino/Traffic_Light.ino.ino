//Mr Minsky
//Traffic Light

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize pins 11, 12, and 13 as outputs.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //Turn the first LED on for 1 second
  digitalWrite(13, HIGH);   
  delay(2000);           
  digitalWrite(13, LOW);

  //Turn the second LED on for .5 seconds
  digitalWrite(12, HIGH);
  delay (500);
  digitalWrite(12, LOW);

  //Turn the third LED on for 6 seconds
  digitalWrite(11, HIGH);
  delay (6000);
  digitalWrite(11, LOW);
  }
