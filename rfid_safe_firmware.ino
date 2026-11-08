#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

MFRC522 rfid(10, 9);
Servo myServo;

byte card[4] = {0xDE, 0xAD, 0xBE, 0xEF};
int pos = 90;
unsigned long t0 = 0;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  myServo.attach(6);
  myServo.write(90);
}

void loop() {
  if (pos == 0) {
    if (millis() - t0 >= 120000) {
      pos = 90;
      myServo.write(90);
    }
  }

  if (rfid.PICC_IsNewCardPresent()) {
    if (rfid.PICC_ReadCardSerial()) {
      bool match = true;
      if (rfid.uid.size != 4) {
        match = false;
      } else {
        if (rfid.uid.uidByte[0] != card[0]) match = false;
        if (rfid.uid.uidByte[1] != card[1]) match = false;
        if (rfid.uid.uidByte[2] != card[2]) match = false;
        if (rfid.uid.uidByte[3] != card[3]) match = false;
      }

      if (match == true) {
        if (pos == 90) {
          pos = 0;
          t0 = millis();
          myServo.write(0);
        } else {
          pos = 90;
          myServo.write(90);
        }
        delay(1000);
      } else {
        delay(1000);
      }

      rfid.PICC_HaltA();
      rfid.PCD_StopCrypto1();
    }
  }
}