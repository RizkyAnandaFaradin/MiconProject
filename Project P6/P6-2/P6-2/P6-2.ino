#include <Password.h>
#include <Keypad.h>

int ledred = 13;
int ledgreen = 12;
Password password = Password("2468");
const byte ROWS = 4;
const byte COLS = 3;
char keys[ROWS][COLS] =
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()

{
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  Serial.begin(9600);
  keypad.addEventListener(keypadEvent);
}

void loop()
{
  keypad.getKey();
}

void keypadEvent (KeypadEvent eKey)
{
  switch (keypad.getState())
  {
    case PRESSED:
    Serial.print("Pressed : ");
    Serial.println(eKey);
    switch (eKey)
    {
      case '*': checkPassword(); break;
      case '#': password.reset(); break;
      default: password.append(eKey);
    }
  }
}

void checkPassword()
{
  if (password.evaluate() )
  {
    Serial.println("Sucsess");
    digitalWrite(ledred, LOW);
    digitalWrite(ledgreen, HIGH);
  }
  else
  {
    Serial.println("Wrong");
    digitalWrite(ledred, HIGH);
    digitalWrite(ledgreen, LOW);
  }
}
