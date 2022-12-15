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
int hold;
int duration;
int solfege[] = {Do, Re, Mi, Fa, Sol, La, Ti, Do2};


void setup()
{
}

void loop()
{
  hold = analogRead(potPin1);
  hold = map(hold,0,1023,5,200);
  duration = analogRead(potPin2);
  duration = map(duration,0,1023,5,200);

  for(int i = 0; i < 8; i++)
  {
    tone(spkPin, solfege[i], duration);
    delay(hold);
  }
}
