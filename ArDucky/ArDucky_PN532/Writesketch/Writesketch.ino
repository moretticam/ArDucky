#include <SPI.h>
#include <PN532_SPI.h>
#include "PN532.h"

PN532_SPI pn532spi(SPI, 10);
PN532 nfc(pn532spi);

uint8_t data[16] = { '0', '0', '0', '1', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setup() {
  uint8_t success;
  uint8_t uid[16];  // Buffer to store the returned UID
  uint8_t uidLength; 
  uint8_t currentblock;                     // Counter to keep track of which block we're on
  bool authenticated = false;               // Flag to indicate if the sector is authenticated
  uint8_t keyuniversal[6] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial) {};
  Serial.println("Hi");
  nfc.begin();
  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata) {
    Serial.print("Didn't find PN53x board");
    while (1); // halt
  }
  Serial.print("Found chip PN5"); Serial.println((versiondata >> 24) & 0xFF, HEX);
  Serial.print("Firmware ver. "); Serial.print((versiondata >> 16) & 0xFF, DEC);
  Serial.print('.'); Serial.println((versiondata >> 8) & 0xFF, DEC);
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength);
  nfc.PrintHexChar(uid, uidLength);

  nfc.mifareclassic_AuthenticateBlock (uid, uidLength, 4, 1, keyuniversal);
  
  uint8_t statea = nfc.mifareclassic_WriteDataBlock (4, data);
  if (statea == 1) {
    Serial.println("Success!!");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
