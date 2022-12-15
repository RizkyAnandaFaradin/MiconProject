#include <pitches.h>
#include <Servo.h>

int ledRed = 13;
int ledGreen = 12;
int pirPin = 2;
int state = LOW;
int pirVal = 0;
Servo servo1;
int sudut = 0;
int logicRead;
int open_melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};
int open_noteDurations[] = { 4,8,8,4,4,4,4,4 };
int speakerPin = 10;
int swPin = 9;
bool swVal;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(swPin, INPUT);
  servo1.attach(11);
}

void loop()
{
  
  pirVal = digitalRead(pirPin);
  swVal = digitalRead(swPin);

  if (swVal == HIGH) {
  state = HIGH;
  logicRead = 1;
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledGreen,LOW);
  playTune(logicRead);
  Open();
  delay(500);
  noTone(speakerPin);
 }
 else if (pirVal == HIGH)
  {
    if (state == LOW)
    {
      state = HIGH;
      logicRead = 1;
      digitalWrite(ledRed,HIGH);
      digitalWrite(ledGreen,LOW);
      playTune(logicRead);
      Open();
      delay(500);
      noTone(speakerPin);
    }
      else if (swVal == LOW ){
      state = LOW;
      digitalWrite(ledRed,LOW);
      digitalWrite(ledGreen,HIGH);
      Close();
      delay(500);
    }
  }
    else
    {
      if (state == HIGH)
      {
        state = LOW;
        digitalWrite(ledRed,LOW);
        digitalWrite(ledGreen,HIGH);
        Close();
        delay(500);
      }

  }
}

void Open() 
{ 
for(sudut = 0; sudut < 180; sudut += 1) {
 servo1.write(sudut);
 delay(15); 
  }
}

void Close()
{
for(sudut = 180; sudut>=1; sudut-=1){                                
 servo1.write(sudut); 
 delay(15);
  } 
}

void playTune(int Scan) {
  if (Scan == 1)
  {
    for(int i = 0; i<8 ; i++)
      {
        int open_noteDuration = 1000 / open_noteDurations[i];
        tone(speakerPin, open_melody[i], open_noteDuration);
        int open_pauseBetweenNotes = open_noteDuration * 1.30;
        delay(open_pauseBetweenNotes);
        noTone(speakerPin);
      }
  }
}
