void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  int a[] = {3, 7, 6, 10, 22, 458, 28, 19, -18, 2};

  //Print the max value in an array
  int Max = a[0];
  for(int i = 1; i < 10; i=i+1) {
    if(Max < a[i]) {
      Max = a[i];
    }
  }
  Serial.println(Max);

  //Print the min value in an array
  int Min = a[0];
  for(int i = 1; i < 10; i=i+1) {
    if(Min > a[i]) {
      Min = a[i];
    }
  }
  Serial.println(Min);
  
  
//  Serial.println(a[0]);
//  Serial.println(a[1]);
//  Serial.println(a[2]);
//  Serial.println(a[3]);
//  Serial.println(a[4]);
//  Serial.println(a[5]);
//  Serial.println(a[6]);
//  Serial.println(a[7]);
//  Serial.println(a[8]);
//  Serial.println(a[9]);

  //Print all the values in an array
//  for(int i = 0; i < 10; i = i + 1) {
//    Serial.println(a[i]);
//  }

  //Modifying values in an array
//  int b[100];
//  for(int i = 0; i < 100; i = i + 1) {
//    b[i] = i*i;
//  }
//  Serial.println(b[6]);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
