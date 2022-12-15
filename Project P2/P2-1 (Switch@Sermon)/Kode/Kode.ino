int swPin = 2;
bool swVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  swVal = digitalRead(swPin);
  if (swVal == LOW){
    Serial.println("Switch is Closed");
    Serial.println();
  }
  else{
    Serial.println("Switch is Open");
    Serial.println();
  }
}
