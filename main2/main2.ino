/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */
 
// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 3;
int pinB = 13;
int pinC = 9;
int pinD = 11;
int pinE = 12;
int pinF = 4;
int pinG = 8;
int D1 = 2;
int D2 = 6;
int D3 = 5;
int D4 = 7;

unsigned long myTime = 0;
int orderOfExecution = 0;
int NUMBER = -120;
int number = NUMBER;
String incomingString;

void setup() {
  SetupDisplay();

  Serial.begin(9600);
 
}


void loop() {
  if (Serial.available() > 0) {
    incomingString = Serial.readStringUntil('\n');
    NUMBER = incomingString.toInt();
  }
  if (millis() - myTime > 2) {
    switch (orderOfExecution){
      case 0:
        number = minusSign(NUMBER);
        break;

      case 1:
        number = writeDigit(number, 1);
        break;
        
      case 2:
        number = writeDigit(number, 2);
        break;
      case 3:
        number = writeDigit(number, 3);
        break;
    }
    if (orderOfExecution < 3) {
      orderOfExecution++;
    }
    else {
      orderOfExecution = 0;
    }

    myTime = millis();
  }
}
