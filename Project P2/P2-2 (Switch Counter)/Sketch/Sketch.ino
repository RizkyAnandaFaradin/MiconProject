const int swPin = 2;

int lastSwVal = 1;
int swVal = 1;
int swCount = 0;

void setup()
{
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  swVal = digitalRead(swPin);
  if (swVal != lastSwVal)
  {
    if (swVal == LOW)
    {
      swCount++;
      Serial.println("Switch is Closed");
      Serial.print("Count : ");
      Serial.println(swCount);
      Serial.println();
    }
    else
    {
      Serial.println("Switch is Open");
      Serial.println();
    }
    lastSwVal = swVal;
  }
}
