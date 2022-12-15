#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 3;
int ledGreen = 13;
int ledRed = 12;
char keys[ROWS] [COLS] = 
{
{'1', '2' , '3'},
{'4', '5' , '6'},
{'7', '8' , '9'},
{'*', '0' , '#'},
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8};

Keypad keypad = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
}

void loop () 
{
  char key = keypad.getKey();
  if (key != NO_KEY)
  {
    Serial.println(key);
  }
  if (key == '#')
  {
    digitalWrite(ledRed, HIGH);
    delay(1000);
    digitalWrite(ledRed, LOW);
  }
  if (key == '*')
  {
    digitalWrite(ledGreen, HIGH);
    delay(1000);
    digitalWrite(ledGreen, LOW);
  }

}
