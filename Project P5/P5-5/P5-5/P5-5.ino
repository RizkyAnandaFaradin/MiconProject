#include <dht11.h>
#include <LiquidCrystal.h>

const int dhtPin = 6;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

dht11 DHT;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Temp & Hum Meter");
  lcd.setCursor(0,1);
  lcd.print("Rizky Ananda F");
  delay(5000);
  lcd.clear();
}

void loop()
{
  DHT.read(dhtPin);
  lcd.setCursor(0,0);
  lcd.print("Temp : " );
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humi : ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1000);
}
