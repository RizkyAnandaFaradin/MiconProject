#include "pitches.h"
#include <Keypad.h>

int keypadRead;
int access_melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};
int access_noteDurations[] = { 4,8,8,4,4,4,4,4 };
int noaccess_melody[] = { NOTE_G2, NOTE_G2 };
int noaccess_noteDurations[] = {8,8};
const int buzzerPin = 10;
const int redledPin = 11;
const int greenledPin = 12;
const int blueledPin = 13;
#define Password_Length 9
char Data[Password_Length];
char Master[Password_Length] = "12345678";
byte data_count = 0;
const byte rows = 4;
const byte cols = 3;
char keys[rows][cols] = {
{'1', '2' , '3'},
{'4', '5' , '6'},
{'7', '8' , '9'},
{'*', '0' , '#'}
};
byte rowPins[rows] = {2,3,4,5};
byte colPins[cols] = {6,7,8};
Keypad customKeypad = Keypad { makeKeymap(keys), rowPins, colPins, rows, cols };

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  pinMode(greenledPin, OUTPUT);
  pinMode(redledPin, OUTPUT);
  pinMode(blueledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("********************");
  Serial.println("*****Electronic*****");
  Serial.println("*****Keypad Lock****");
  Serial.println("********************");
  delay(2000);
  Serial.println("*****Enter code*****");
}

void rgb(int redVal, int greenVal, int blueVal)
{
  digitalWrite(redledPin, redVal);
  digitalWrite(greenledPin, greenVal);
  digitalWrite(blueledPin, blueVal);
  
}

void loop()
{
  char customKey = customKeypad.getKey();
  if(customKey)
  {
    Data[data_count] = customKey;
    Serial.print(customKey);
    data_count++;
  }

  if (data_count == Password_Length - 1)
  {
    if(!strcmp(Data, Master))
    {
      keypadRead = 1;
      playTune(keypadRead);
      rgb(LOW, HIGH, LOW);
      Serial.println("");
      Serial.println("********************");
      Serial.println("***ACCESS GRANTED***");
      Serial.println("******WELCOME!******");
      Serial.println("********************");
      delay(2000);
      rgb(LOW, LOW, LOW);
      resetAll () ;
    }
    
    else
    {
      keypadRead = 0;
      playTune(keypadRead);
      rgb(HIGH, LOW, LOW);
      Serial.println("");
      Serial.println("*******************");
      Serial.println("***ACCESS DENIED!**");
      Serial.println("****INVALID CODE***");
      Serial.println("*******************");
      delay(2000);
      rgb(LOW, LOW, LOW);
      resetAll () ;
    }
  }
}

void resetAll ()
{
  Serial.println("********************");
  Serial.println("*****ELECTRONIC*****");
  Serial.println("*****Keypad Lock****");
  Serial.println("********************");
  delay(2000);
  Serial.println("*****Enter code*****");
  while (data_count != 0)
  {
    Data[data_count--] = 0;
  }
    return;
}
void playTune(int Scan) {
  if (Scan == 1)
  {
    for(int i = 0; i<8 ; i++)
      {
        int access_noteDuration = 1000 / access_noteDurations[i];
        tone(buzzerPin, access_melody[i], access_noteDuration);
        int access_pauseBetweenNotes = access_noteDuration * 1.30;
        delay(access_pauseBetweenNotes);
        noTone(buzzerPin);
      }
  }

  else
    for(int i = 0; i < 2; i++) 
    {
     int noaccess_noteDuration = 1000 / noaccess_noteDurations[i];
     tone (buzzerPin, noaccess_melody[i], noaccess_noteDuration);
     int noaccess_pauseBetweenNotes = noaccess_noteDuration *1.30;
     delay(noaccess_pauseBetweenNotes);
     noTone(buzzerPin);
  }
}
