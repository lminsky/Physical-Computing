void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  int y = analogRead(A1);
  int sw = digitalRead(A2);
  Serial.print(x);
  Serial.print(", ");
  Serial.print(y);
  Serial.print(" - ");
  Serial.println(sw);
}
