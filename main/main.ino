int plasticPresent = 0;
int incomingPlastic = 0;

int buttonState = 0;

unsigned long time_period_now = 0;

String incomingString;

int nfc_LED = 5;


void setup() {
  Serial.begin(9600); 
  pinMode(nfc_LED, OUTPUT);

  LCD_Setup();
  NFC_Setup();
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
       incomingString = Serial.readStringUntil('\n');

    if (incomingString == "pla") {
      digitalWrite(nfc_LED, HIGH);
      ScanYourObject();
      
      while(!plasticPresent) {
        NFC_loop();
      }
      
      if (plasticPresent) {
        Serial.println(String(plasticPresent));
        plasticPresent = 0;
      }
    }
  }
  
  //if ((millis() - time_period_now) > 100) {
    //time_period_now = millis();
}
