void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  int a[] = {3, 7, 6, 100, 22, 458, 28, 19, -18, 2, 15, 20, 13, 75, 10};
  int len = sizeof(a)/2;

  //Prints the average value
  int sum = 0;
  for(int i = 0; i < len; i=i+1) {
    sum = sum + a[i];
  }
  Serial.println(sum);
  Serial.println(1.0*sum/len);

}

void loop() {
  // put your main code here, to run repeatedly:

}
