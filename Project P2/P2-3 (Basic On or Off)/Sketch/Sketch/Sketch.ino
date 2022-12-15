const int swPin = 2;
const int ledPin = 3;

int swVal;

void setup()
{
  pinMode(swPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  swVal = digitalRead(swPin);
  if (swVal == LOW)
  {
    Serial.println("Switch is Closed");
    digitalWrite(ledPin, HIGH);
    Serial.println("LED is On");
    delay(200);
    Serial.println();
  }
  else
  {
    Serial.println("Switch is Open");
    digitalWrite(ledPin, LOW);
    Serial.println("LED is Off");
    delay(200);
    Serial.println();
  }
}
