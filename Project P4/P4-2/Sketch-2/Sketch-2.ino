const int lm35Pin = A1;

float tempC;
int lm35Val;

void setup()
{
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop()
{
  lm35Val = analogRead(lm35Pin);
  tempC = lm35Val / 9.31;
  Serial.print("Temprature : ");
  Serial.print(tempC,2);
  Serial.println(" C");
  delay(500);
}
