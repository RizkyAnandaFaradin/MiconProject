#include <dht11.h>
#define dhtPin 2
dht11 DHT;
int ledRed = 13;
int ledGreen = 12;

void setup()
{
  Serial.begin(9600);
  Serial.println("DHT TEST PROGRAM");
  Serial.print("LIBRARY VERSION: ");
  Serial.print(DHT11LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tStatus,\tHumidity (%),\tTemperature (C)");
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  
}

void loop()
{
  int chk;
  Serial.print("DHT11, \t");
  chk = DHT.read(dhtPin);
  switch (chk)
  {
    case DHTLIB_OK:
      Serial.print("OK,\t");
      break;

    case DHTLIB_ERROR_CHECKSUM:
      Serial.print("Checksum error,\t");
      break;

      case DHTLIB_ERROR_TIMEOUT:
        Serial.print("Time out error,\t");
        break;

      default:
        Serial.print("Unknown error,\t");
        break;
  }
  Serial.print(DHT.humidity, 1);
  Serial.print(",\t\t");
  Serial.println(DHT.temperature, 1);
  delay(1000);

  if(DHT.temperature <= 25)
  {
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledRed,LOW);
    Serial.println("Suhu Normal");
    delay(100);
  }
  else
  {
    digitalWrite(ledGreen,LOW);
    digitalWrite(ledRed,HIGH);
    Serial.println("Suhu Di atas Normal");
    delay(100);
  }
}
