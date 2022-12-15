const int flamePin = A0;
int flameVal;
int ledRed = 13;
int ledGreen = 12;


void setup()
{
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(flameVal, INPUT);
}

void loop()
{
  flameVal = analogRead(flamePin);
  Serial.print("Flame : ");
  Serial.println(flameVal);
  delay(1000);

  if (flameVal <= 30)
  {
    digitalWrite(ledGreen, HIGH);
    Serial.println("Nyala Normal");
    delay(100);
  }
  else
  {
    digitalWrite(ledRed, HIGH);
    Serial.println("Nyala Di atas Normal");
    delay(100);
  }
}
