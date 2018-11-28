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

//  Serial.print(sensorVals[0]);
//  Serial.print(", ");
//  Serial.print(sensorVals[1]);
//  Serial.print(", ");
//  Serial.print(sensorVals[2]);
//  Serial.print(", ");
//  Serial.print(sensorVals[3]);
//  Serial.print(", ");
//  Serial.print(sensorVals[4]);
//  Serial.print(", ");
//  Serial.print(sensorVals[5]);
//  Serial.print(", ");
//  Serial.print(sensorVals[6]);
//  Serial.print(", ");
//  Serial.print(sensorVals[7]);
//  Serial.print(", ");
//  Serial.print(sensorVals[8]);
//  Serial.print(", ");
//  Serial.println(sensorVals[9]);

  for(int i = 0; i < sensorValsLength; i = i + 1) {
    Serial.print(sensorVals[i]);
    Serial.print(", ");
  }
  Serial.println();


  int sum = 0;
  for(int i = 0; i < sensorValsLength; i = i + 1) {
    sum = sum + sensorVals[i];
  }
  int ave = sum / sensorValsLength;
  Serial.println(ave);
  
  delay(20);
}
