//Mr Minsky
//Dim LED

int brightness = 0;       //Create a variable called brightness that starts at 0
int change = 1;

void setup() {
  pinMode(11, OUTPUT);    //Set pin 11 to output
}

void loop() {
  analogWrite(11, brightness); //Set the LED in pin 11 to the value stored in brightness
  brightness = brightness + change; //Increase brightness by change
  delay(10);                  //Wait .1 second
  if(brightness == 100) {      //If the current value of brightness is 100...
    change = -1;
  }
  if(brightness == 0) {
    change = 1;
  }
  
}
