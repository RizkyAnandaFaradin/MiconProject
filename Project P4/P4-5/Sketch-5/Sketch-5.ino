#include <SevSeg.h>
#include <elapsedMillis.h>

SevSeg sevseg;
elapsedMillis timeElapsed;
unsigned int interval = 500;
byte theNum = 0;

void setup()
{
  Serial.begin(9600);
  byte numDigits = 3;
  byte digitPins[] = {12,13};
  byte segmentPins[] = {4, 5, 6, 7, 8, 9, 10};
  sevseg.begin(N_TRANSISTORS, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(100);
  Serial.println("Setup complete");
 }

 void loop()
 {
  sevseg.setNumber(theNum, 0);
  sevseg.refreshDisplay();
  if (timeElapsed > interval)
  {
    theNum++;
    if (theNum == 100)
    theNum = 0;
    timeElapsed = 0; 
  }
 }
