const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int hold = 2000;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  rgb(255,0,0);
  delay(hold);
  rgb(255,165,0);
  delay(hold);
  rgb(255,255,0);
  delay(hold);
  rgb(0,128,0);
  delay(hold);
  rgb(0,0,255);
  delay(hold);
  rgb(75,0,130);
  delay(hold);
  rgb(238,130,238);
  delay(hold);
}
void rgb (int redVal, int greenVal, int blueVal)
{
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
}
