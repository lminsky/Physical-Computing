int sensorValsLength = 10;
int sensorVals[10];

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
//  sensorVals[0] = sensorVals[1];
//  sensorVals[1] = sensorVals[2];
//  sensorVals[2] = sensorVals[3];
//  sensorVals[3] = sensorVals[4];
//  sensorVals[4] = sensorVals[5];
  for(int i = 0; i < sensorValsLength - 1; i = i + 1) {
    sensorVals[i] = sensorVals[i + 1];
  }
  sensorVals[sensorValsLength - 1] = analogRead(A0);
  delay(50);
}
