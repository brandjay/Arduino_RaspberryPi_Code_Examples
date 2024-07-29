
#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9           // Configurable, see typical pin layout above
#define SS_PIN          10          // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance
int lightPin = 3;
int denyPin = 5;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  Serial.begin(9600);                                           // Initialize serial communications with the PC
  SPI.begin();                                                  // Init SPI bus
  mfrc522.PCD_Init();                                              // Init MFRC522 card
  Serial.println(F("Read personal data on a MIFARE PICC:"));  //shows in serial that it is ready to read
  pinMode(lightPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }
// check if card contains correct key code
// Read UID
   // Read UID
   String uidString = "";
   for (byte i = 0; i < mfrc522.uid.size; i++) {
      uidString += String(mfrc522.uid.uidByte[i], HEX);
        // Add a space between bytes for comparison
      if (i < mfrc522.uid.size - 1) {
          uidString += " ";
        }
    }
    
    uidString.toUpperCase();  // Convert UID to uppercase for comparison
    Serial.print("UID: ");
    Serial.println(uidString);
    // Check if UID matches "FF FF FF FF FF FF"
    if (uidString == "33 45 BB E4") {
        digitalWrite(lightPin, HIGH);  // Turn light on
        delay(2000);
        digitalWrite(lightPin, LOW);
    } else {
        digitalWrite(denyPin, HIGH);   // Turn light off
        delay(5000);
        digitalWrite(denyPin, LOW);
    }

    mfrc522.PICC_HaltA();
    mfrc522.PCD_StopCrypto1();


}
