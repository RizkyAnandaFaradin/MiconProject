#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  396
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  495
#define NOTE_C5  528
#define NOTE_CS5 554
#define NOTE_D5  594
#define NOTE_DS5 622
#define NOTE_E5  660
#define NOTE_F5  704
#define NOTE_FS5 740
#define NOTE_G5  792


int speakerPin = 10;

void setup ()
{
  pinMode(speakerPin, OUTPUT);
  BintangKecil();
}

void loop ()
{
  BintangKecil();
}

void BintangKecil() {
        noTone(speakerPin);
        delay(1000);
        tone(speakerPin,NOTE_G4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);

        tone(speakerPin,NOTE_D5);
        delay(300);
        noTone(speakerPin);


        tone(speakerPin,NOTE_C5);
        delay(200);

        delay(100);
        delay(100);

        tone(speakerPin,NOTE_B4);
        delay(400);
        noTone(speakerPin);

        tone(speakerPin,NOTE_D5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_B4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_A4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_G4);
        delay(300);
        noTone(speakerPin);

        delay(100);
        delay(100);
        delay(100);

        noTone(speakerPin);
        delay(1000);
        tone(speakerPin,NOTE_A4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_B4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_G4);
        delay(300);
        noTone(speakerPin);

        delay(100);
        delay(100);

        tone(speakerPin,NOTE_C5);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_G5);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_D5);
        delay(300);
        noTone(speakerPin);


        delay(100);
        delay(100);
        delay(100);

        noTone(speakerPin);
        delay(1000);
        tone(speakerPin,NOTE_G5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_D5);
        delay(300);
        noTone(speakerPin);

        tone(speakerPin,NOTE_C5);
        delay(200);
        noTone(speakerPin);


        delay(100);
        delay(100);

        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_G5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_D5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_A4);
        delay(200);
        noTone(speakerPin);

        delay(100);
        delay(100);
        delay(100);

        noTone(speakerPin);
        delay(1000);
        tone(speakerPin,NOTE_B4);
        delay(400);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_A4);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_G4);
        delay(400);
        noTone(speakerPin);

        delay(100);

        tone(speakerPin,NOTE_D5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_E5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_F5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_D5);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_A4);
        delay(200);
        noTone(speakerPin);
        tone(speakerPin,NOTE_B4);
        delay(300);
        noTone(speakerPin);
        tone(speakerPin,NOTE_C5);
        delay(300);
        noTone(speakerPin);

        delay(100);
        delay(100);
        delay(100);
    }
