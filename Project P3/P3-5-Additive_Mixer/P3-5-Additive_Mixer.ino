const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int redPot = A0;
const int greenPot = A1;
const int bluePot = A2;

int redVal;
int greenVal;
int blueVal;

void setup()
{
}

void loop()
{
  redVal = analogRead(redPot);
  greenVal = analogRead(greenPot);
  blueVal = analogRead(bluePot);

  redVal = map(redVal,0,1023,0,255);
  greenVal = map(greenVal,0,1023,0,255);
  blueVal = map(blueVal,0,1023,0,255);

  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
}
