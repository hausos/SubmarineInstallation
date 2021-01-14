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


void setup() {
  SetupDisplay();

  Serial.begin(9600);
 
}


void loop() {
  int number = 120;
  
  writeTheNumber(number);


}
