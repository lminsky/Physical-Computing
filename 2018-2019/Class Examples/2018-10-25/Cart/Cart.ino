int enableLeft = 10;
int enableRight = 9;
int inLeft1 = 7;
int inLeft2 = 8;
int inRight1 = 6;
int inRight2 = 5;

void setup()
{
  pinMode(enableLeft, OUTPUT);
  pinMode(enableRight, OUTPUT);
  pinMode(inLeft1, OUTPUT);
  pinMode(inLeft2, OUTPUT);
  pinMode(inRight1, OUTPUT);
  pinMode(inRight2, OUTPUT);
}

void loop()
{

}

void setMotorLeft(int speed, boolean reverse)
{
  analogWrite(enableLeft, speed);
  digitalWrite(inLeft1, ! reverse);
  digitalWrite(inLeft2, reverse);
}

void setMotorRight(int speed, boolean reverse)
{
  analogWrite(enableRight, speed);
  digitalWrite(inRight1, ! reverse);
  digitalWrite(inRight2, reverse);
}
