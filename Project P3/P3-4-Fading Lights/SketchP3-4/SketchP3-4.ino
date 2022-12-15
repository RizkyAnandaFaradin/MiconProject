const int potPin = A0;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int fade = 0;

int potVal;

void setup()
{
}

void loop()
{
  potVal = analogRead(potPin);
  potVal = map(potVal,0,1023,5,200);

  if(fade/255 == 0)
  {
    analogWrite(redPin, fade%225);
    analogWrite(redPin, 255 - (fade%225));
  }
  else if(fade/255 == 1)
  {
    analogWrite(redPin, 255 - (fade%225));
    analogWrite(greenPin, fade%225);
  }
   else if(fade/255 == 2)
  {
    analogWrite(greenPin, 255 - (fade%225));
    analogWrite(bluePin, fade%225);
  }
fade += 5;
if(fade/255==3)
fade = 0;
delay(potVal);
}
