const int potPin = A0;
int potVal = 0;
float potVolt = 0.0;
int potPer = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);
  potVolt = (potVal/1023.0) * 5.0;
  potPer = (potVal/1023.0) * 100.0;
  Serial.print("Nilai Potensio (10 bit) : ");
  Serial.println(potVal);
  Serial.print("Nilai Potensio (Volt) : ");
  Serial.println(potVolt);
  Serial.print("Nilai Potensio (%) : ");
  Serial.println(potPer);
  delay(1000);
  Serial.println();
}
