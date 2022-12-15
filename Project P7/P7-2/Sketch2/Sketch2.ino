#include <pitches.h>
#define rainSensorPin 2
#define rainSensorPower 7
const int relayPin = 10;
const int speakerPin = 12;
int rain_melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};
int rain_noteDurations[] = { 4,8,8,4,4,4,4,4 };
int rainVal;
int logicRead;

void setup()
{
  pinMode(rainSensorPower,OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  digitalWrite(rainSensorPower, LOW);
  Serial.begin(9600);
}

void loop()
{
  rainVal = readSensor();
  Serial.print("Digital Output : ");
  Serial.println(rainVal);
  
  if (rainVal)
  {
    Serial.println("Status : Clear");
    digitalWrite(relayPin, LOW);
    digitalWrite(speakerPin, LOW);
  }
  
  else
  {
    logicRead = 0;
    Serial.println("Status : I'ts raining");
    digitalWrite(relayPin, HIGH);
    digitalWrite(speakerPin, HIGH);
    playTune(logicRead);
    delay(500);
    noTone(speakerPin);
  }
  delay(1000);
  Serial.println();
}

int readSensor()
{
  digitalWrite(rainSensorPower, HIGH);
  delay(10);
  int val = digitalRead(rainSensorPin);
  digitalWrite(rainSensorPower, LOW);
  return val;
}

void playTune(int Scan) {

    for(int i = 0; i<8 ; i++)
      {
        int rain_noteDuration = 1000 / rain_noteDurations[i];
        tone(speakerPin, rain_melody[i], rain_noteDuration);
        int rain_pauseBetweenNotes = rain_noteDuration * 1.30;
        delay(rain_pauseBetweenNotes);
        noTone(speakerPin);
      }
}
