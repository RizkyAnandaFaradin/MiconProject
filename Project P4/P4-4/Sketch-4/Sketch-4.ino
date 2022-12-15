#include "SevSeg.h"

SevSeg sevseg;
char rx_byte;

void setup()
{
  Serial.begin(9600);
  byte numDigits = 1;
  byte digitPins[]= {};
  byte segmentPins[] = {4, 5, 6, 7, 8, 9, 10, 11};
  bool resistorsOnSegments = true;

  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(100);
 }

 void loop()
 {
  if (Serial.available() > 0){
    rx_byte = Serial.read();

    if ((rx_byte >= '0') && (rx_byte <= '9'))
    {
      Serial.print("Number received: ");
      Serial.println(rx_byte);
      int numb = rx_byte - '0';
      sevseg.setNumber(numb, numb%2);
      sevseg.refreshDisplay();
    }
    else
    {
      Serial.println("Not a number (NaN)");
    }
  }
 }
