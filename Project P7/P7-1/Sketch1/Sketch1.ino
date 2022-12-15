const int irObstaclePin = 2;
const int relayPin = 10;
int Obstacle = HIGH; 
const int ledGreen = 13;

void setup()
{
  pinMode(irObstaclePin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
  Obstacle = digitalRead(irObstaclePin);
  if (Obstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OSBTACLE!!");
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledGreen,HIGH); 
  }
  else
  {
    Serial.println("clear");
    digitalWrite(relayPin, LOW);
    digitalWrite(ledGreen, LOW);

  }
  delay(200);
}
