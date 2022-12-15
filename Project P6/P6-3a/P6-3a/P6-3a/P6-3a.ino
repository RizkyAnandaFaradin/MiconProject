#define Do 131
#define Re 147
#define Mi 165
#define Fa 175
#define Sol 196
#define La 220
#define Ti 247
#define Do2 262

const int spkPin = 10;
const int potPin1 = A0;
const int potPin2 = A1;
int potVal1;
int potVal2;

void setup()
{
}

void loop()
{
  potVal1 = analogRead(potPin1);
  potVal1 = map(potVal1,0,1023,5,200);
  potVal2 = analogRead(potPin2);
  potVal2 = map(potVal2,0,1023,5,200);
  

  
  tone(spkPin, Do, potVal2);
  delay(potVal1);
  tone(spkPin, Re, potVal2);
  delay(potVal1);
  tone(spkPin, Mi, potVal2);
  delay(potVal1);
  tone(spkPin, Fa, potVal2);
  delay(potVal1);
  tone(spkPin, Sol, potVal2);
  delay(potVal1);
  tone(spkPin, La, potVal2);
  delay(potVal1);
  tone(spkPin, Ti, potVal2);
  delay(potVal1);
  tone(spkPin, Do2, potVal2);
  delay(potVal1);
}
