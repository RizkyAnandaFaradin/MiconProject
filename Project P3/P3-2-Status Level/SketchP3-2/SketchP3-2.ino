const int potPin = A0;
int potVal = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("STATUS LEVEL");
  for (int i=0 ; i<13 ; i++)
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println();
  Serial.println();
}

void loop()
{
  potVal = analogRead(potPin);
  if(potVal <= 255)
  {
    Serial.println("Status : Normal");
    Serial.println();
    delay(500);
  }
  else if((potVal > 256) && (potVal <= 512))
  {
    Serial.println("Status : Waspada");
    Serial.println();
    delay(500);
  }
  else
  {
    Serial.println("Status : Siaga");
    Serial.println();
    delay(500);
  }
}
