int in1Pin = 10;
int in2Pin = 9;
int enablePin = 11;
boolean reverse = true;

void setup()
{
  pinMode(enablePin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
}

void loop()
{
//  for(int i = 0; i < 255; i++) {
//    setMotor(i, reverse);
//    delay(500);
//  }
//  for(int i = 0; i < 255; i++) {
//    setMotor(255 - i, !reverse);
//    delay(500);
//  }
  setMotor(90, reverse);
  reverse = !reverse;
  delay(2000);
}

void setMotor(int speed, boolean reverse)
{
  analogWrite(enablePin, speed);
  digitalWrite(in1Pin, ! reverse);
  digitalWrite(in2Pin, reverse);
}
