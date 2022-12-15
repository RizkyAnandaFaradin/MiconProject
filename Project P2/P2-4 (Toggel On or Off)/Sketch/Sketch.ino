const int swPin = 2;
const int ledPin = 3;

boolean lastSw = HIGH;
boolean ledOn = false;

void setup()
{
  pinMode(swPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if (digitalRead(swPin) == LOW && lastSw == HIGH)
  {
    ledOn = !ledOn;
    lastSw = LOW;
  }
  else
  {
    lastSw = digitalRead(swPin);
  }
  digitalWrite(ledPin, ledOn);
}
