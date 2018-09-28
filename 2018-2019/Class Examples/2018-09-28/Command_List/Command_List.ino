void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello");
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalRead(2);
  analogWrite(11, 200);
  int x = 5;
  if(x > 2) {
    x = 7;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
